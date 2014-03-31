
#include "Time.h"
    Time::Time(){
        jam     =   0;
        menit   =   0;
        detik   =   0;
    }
    Time::Time(int _jam, int _menit, int _detik){
        jam     =    _jam;
        menit   =   _menit;
        detik   =   _detik;
    }
    Time::Time(const Time& t){
        jam     =   t.jam;
        menit   =   t.menit;
        detik   =   t.detik;
    }
    Time& Time::operator=(const Time& t){
        jam     =   t.jam;
        menit   =   t.menit;
        detik   =    t.detik;
        return *this;
    }
    bool Time::operator>(const Time& t){
        bool status = false;
        if(jam > t.jam)
            status = true;
        else if(jam == t.jam)
            {
                if(menit > t.menit)
                    status = true;
                else
                    status = detik > t.detik;
            }
        return status;
    }

    bool Time::operator==(const Time& t){
        return (jam == t.jam) && (menit == t.menit) && (detik == t.detik);
    }
	ostream &operator<<(ostream &output,const Time &p)
	{
		output << p.jam << ":" << p.menit<< ":" << p.detik;
		return output;
	}
	istream &operator>>(istream &input, Time &p){
		int _jam,_menit,_detik;
		char tanda;
		input >> _jam >> tanda>>_menit>>tanda>>_detik;
		p.setJam(_jam);
		p.setMenit(_menit);
		p.setDetik(_detik);
		return input;
	}
    Time::~Time(){
    }
    void Time::setJam(int _jam){
        this->jam   =   _jam;
    }
    void Time::setMenit(int _menit)
    {
        this->menit =   _menit;

    }
    void Time::setDetik(int _detik){
        this->detik =   _detik;
    }

    int Time::getJam(){
        return jam;
    }
    int Time::getMenit(){
        return menit;
    }
    int Time::getDetik(){
        return detik;
    }
