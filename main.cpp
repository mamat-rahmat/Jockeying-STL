#include "DateTime.h"
#include "Bank.h"
#include "Event.h"
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	DateTime temp, Tmax;
	int n, no;
	Event E;
    char c;

	cin >> Tmax;
	cin >> n;

	Bank bank(Tmax, n);
	while((Tmax > E.getDateTime()) && (cin >> E))
	{
		if((Tmax > E.getDateTime()) || (E.getDateTime() == Tmax))
		{
			cout << E << endl;
			if(E.getKode() == 'D')
				bank.Departure(E.getId());
			else
			{
				(Bank::i)++;
				bank.Arrival(Bank::i);
			}

			bank.Print();
			cout << endl;
		}
	}

	cout << "Loop terminate" << endl;

	bank.Sweep();
	return 0;
}
