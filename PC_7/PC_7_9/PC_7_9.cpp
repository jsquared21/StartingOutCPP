/*
Date
Design a class called Date that has integer data members to store month, day, and
year. The class should have a three-parameter default constructor that allows the
date to be set at the time a new Date object is created. If the user creates a
Date object without passing any arguments, or if any of the values passed are
invalid, the default values of 1, 1, 2001 (i.e., January 1, 2001) should be used.
The class should have member functions to print the date in the following formats:
	3/15/10
	March 15, 2010
	15 March 2010
Demonstrate the class by writing a program that uses it.
	Input Validation: Only accept values between 1 and 12 for the month, between 1
	and 31 for the day, and between 1950 and 2020 for the year.
*/
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

// Function prototype
void timeSettngs(Date &);

int main()
{
	Date Time;
	char Choice;

	cout << "Your time is incorrect.\n"
		 << "Enter time settings (Y/N)? ";
	cin  >> Choice;

	if (Choice == 'y' || Choice == 'Y')
		timeSettngs(Time);

	return 0;
}

void timeSettngs(Date &Obj)
{
	int m, d, y, c;

	cout << "Welcome to time settings!\n"
		 << "Enter the month: ";
	cin  >> m;
	cout << "Enter the day: ";
	cin  >> d;
	cout << "Enter the year: ";
	cin  >> y;

	Obj.setDate(m, d, y);

	cout << "Enter a number from the menu to choose "
	     << "how your time will be displayed.\n"
	     << " 1. 3/15/10\n"
	     << " 2. March 15, 2010\n"
	     << " 3. 15 March 2010\n"
	     << " 4. Exit time settings.\n";
	cin  >> c;

	switch(c)
	{
		case 1 : Obj.IntDate(Obj);
				 break;
		case 2 : Obj.MthDayYr(Obj);
				 break;
		case 3 : Obj.DayMthYr(Obj);
				 break;
		case 4 : cout << "Exiting time settings....";
	}
}
