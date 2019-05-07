#include "Generation.h"

const std::map<Generation::SType, Generation::SDescription> sdescriptor ={
	{Generation::SILENCE, { 0,0,0 }},
	{Generation::FLASH60_6,{5,5,60} },
	{Generation::FLASH60_10,{3,3,60} },
	{Generation::FLASH60_12,{2,3,60} },
	{Generation::FLASH60_15,{2,2,60} }
	};


Generation::Generation(lsl::stream_outlet &outlet) : soutlet {outlet}
{
	
}




Generation::~Generation()
{

}

void Generation::setStimulusSequence(int nstimula, Generation::SType spattern[], int cycle_intervals[]) {
	
	Generation::SEvent event;
	this->sequence.clear();
	for (int i = 0; i < nstimula; i++)
	{
		event = { spattern[i], cycle_intervals[i] };
		this->sequence.push_back(event);

	}

	this->nextStimulus = this->sequence.begin();


}

void Generation::onStartStimulus() {
	this->nextStimulus = this->sequence.begin();
	this->state = STARTED;
	nextPresentation();
}

void Generation::onStopStimulus() {
	this->state = STOPPED;
}
void Generation::nextPresentation() {

	if (this->state != STARTED)
		return;

	Generation::SEvent event = *(this->nextStimulus);
	Generation::SDescription sdesc = sdescriptor[event.stype];
	float interval;
	if (event.cycles_interval < 0)
		interval = (-event.cycles_interval);
	else 
		interval = 1000 * (sdesc.nShow + sdesc.nHide) / sdesc.frameRate;
	// 
	float sample[3];
	sample[0] = event.stype;
	sample[1] = sdesc.nShow;
	sample[2] = sdesc.nHide;
	soutlet.push_sample(sample);
	// Next pattern
	++(this->nextStimulus);
	if (this->nextStimulus == this->sequence.end())
		this->nextStimulus = this->sequence.begin();

	QTimer::singleShot(interval, this, nextPresentation);


}