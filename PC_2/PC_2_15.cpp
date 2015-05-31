/*
Stock Loss
Kathryn bought 600 shares of stock at a price of $21.77 per share. A year later
she sold them for just $16.44 per share. Write a program that calculates and
displays the following.

	* The total amount paid for the stock.
	* The total amount received from selling the stock.
	* The total amount of money she lost.
*/
// This program calculates and displays information from a stock trade.
#include <iostream>
using namespace std;

int main()
{
	double NumOfShares  = 600,
		   CostOfShares = NumOfShares * 21.77,
		   SellPrice 	= NumOfShares * 16.44,
		   Loss			= CostOfShares - SellPrice;

	cout << "The total amount paid for the stock = $" << CostOfShares << endl;
	cout << "The total amount received from selling the stock = $" << SellPrice << endl;
	cout << "The total amount of money lost = $" << Loss << endl;
	return 0;
}