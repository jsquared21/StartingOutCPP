#include <iostream>
#include <string>
#include "DayOfYear.h"
using namespace std;

int main()
{
	string Mth;
	int Num;

	cout << "Enter month: ";
	cin  >> Mth;
	cout << "Enter Day: ";
	cin  >> Num;

	DayOfYear Day(Mth, Num);

	Day.print();

	cout << "Call ++ Prefix: ";
	++Day;
	Day.print();

	cout << "Call ++ Postfix: ";
	Day++;
	Day.print();

	cout << "Call -- Prefix: ";
	--Day;
	Day.print();

	cout << "Call -- Postfix: ";
	Day--;
	Day.print();
	
	return 0;
}