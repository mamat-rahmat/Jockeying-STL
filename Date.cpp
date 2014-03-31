#include <iostream>
#include "Date.h"
using namespace std;

    Date::Date(){
        tahun   =   0;
        bulan   =   0;
        tanggal =   0;
    }
    Date::Date(int _tanggal,int _bulan,int _tahun){
        tahun   =   _tahun;
        bulan   =   _bulan;
        tanggal =   _tanggal;
    }
    Date::Date(const Date& d){
        tahun   =   d.tahun;
        bulan   =   d.bulan;
        tanggal =   d.tanggal;
    }
    Date& Date::operator=(const Date& d){
        tahun   =   d.tahun;
        bulan   =   d.bulan;
        tanggal =   d.tanggal;
        return *this;
    }
    bool Date::operator>(const Date& d){
        bool status = false;
        if(tahun > d.tahun)
            status = true;
        else if(tahun == d.tahun)
        {
            if(bulan > d.bulan)
                status =  true;
            else if(bulan == d.bulan)
                status = tanggal > d.tanggal;
        }

        return status;
    }
    bool Date::operator==(const Date& t){
        return (tahun == t.tahun) && (bulan == t.bulan) && (tanggal == t.tanggal);
    }
	ostream &operator<<(ostream &output,const Date &d)
	{
		output << d.tanggal << "-" << d.bulan << "-" << d.tahun;
		return output;
	}
	istream &operator>>(istream &input, Date &d){
		int _tanggal,_bulan,_tahun;
		char tanda;
		input >> _tanggal>>tanda>>_bulan>>tanda>>_tahun;
		d.setTanggal(_tanggal);
		d.setBulan(_bulan);
		d.setTahun(_tahun);
		return input;
	}
    Date::~Date(){}
    void Date::setTahun(int _tahun){
        this->tahun     =   _tahun;
    }
    void Date::setBulan(int _bulan){
        this->bulan     =    _bulan;
    }
    void Date::setTanggal(int _tanggal){
        this->tanggal   =   _tanggal;
    }
    int Date::getTanggal(){
        return tanggal;
    }
    int Date::getBulan(){
        return bulan;
    }
    int Date::getTahun(){
        return tahun;
    }
