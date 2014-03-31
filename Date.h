#ifndef _DATE_H
#define _DATE_H
#include <iostream>
using namespace std;

class Date{
public:
    Date();
    Date(int,int,int);
    Date(const Date& d);
    Date& operator=(const Date& d);
    bool  operator>(const Date& d);
    bool  operator==(const Date& d);
	friend ostream &operator<<(ostream &output,const Date &d);
	friend istream &operator>>(istream &input, Date &d);
    ~Date();

    void setTanggal(int);
    void setBulan(int);
    void setTahun(int);
    int getTanggal();
    int getBulan();
    int getTahun();

private:
    int tanggal;
    int bulan;
    int tahun;
};
#endif // _DATE_H
