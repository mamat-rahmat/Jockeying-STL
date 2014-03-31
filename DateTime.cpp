#include "DateTime.h"

using namespace std;

    DateTime::DateTime(){
        Date date(0,0,0);
        Time btime(0,0,0);
    }

    DateTime::DateTime(Date D, Time t){
        date    =   D;
        btime   =   t;
    }
    DateTime::DateTime(const DateTime& DT){
        date   =   DT.date;
        btime    =  DT.btime;
    }
    DateTime& DateTime::operator=(const DateTime& d){
        date   =   d.date;
        btime  =  d.btime;
        return *this;
    }
    
    bool DateTime::operator>(const DateTime& d){
        bool status = false;
        if(date > d.date)
            status = true;
        else if(date == d.date)
            status = btime > d.btime;
        return status;
    }
	

    bool DateTime::operator==(const DateTime& d){
        return (date == d.date) && (btime == d.btime);
    }
	ostream &operator<<(ostream &output,const DateTime &dt){
		Date d;
		Time t;
		char sign;

		output << dt.date << ";" << dt.btime;
	}
	istream &operator>>(istream &input, DateTime &dt){
		Date d;
		Time t;
		char tanda;
		input >> d>>tanda>>t;
		dt.setDate(d);
		dt.setTime(t);
		return input;
	}
    DateTime::~DateTime(){
    }
    void DateTime::setTime(Time _time){
        this->btime  =    _time;
    }
    void DateTime::setDate(Date _date){
        this->date  =    _date;
    }
    Time DateTime::getTime(){
        return btime;
    }
    Date DateTime::getDate(){
        return date;
    }

