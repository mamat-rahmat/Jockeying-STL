#ifndef _BANK_H
#define _BANK_H

#include <deque>
#include <vector>
#include "Event.h"
#include "DateTime.h"

class Bank{
public:
    Bank();
	Bank(DateTime, int);
	Bank(const Bank&);
	Bank& operator=(const Bank&);
	~Bank();

	void setN(int);
	void setTMax(DateTime);
	void setQueue(deque<int> , int);

	int getN();
	DateTime getTMax();
	deque<int> getQueue(int);
		
    int Jockeying(int);
    void Arrival(int);
    void Departure(int);
    void Print();
    void Sweep();
    static int i;
private:
    int N;
    DateTime TMax;
    vector<deque<int> > T;
};
#endif // _BANK_H
