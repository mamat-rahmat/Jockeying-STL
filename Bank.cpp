#include "Bank.h"

int Bank::i=0;

Bank::Bank()
{

}

Bank::Bank(DateTime _DT, int _N)
{
	TMax = _DT;
	N = _N;	

	T.clear();
	T.resize(N+1);
}

Bank::Bank(const Bank& B)
{
	TMax = B.TMax;
	N = B.N;

	T.clear();
	T.resize(N);
	for(int i=0; i<N; i++)
		T[i] = B.T[i];
}

Bank& Bank::operator=(const Bank& B)
{
	TMax = B.TMax;
	N = B.N;

	T.clear();
	T.resize(N);
	for(int i=0; i<N; i++)
		T[i] = B.T[i];

	return *this;
}

Bank::~Bank()
{

}

void Bank::setN(int _N)
{
	N = _N;
}

void Bank::setTMax(DateTime _DT)
{
	TMax = _DT;
}

void Bank::setQueue(deque<int> L, int i)
{
	T[i] = L;
}
	
int Bank::getN()
{
	return N;
}

DateTime Bank::getTMax()
{
	return TMax;
}

deque<int> Bank::getQueue(int i)
{
	return T[i];
}
		
int Bank::Jockeying(int iOrigin)
{
	int iResult = -1, abs1, abs2;
	for(int i=0; i<N; i++)
	{
		if((int(T[iOrigin].size()) - int(T[i].size())) > 2)
		{
			if(iResult == -1)
			{
				iResult = i;
			}
			else
			{
				if(i - iOrigin > 0)
					abs1 = i - iOrigin;
				else
					abs1 = iOrigin - i;

				if(iResult - iOrigin > 0)
					abs2 = iResult - iOrigin;
				else
					abs2 = iOrigin - iResult;
				
				if((abs1 < abs2) || ((abs1 == abs2) && (i < iResult)))
					iResult = i;
			}
		}
	}
	if(iResult != -1)
	{
		int temp = T[iOrigin].back();
		T[iOrigin].pop_back();
		T[iResult].push_back(temp);
	}

	return iResult;
}

void Bank::Arrival(int no)
{
	int iPush=0, temp = T[0].size();
	for(int i=1; i<N; i++)
	{
		if(T[i].size() < temp)
		{
			iPush = i;
			temp = T[i].size();
		}
	}

	T[iPush].push_back(no);
}

void Bank::Departure(int no)
{
	int i;
	for(int j=0; j<N; j++)
		if(T[j][0] == no)
			i = j;

	T[i].pop_front();

	int temp = this->Jockeying(i);
}

void Bank::Print()
{
	for(int i=0; i<N; i++)
	{
		if(!T[i].empty())
		{
			cout << "Q[" << i << "] = ";
			for(int j=0; j<T[i].size(); j++)
			{
				if(j == 0)
					cout << "{";
				else
					cout << ",";
				cout << T[i][j];
			}
			cout << "}" << endl;
		}
	}
}

void Bank::Sweep()
{
	bool exist;
	do{
		exist = false;
		for(int i=0; i<N; i++)
			if(!T[i].empty())
				exist = true;
		
		if(exist)
		{
			for(int i=0; i<N; i++)
				if(!T[i].empty())
				{
					cout << "Departure " << T[i][0] << endl;
					T[i].pop_front();
				}
		}		
	}while(exist);
}
