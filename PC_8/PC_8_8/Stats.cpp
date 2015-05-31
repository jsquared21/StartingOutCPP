// Stats.cpp -- Stats implementation file.
#include <iostream>
#include "Stats.h"
using namespace std;

/***************************************************
 *                  storeValue                     *
 * This function accepts a double value and stores *
 * it in the array. The function keeps track of    *
 * how many values are currently in the array and  *
 * makes sure no more than 30 values are accepted. *
 ***************************************************/
bool Stats::storeValue(double value)
{
	if (size < 30)
	{
		Data[size] = value;
		size++;
		return true;
	}
	else
		return false;

}

/***************************************************
 *                    total                        *
 * This member function calculates and returns the *
 * total of the values in the array.               *
 ***************************************************/
double Stats::total()
{
	double Total = 0;
	for (int i = 0; i < size; i++)
	{
		Total += Data[i];
	}
	return Total;
}

/***************************************************
 *                   average                       *
 * This member function calculates and returns the *
 * average of the values in the array.             *
 ***************************************************/
double Stats::average()
{
	return total() / size;
}

/***************************************************
 *                    lowest                       *
 * This member function calculates and returns the *
 * address of the number with the lowest value in  * 
 * the array.                                      *
 ***************************************************/
int Stats::lowest()
{
	double Lowest = rainData[0];
	int Addr = 0;

	for (int i = 0; i < size; i++)
	{
		if(Data[i] < Lowest)
		{
			Lowest = rainData[i];
			Addr = i;
		}
	}
	return Addr;
}

/***************************************************
 *                    Highest                      *
 * This member function calculates and returns the *
 * address of the number with the highest value in * 
 * the array.                                      *
 ***************************************************/
int Stats::highest()
{
	double Highest = rainData[0];
	int Addr = 0;

	for (int i = 0; i < size; i++)
	{
		if(Data[i] > Highest)
		{
			Highest = Data[i];
			Addr = i;
		}
	}
	return Addr;
}