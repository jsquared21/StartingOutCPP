/*
author Jabari James <jabarimail@gmail.com>
squared, Inc., 2014.
copyright 2014 by jsquared
version 0.1

Sales Tax
Write a program that computes the total sales tax on a $52 purchas.
Assume the state tax is 4 percent and the county sales tax is 2 percent.
Display the purchase price, state tax, county tax, and the total tax on the screen.
*/

// This program computes the total sales tax of a purchase.
#include <iostream>
using namespace std;

int main()
{
	int 	PPrice	 = 52;
	double	State	 = PPrice * .04,
			County	 = PPrice * .02,
			TotalTax = State + County;

	cout << "Purchase Price = $" << PPrice << endl;
	cout << "State tax = $" << State << endl;
	cout << "County tax = $" << County << endl;
	cout << "Total Tax = $" << TotalTax << endl;
	return 0;
}