/*
Gratuity Calculator
Design a Tips class that calculates the gratuity on a restaurant meal. Its only
class member variable, taxRate, should be set by a one-parameter constructor to
whatever rate is passed to it when a Tips object is created. If no argument is
passed, a default tax rate of .065 should be used. The class should have just one
public function, computeTip. This function needs to accept two arguments, the
total bill amount and the tip rate. It should use this information to compute the
meal cost before any tax was added. It should then apply the tip rate to just the
meal cost portion of the bill to compute and return the tip amount. Demonstrate
the class by creating a program that creates a single Tips object, then loops
multiple times to allow the program user to retrieve the correct tip amount using
various bill totals and desired tip rates.

	Input Validation: If a tax rate of less than 0 is passed to the constructor,
	use the default rate of .065. Do not allow the total bill or the tip rate to
	be less than 0.
*/
#include <iostream>
#include <iomanip>
#include "Tips.h"
using namespace std;

int main()
{
	double Bill, Tax, Tip;

	char ch;

	cout << "\n  Gratuity Calculator\n"
		 << "-----------------------\n";
	do
	{
		do
		{
			cout << "What is the total bill amount? ";
			cin  >> Bill;

			if (Bill < 0)
			{
				cout << "Invalid bill total!\n"
					 << "Bill total must be greater than 0.\n";

			}

		} while (Bill < 0);

		cout << "What is the tax rate? ";
		cin  >> Tax; 
		
		do
		{
			cout << "What is the tip rate? ";
			cin  >> Tip;

			if (Tip < 0)
			{
				cout << "Invalid tip rate!\n"
					 << "Tip rate must be greater than 0.\n";

			}

		} while (Tip < 0);

		Tips Meal(Tip);

		cout << fixed << showpoint << setprecision(2);
		cout << "\nTip amount $" << Meal.computeTip(Bill, Tip) << endl;

		cout << "Calculate another bill (Y/N)? \n";
		cin.ignore();
		cin.get(ch);

	} while (ch == 'y' || ch == 'Y'); 



}