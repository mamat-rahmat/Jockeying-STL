#include <iostream>
#include "Date.h"
using namespace std;

int main(){
    Date cDate;
    Date xDate(12,2,1993);
    cout << "xDate: " << endl;
    cout<< "Tanggal: " << xDate.getTanggal() << endl;
    cout<< "Bulan: " << xDate.getBulan()<< endl;
    cout << "Tahun: " << xDate.getTahun()<< endl;
    cDate.setTahun(1994);
    cDate.setBulan(21);
    cDate.setTanggal(23);
    cout << "cDate: " << endl;
    cout<< "Tanggal: " << cDate.getTanggal()<< endl;
    cout<< "Bulan: " << cDate.getBulan()<< endl;
    cout << "Tahun: " << cDate.getTahun()<< endl;
    cout << "xDate: " << endl;
    xDate   =    cDate;
    Date bDate  =   xDate;
    cout<< "Tanggal: " << bDate.getTanggal()<< endl;
    cout<< "Bulan: " << bDate.getBulan()<< endl;
    cout << "Tahun: " << bDate.getTahun()<< endl;
    cout<< xDate.operator>(cDate) << endl;
	cout << xDate<< endl;
	cin >> xDate;
	cout << xDate;
    return 0;
}
