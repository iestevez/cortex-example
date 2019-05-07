#pragma once
#include <QTCore/QObject>
#include <QtCore/QTimer>
#include <lsl_cpp.h>

class Generation :
	public QObject
{
public: 
	enum STATUS {STARTED,STOPPED};
	enum SType { SILENCE, FLASH60_6, FLASH60_10, FLASH60_12, FLASH60_15 };
	
	struct SDescription {
		int nShow;
		int nHide;
	
		int frameRate;
	};
	
	struct SEvent {
		SType stype;
		int cycles_interval; // Positive as cycles and negative as interval
	};

	Generation(lsl::stream_outlet &soutlet);
	~Generation();
	void setStimulusSequence(int nstimula, SType spattern[],  int cycle_intervals[]);

signals:
	void presented();

public slots:
	void onStartStimulus();
	void onStopStimulus();
	void nextPresentation();


protected:
	void timerEvent(QTimerEvent *event);

private:

	std::vector<SEvent> sequence{};
	STATUS state;
	std::vector<SEvent>::iterator nextStimulus;
	lsl::stream_outlet &soutlet;
	static const std::map<SType, SDescription> sdescriptor;

};

