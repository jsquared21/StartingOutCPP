/*
Circuit Board Price
An electronics company sells circuit boards at a 40 percent profit. Write a
program that calculates the selling price of a circuit board that costs them
$12.67 to produce. Display the result on the screen.
*/

// Program calculates and displays the selling prive of a circuit board.
#include <iostream>
using namespace std;

int main()
{
	double Cost 	 = 12.67,
		   PProfit	 = .40,
		   SellPrice = Cost * (1 + PProfit);

	cout << "The selling price on a circuit board ";
	cout << "that costs $" << Cost << " is $" << SellPrice;
	return 0; 
}
