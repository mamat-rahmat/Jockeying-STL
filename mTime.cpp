#include <iostream>
#include "Time.h"
using namespace std;

int main(){
    Time cTime;
    Time xTime(12,2,19);
    cout << "xDate: " << endl;
    cout<< "Detik: " << xTime.getDetik() << endl;
    cout<< "Menit: " << xTime.getMenit()<< endl;
    cout << "Jam: " << xTime.getJam()<< endl;

    cTime.setDetik(12);
    cTime.setMenit(45);
    cTime.setJam(13);
    cout << "cDate: " << endl;
    cout<< "Detik: " << cTime.getDetik() << endl;
    cout<< "Menit: " << cTime.getMenit()<< endl;
    cout << "Jam: " << cTime.getJam()<< endl;
    xTime   =   cTime;
    cout << "xDate: " << endl;
    cout<< "Detik: " << xTime.getDetik() << endl;
    cout<< "Menit: " << xTime.getMenit()<< endl;
    cout << "Jam: " << xTime.getJam()<< endl;

    cout << cTime.operator>(xTime) << endl;
    cout << cTime.operator==(xTime) << endl;
	cout <<xTime << endl;
	cin  >>xTime;
	cout <<xTime;
	cout << endl;
    return 0;
}
