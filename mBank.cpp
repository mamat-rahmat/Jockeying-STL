#include <iostream>
#include "Bank.h"

using namespace std;

int main(){
	
	Queue *myQueue = new Queue[3];
	myQueue[0].push(1);
	myQueue[0].push(2);
	myQueue[0].push(3);
	myQueue[1].push(3);
	myQueue[1].push(2);
	myQueue[1].push(1);
	myQueue[0].Print();
	myQueue[1].Print();
	DateTime _datetime;
	int n;
	cin >> _datetime;
	cin >> n;
	Bank myBank(_datetime,n);
	cout << myBank.getN();
	cout << myBank.getDateTime();
	cout << endl;
	myBank.Push(0,1);
	myBank.Push(0,2);
	myBank.Push(0,3);
	myBank.Push(1,11);
	myBank.Push(1,12);
	myBank.Push(1,13);
	myBank.getQueue(0).Print();
	myBank.getQueue(1).Print();
	return 0;
}