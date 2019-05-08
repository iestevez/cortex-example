#include <QtCore/QCoreApplication>
#include <QtCore/QtDebug>
#include "StimulatedEEG.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	StimulatedEEG seeg;

	qInfo() << "";
	qInfo() << "#####";
	qInfo() << "Reminder: to subscribe to the EEG data stream, you must get an appropriate licence from Emotiv.";
	qInfo() << "#####";
	qInfo() << "";

	seeg.start("eeg", "1f7bec32-1cd7-45e0-97a1-fe5c73cb843a");

	return a.exec();
}
