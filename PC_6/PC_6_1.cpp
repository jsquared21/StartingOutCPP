/*
Markup
Write a program that asks the user to enter item's wholesale cost and its markup
percentage. It should then display the item's retail price.  For example:

	* If an item's wholesale cost is 5.00 and its markup percentage is 100%. then
	  the item's retail price is 10.00.
	* If an item's wholesale cost is 5.00 and its markup percentage is 50%. then
	  the item's retail price is 7.50.

The program should have a function named calculateRetail that receives the wholesale
cost and the markup percentage as arguments, and returns the retail price of the item.

	  Input Validation: Do not accept negative values ofr either the wholesale cost
	  of the item or the percent markup.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// function prototype
double calculateRetail();

int main()
{
	double RetalPrice;
	cout << "This program calculates and displays the retail price of an item.\n";
	RetalPrice = calculateRetail();
	cout << fixed << showpoint << setprecision(2);
	cout << "The retail price of the item is $" << RetalPrice <<endl;
	return 0;
}

/**********************************************************************
 *                          calculateRetail                           *
 * The function receives the wholesale cost and the markup percentage *
 * as arguments, and return the  retail price of the item             *
 **********************************************************************/
double calculateRetail()
{
	double Cost,
		   Markup;

    // Input Validation: only positive values for either the wholesale  
	// cost of the item or the percent markup.
	do
	{
		cout << "What is the item's wholesale cost? ";
		cin  >> Cost;
		if (Cost < 0)
		{
			cout << "Error!\n"
				 << "Wholesale cost must be a positive number.\n";
		}
	} while (!(Cost > 0));
	do
	{
		cout << "What is the item's markup percentage? ";
		cin  >> Markup;
		if (Markup < 0)
		{
			cout << "Error!\n"
				 << "The markup percentage must be a positive number.\n";	
		}
	} while (!(Markup > 0));

	Markup /= 100;
	return Cost * (1 + Markup);
}