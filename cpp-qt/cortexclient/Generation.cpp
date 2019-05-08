#include "Generation.h"

// Initialize static member sdescriptor: a map between stimulus patterns and descriptors 
std::map<Generation::SType, Generation::SDescription> Generation::sdescriptor ={
	{Generation::SILENCE, { 0,0,0 }},
	{Generation::FLASH60_6,{5,5,60} },
	{Generation::FLASH60_10,{3,3,60} },
	{Generation::FLASH60_12,{2,3,60} },
	{Generation::FLASH60_15,{2,2,60} }
	};

// Constructor: a lsl::stream_outlet is required.
Generation::Generation(lsl::stream_outlet &outlet) : soutlet {outlet}
{
	
}




Generation::~Generation()
{

}

// Building a sequence of stimula. 
// nstimula: number of patters in the sequence.
// spattern: array of simulus patterns.
// cycle_intervals: duration of each pattern. Positive values are interpreted
// as cycles (show - hide) and negative patterns as time duration in miliseconds.
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

// Once the sequence is created this method starts the production of stimula.
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

	qInfo() << "Stimulo Lanzado";
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

	QTimer::singleShot(interval, this,&Generation::nextPresentation);


}