/*
Rate of Inflation

The annual rate of inflation is the rate at which money loses its value. For example, if the
annual rate of inflation is 3.0%, then in one year it will cost $1030 to buy the goods that
could have been purchased for $1000 today. Put another way, a year from now $1000 will
only buy 1/1.03 * $1000, or $970.87, worth of goods. Two years from now $1000 will
only buy only 1/1.03 of $970.87, or $942.59 worth of goods. Write a program that allows
the user to enter an annual rate of inflation and then reports how much $1000 today will
be worth each year for the next 10 years.

	Input validation: Do not accept an inflation rate less than 1% or greater than 15%.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int	   Year;
	double Rate,
		   Value = 1000;

	// Ask user to enter an annual rate of in flation
	cout << "This program generates a 10 year Rate of Inflation report on $1000.\n";
	cout << "What is the annual rate of inflation? ";
	cin  >> Rate;

	// Input validation: Do not accept an inflation 
	// rate less than 1% or greater than 15%.
	while (Rate < 1 || Rate > 15)
	{
		cout << "Error!\nAnnual rate of inflation must be\n"
			 << "greater than 1\% and less than 15\%.\n";
		cout << "What is the annual rate of inflation? ";
		cin  >> Rate;
	}

	// Convert pecentage to decimal
	Rate /= 100;

	cout << "\n Year        Value\n"
		 << "-----------------------\n";
	for(Year = 1; Year <= 10; Year++)
	{
		Value = Value * (1 / (1 + Rate));
		cout << "  " << setw(2) << Year << "        $"
			 << fixed << showpoint << right << setprecision(2)
			 << setw(7) << Value << endl;
	}
	return 0;
}