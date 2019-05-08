#include "StimulatedEEG.h"
#include <QtCore/QCoreApplication>
#include <QtCore/QJsonArray>
#include <QtCore/QJsonDocument>
#include <QtCore/QtDebug>
#include <lsl_cpp.h>

Generation::SType StimulatedEEG::spattern[] = { Generation::FLASH60_15, Generation::SILENCE };
int StimulatedEEG::cycle_interval[] = { -5000,-5000 };

const char* name_markers = "StimulusStream";

StimulatedEEG::StimulatedEEG(QObject *parent) :
	lslInfoEEG("SimpleStream", "EEG", 20),
	lslOutletEEG(lslInfoEEG),
	lslInfoStimulus(name_markers, "Markers",3,lsl::IRREGULAR_RATE),
	lslOutletStimulus(lslInfoStimulus),
	generator(lslOutletStimulus),
	QObject(parent)
{
	
	connect(&client, &CortexClient::connected, this, &StimulatedEEG::onConnected);
	connect(&client, &CortexClient::disconnected, this, &StimulatedEEG::onDisconnected);
	connect(&client, &CortexClient::errorReceived, this, &StimulatedEEG::onErrorReceived);
	connect(&client, &CortexClient::subscribeOk, this, &StimulatedEEG::onSubscribeOk);
	connect(&client, &CortexClient::unsubscribeOk, this, &StimulatedEEG::onUnsubscribeOk);
	connect(&client, &CortexClient::streamDataReceived, this, &StimulatedEEG::onStreamDataReceived);
	connect(&client, &CortexClient::closeSessionOk, this, &StimulatedEEG::onCloseSessionOk);
	connect(&finder, &HeadsetFinder::headsetsFound, this, &StimulatedEEG::onHeadsetsFound);
	connect(&creator, &SessionCreator::sessionCreated, this, &StimulatedEEG::onSessionCreated);
	connect(this, &StimulatedEEG::startStimulus, &generator, &Generation::onStartStimulus);
}

StimulatedEEG::~StimulatedEEG()
{
}

void StimulatedEEG::start(QString stream, QString license) {
	this->stream = stream;
	this->license = license;
	nextDataTime = 0;
	timerId = 0;
	client.open();

}

void StimulatedEEG::onConnected() {
	qInfo() << "Connected to Cortex.";
	finder.findHeadsets(&client);
}

void StimulatedEEG::onDisconnected() {
	qInfo() << "Disconnected.";
	QCoreApplication::quit();
}

void StimulatedEEG::onErrorReceived(QString method, int code, QString error) {
	qCritical() << "Cortex returned an error:";
	qCritical() << "\t" << method << code << error;
	QCoreApplication::quit();
}

void StimulatedEEG::onHeadsetsFound(const QList<Headset> &headsets) {
	finder.clear();

	// we take the first headset
	// TODO in a real application, you should ask the user to choose a headset from the list
	this->headsetId = headsets.first().id;

	// next step: create a session for this headset
	creator.createSession(&client, headsetId, license);
}

void StimulatedEEG::onSessionCreated(QString token, QString sessionId) {
	creator.clear();
	this->token = token;
	this->sessionId = sessionId;

	// next step: subscribe to a data stream
	client.subscribe(token, sessionId, stream);
}

void StimulatedEEG::onSubscribeOk(QString sid) {
	qInfo() << "Subscription successful, sid" << sid;
	qInfo() << "Receiving data for 30 seconds.";
	timerId = startTimer(120 * 1000);
	generator.setStimulusSequence(2, spattern, cycle_interval);
	emit startStimulus();
}

void StimulatedEEG::onStreamDataReceived(
	QString sessionId, QString stream, double time, const QJsonArray &data) {
	Q_UNUSED(sessionId);
	// a data stream can publish a lot of data
	// we display only a few data per second

	//while (!lslOutlet.wait_for_consumers(120));
	float sample[20];
	int j = 0;
	QJsonArray::const_iterator i;
	for (i = data.begin(); i != data.end(); ++i, j++) {
		sample[j] = (*i).toDouble();
	}
	sample[19] = time;
	lslOutletEEG.push_sample(sample);
	if (time >= nextDataTime) {
		qInfo() << stream << data.at(0) << data;

		nextDataTime = time + 0.25;
	}
}

void StimulatedEEG::timerEvent(QTimerEvent *event) {
	if (event->timerId() == timerId) {
		killTimer(timerId);
		client.unsubscribe(token, sessionId, stream);
	}
}

void StimulatedEEG::onUnsubscribeOk(QString msg) {
	qInfo() << "Subscription cancelled:" << msg;
	client.closeSession(token, sessionId);
}

void StimulatedEEG::onCloseSessionOk() {
	qInfo() << "Session closed.";
	client.close();
}
