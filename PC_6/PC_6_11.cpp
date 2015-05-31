/*
Stock Profit

The profit from the sale of a stock can be calculated as follows:

	Profit = ((NS * SP) - SC) - ((NS * PP) + PC)

where NS is the number of shares, SP is the sale price per share, SC is the sale
commission paid, PP is the purchase price per share, and PC is the purchase
commission paid. If the calculation yields a positive value, then the sale of the
stock resulted in a profit. If the calculation yields a negative number, then the
sale resulted in a loss.

Write a function that accepts as arguments the number of shares, the purchase
price per share, the purchase commission paid, the sale price per share, and the
sale commission paid. The function should return the profit (or loss) from the
sale of stock.

Demonstrate the function in a program that asks the user to enter the necessary
data and displays the amount of the profit or loss.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double stockProfitLoss(int, double, double, double, double);

int main()
{
	int   NumOfShares;
	double ProfitLoss,
		   PurchPrice,
		   PurchComm,
		   SalePrice,
		   SaleComm;

	cout << "\nCaculate the profit (or loss) from the sale of stock.\n"
		 << "What is the number of shares? ";
	cin  >> NumOfShares;
	cout << "What is the purchase price per share? ";
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;

	ProfitLoss = stockProfitLoss(NumOfShares, PurchPrice, PurchComm, SalePrice,
								 SaleComm);

	cout << "The profit / loss from the sale of stock is $";
	cout << fixed << showpoint << setprecision(2);
	cout << ProfitLoss << endl << endl;

	return 0;
}

/*******************************************************************************
 *                            stockProfitLoss                                  * 
 * This function accepts as arguments the number of shares, the purchase price *
 * per, share teh purchase commission paid, the sale price per share, and the  *
 * sale commission paid. Calculates and returns teh profit (or loss) from the  *
 * sale of stock.                                                              * 
 *******************************************************************************/
double stockProfitLoss(int NumOfShares, double PurchPrice, double PurchComm,
	                   double SalePrice, double SaleComm)
{
	return ((NumOfShares * SalePrice) - SaleComm) - ((NumOfShares * PurchPrice)
		    + PurchComm);
}