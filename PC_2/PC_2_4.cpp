/*
Restaurant Bill
Write a program that computes the tax and tip on the restaurant bill for a patron
with a $44.50 meal charge. The tax should be 6.75 percent of the meal cost. The
tip should be 15 percent of the total after adding the tax. Display the meal cost,
tax amount, tip amount, and total bill on the screen.
*/

// Program computes the tax and tip amount.
#include <iostream>
using namespace std;

int main()
{
	double MealCost = 44.50,
		   Tax		= MealCost * .0675,
		   Tip 		= (MealCost + Tax) * .15,
		   TBill	= MealCost + Tax + Tip;

	cout << "Meal cost = $" << MealCost << endl;
	cout << "Tax amount = $" << Tax << endl;
	cout << "Tip amount = $" << Tip << endl;
	cout << "Total bill = $" << TBill << endl;
	return 0;
}