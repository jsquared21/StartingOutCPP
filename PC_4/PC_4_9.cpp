/*
Software Sales
A software company sells a package that retails for $99. Quantity discounts are given
according to the following table.
________________________________________________
Quantity                        Discount
________________________________________________
10–19                           20%
20–49                           30%
50–99                           40%
100 or                          more 50%
________________________________________________

Write a program that asks for the number of units purchased and computes the total cost
of the purchase.

	 Input Validation: Make sure the number of units is greater than 0.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double RETAIL_PRICE = 99;

	int Units;
	double	RetailCost, 
			TotalCost;

	// Ask user to enter number of units purchased.
	cout << "To compute the total cost of the purchase\n";
	cout << "enter the number of units purchased: ";
	cin  >> Units;

	// Input validation to make sure number of units is greater than 0.
	if (Units > 0)
		{
			RetailCost = Units * RETAIL_PRICE;
			cout << fixed << showpoint << setprecision(2);
		}
		if (Units >= 10 && Units <= 19)
		{
			TotalCost = RetailCost - (RetailCost * .20);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
		else if (Units >= 20 && Units <= 49)
		{
			TotalCost = RetailCost - (RetailCost * .30);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
		else if (Units >= 50 && Units <= 99)
		{
			TotalCost = RetailCost - (RetailCost * .40);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
		else if (Units >= 100)
		{
			TotalCost = RetailCost - (RetailCost * .50);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
	else
		cout << "Total cost of the purchase: $" << RetailCost << endl;
	
	return 0;
}