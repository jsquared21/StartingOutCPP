#include <iostream>
#include "AbstractSeq.h"
using namespace std;

//********************************************************************************
// printSeq                                                                      *
// This function accepts two integer parameters k and m, where k < m. The        *
// function will print all the terms fun(k) through fun(m) of the sequence.      *
//********************************************************************************
void AbstractSeq::printSeq(int k, int m)
{
	if (k < m)
	{
		for (int i = k; i < m; i++)
		{
			cout << fun(i) << " ";
		}
		cout << endl;
	}
}

//********************************************************************************
// sumSeq                                                                        *
// This function accepts two integer parameters k and m, where k < m. The        *
// function will return the sum of all the terms fun(k) through fun(m).          *
//********************************************************************************
int AbstractSeq::sumSeq(int k, int m)
{
	int Sum = 0;
	if (k < m)
	{
		for (int i = k; i < m; i++)
		{
			Sum+= fun(i);
		}
	}
	return Sum;
}