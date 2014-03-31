#include "Event.h"

Event::Event()
{
	kode = '\0';
	id = 0;
}

Event::Event(DateTime _dateTime, char _kode, int _id)
{
	datetime = _dateTime;
	kode = _kode;
	id = _id;
}

Event::Event(const Event& E)
{
	datetime = E.datetime;
	kode = E.kode;
	id = E.id;
}

Event& Event::operator=(const Event& E)
{
	datetime = E.datetime;
	kode = E.kode;
	id = E.id;
	return *this;
}
ostream &operator<<(ostream &output,const Event &e){
	output << e.datetime;
	output << " ";
	output << e.kode;
	output << " ";
	output << e.id;
	return output;
}
istream &operator>>(istream &input, Event &e){
	DateTime dt;
	char _kode;
	int _id;
	char tanda;
	input >> dt;
	input >> _kode;
	if(_kode == 'D'){
		input >> _id;
	}else{
		_id=	0;
	}
	e.setDateTime(dt);
	e.setKode(_kode);
	e.setId(_id);
	return input;
}
Event::~Event(){}

void Event::setDateTime(DateTime _DT)
{
	datetime = _DT;
}

void Event::setKode(char _kode)
{
	kode = _kode;
}

void Event::setId(int _id)
{
	id =_id;
}



DateTime Event::getDateTime(){
	return datetime;
}
char Event::getKode()
{
	return kode;
}

int Event::getId(){
	return id;
}
