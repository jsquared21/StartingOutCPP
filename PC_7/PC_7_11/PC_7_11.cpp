/*
Widget Factory
Design a class for a widget manufacturing plant. Assuming that 10 widgets may be
produced each hour, the class object will calculate how many days it will take to
produce any number of widgets. (The plant operates two shifts of eight hours each
per day.) Write a program that asks the user for the number of widgets that have
been ordered and then displays the number of days it will take to produce them.

	Input Validation: Do not accept negative values for the number of widgets
	                  ordered.
*/
#include <iostream>
#include "Widgets.h"
using namespace std;

int main()
{
	Widgets Order;
	int Num;

	// Ask user for the number of widgets ordered
	cout << "\n     Widgets time of completion program\n"
		 << "---------------------------------------------------\n";

	do
	{
		cout << "How many widgets have been ordered? ";
		cin  >> Num;

		if (Num < 0)
		{
			cout << "Error! Invalid Order.\n"
				 << "Widgets Ordered must be greater than 0.\n";

		}
		
	} while (Num < 0);

	Order.numOfDays(Num);

	return 0;
}