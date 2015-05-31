/*
Magic Dates
The date June 10, 1960, is special because when we write it in the following format, the
month times the day equals the year.
	6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a two digit
year. The program should then determine whether the month times the day is equal to
the year. If so, it should display a message saying the date is magic. Otherwise, it should
display a message saying the date is not magic.
*/

#include <iostream>
using namespace std;

int main()
{
	int Month, Day, Year;

	//Ask user to enter a month, a day, and a two digit year.
	cout << "Enter (in numeric form) a month, a day, and a two digit year,\n"
		 << "and the program will determine if the date is magic.\n";
	cout << "Enter a month: ";
	cin  >> Month;
	cout << "Enter a day: ";
	cin  >> Day;
	cout << "Enter a Year";
	cin  >> Year;

	// Calculate and display weather the date is magic.
	if (Year == Month * Day)
		cout << "The date is magic.\n";
	else
		cout << "The date is not magic.\n";
	return 0;
}