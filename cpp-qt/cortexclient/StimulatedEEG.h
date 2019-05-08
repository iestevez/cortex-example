#pragma once
#ifndef STIMULATEDEEG_H
#define STIMULATEDEEG_H

#include <QObject>
#include <QtCore/QObject>
#include "CortexClient.h"
#include "HeadsetFinder.h"
#include "SessionCreator.h"
#include "Headset.h"
#include "Generation.h"
#include <lsl_cpp.h>

class StimulatedEEG : public QObject
{
	Q_OBJECT

public:
	explicit StimulatedEEG(QObject *parent=nullptr);
	~StimulatedEEG();
	void start(QString stream, QString license = "");

signals:

	void startStimulus();

private slots:
	void onConnected();
	void onDisconnected();
	void onErrorReceived(QString method, int code, QString error);

	void onHeadsetsFound(const QList<Headset> &headsets);
	void onSessionCreated(QString token, QString sessionId);

	void onSubscribeOk(QString sid);
	void onUnsubscribeOk(QString msg);

	void onStreamDataReceived(QString sessionId, QString stream,
		double time, const QJsonArray &data);

	void onCloseSessionOk();

private:
	CortexClient client;
	HeadsetFinder finder;
	SessionCreator creator;

	QString license;
	QString stream;
	QString headsetId;
	QString token;
	QString sessionId;
	double nextDataTime;
	int timerId;

protected:
	void timerEvent(QTimerEvent *event);

	

	// LSL attributes
	lsl::stream_info lslInfoStimulus;
	lsl::stream_outlet lslOutletStimulus;

	const lsl::stream_info lslInfoEEG;
	lsl::stream_outlet lslOutletEEG;
	

	// Stimula generation
	Generation generator;
	static Generation::SType spattern[];
	static int cycle_interval[];
};
#endif
