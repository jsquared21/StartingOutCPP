/*
Present Value

Suppose you want to deposit a certain amount of money into a savings account,
and then leave it alone to draw interest for the next 10 years. At the end of
10 years you would like to have $10,000 in the account. How much do you need
to deposit today to make that happen? To find out you can use the following
formula, which is known as the present value formula:

				P = F / (1 + r)^n

The terms in the formula are as follows:

	• P is the present value, or the amount that you need to deposit today.
	• F is the future value that you want in the account (in this case, $10,000).
	• r is the annual interest rate (expressed in decimal form, such as .042).
	• n is the number of years that you plan to let the money sit in the account.

Write a program with a function named presentValue that performs this calculation.
The function should accept the future value, annual interest rate, and number of
years as arguments. It should return the present value, which is the amount that
you need to deposit today. Demonstrate the function in a program that lets the
user experiment with different values for the formula’s terms.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function prototypes
double presentValue(double, double, int);

int main()
{
	double PValue,
		   FValue,
		   AIRate;
	int    	  Yrs;

	cout << "\n              Present value calculator\n"
		 << "--------------------------------------------------------\n"
		 << "What is the future amount you want in the account? ";
	cin  >> FValue;
	cout << "What is your annual interest rate? ";
	cin  >> AIRate;
	cout << "How many years do you plan to let the money sit in the account? ";
	cin  >> Yrs;

	PValue = presentValue(FValue, AIRate, Yrs);

	cout << fixed << showpoint << setprecision(2);
	cout << "You need to deposit $" << PValue << " to have a balance of $"
		 << FValue << " in " << Yrs << " years.\n\n";

	return 0;
}

/*****************************************************************************
 *                           presentValue                                    *
 *  This function accepts future value, annual interest rate and the number  *
 *  of years arguments. Then calculates and returns the present value.       *
 *****************************************************************************/
double presentValue(double FValue, double AIRate, int Yrs)
{
	return FValue / pow(1 + AIRate, Yrs);
}

