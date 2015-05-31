#include <iostream>
#include <string>
#include "DayOfYear.h"
using namespace std;

int main()
{
	int Num;

	cout << "Enter an integer representing a day of the year and\n"
		 << "this program will print it in month-day format: ";
	cin  >> Num;

	DayOfYear Day = Num;

	Day.print();
}