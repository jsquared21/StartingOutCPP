#include <iostream>
#include <string>
#include "DayOfYear.h"
using namespace std;

// Definition of the static member DayOfYear.
string DayOfYear::Month[] =
	{"January", "February", "March", "April", "May", "June", "July",
	 "August", "September", "October", "November", "December"};

//********************************************************************************
//                                 DayOfYear                                     *
// This constructor takes as parameter an interger representing the day of the   *
// year.                                                                         *
//********************************************************************************
DayOfYear::DayOfYear(int num)
{
	if (num > 0 || num <= 365)
		Day = num;
}

//********************************************************************************
//                                    print                                      *
//                   prints the day in the month-day format.                     *     
//********************************************************************************
void DayOfYear::print()
{
	// Array that holds the number of days in each month.
	int Mth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int Beg = 0, // Number of days accumulated at the begining of the month
	    M,		 // Holds subscript of month
	    D;       // Holds day of month 

	// Caluculate month and day of month.
	for (int i = 0; i < 12; i++)
	{
		if (Day < (Beg + (Mth[i] + 1)))
		{
			M = i;
			D = Day - Beg;
			break;
		}

		Beg += Mth[i];
	}

	// Display month-day format
	cout << Month[M] << " " << D << endl;
}
