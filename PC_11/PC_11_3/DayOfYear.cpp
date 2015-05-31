#include <iostream>
#include <string>
#include "DayOfYear.h"
using namespace std;

// Definition of the static member DayOfYear.
string DayOfYear::Month[] =
	{"January", "February", "March", "April", "May", "June", "July",
	 "August", "September", "October", "November", "December"};

// Array that holds the number of days in each month.
const int SIZE = 12;
int Mth[SIZE] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Function Prototype
int linearsearch(string [], int, string);

//********************************************************************************
//                                 DayOfYear                                     *
// This constructor takes two parameters: a string representing a month and an   *
// integer in the range of 0 through 31 representing the day of the month. The   *
// constructor initializes the integer member of the class to represent the day  *
// specified by the month and day of month parameters. The constructor           *
// terminates the program with an appropriate error message if the number        *
// entered for a day is outside the range of days for the month given.           *
//********************************************************************************
DayOfYear::DayOfYear(string str, int num)
{
	int Result,			// Hold the linearsearch result
		NumOfDays = 0;	// Accumulates the number of days
						// at the start of each month

	Result = linearsearch(Month, SIZE, str);

	// Terminate the program with an appropriate error message if 
	// the string entered for a month is not in list of the months.
	if ( Result == -1)
	{
		cout << "Error! Invalid month.\n";
		exit(0);
	}
	
	// Terminate the program with an appropriate error message if the number
	// entered for a day is outside the range of days for the month given.
	if (num > Mth[Result] || num < 0)
	{
		cout << "Error! Invalid number of a day.\n"
		     << str << " only has " << Mth[Result] << " days." << endl;
		exit(0);
	}
	else
	{	// Initializes the integer member of the class to represent the 
		// day specified by the month and day of month parameters.
		for (int i = 0; i < Result; i++)
		{
			NumOfDays += Mth[i];
		}

		Day = NumOfDays + num;
	}
}

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
	
	int Beg = 0, // Number of days accumulated at the begining of the month
	    M,		 // Holds array subscript of month
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

//********************************************************************************
//                     Overloaded prefix ++ operator                             *
//********************************************************************************
DayOfYear DayOfYear::operator++()
{
	if (Day == 365)
		Day = 1;
	else
		Day++;
	return *this;
}

//********************************************************************************
//                     Overloaded postfix ++ operator                            *
//********************************************************************************
DayOfYear DayOfYear::operator++(int)
{
	if (Day == 365)
		Day = 1;
	else
		Day++;
	return *this;
}

//********************************************************************************
//                     Overloaded prefix -- operator                             *
//********************************************************************************
DayOfYear DayOfYear::operator--()
{
	if (Day == 1)
		Day = 356;
	else
		Day--;
	return *this;
}

//********************************************************************************
//                     Overloaded postfix -- operator                            *
//********************************************************************************
DayOfYear DayOfYear::operator--(int)
{
	if (Day == 1)
		Day = 365;
	else
		Day--;
	return *this;
}

//********************************************************************************
//                                 linearsearch                                  *
// This function performs a linear search on an string array. The array, which   *
// has size elements, is searched of the string stored in value. If the string   *
// is found, its array subscript is returned. Otherwise, -1 is returned.         * 
//********************************************************************************
int linearsearch(string list[], int size, string value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (list[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}