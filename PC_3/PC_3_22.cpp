// Stock Transaction Program
// This program calculates and displays the fees
// accrued and profit/loss from a stock trade.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double BROOKER = .02; 		// Brooker commissions

	int Shares = 100;
	double StockPriceBuy  = 32.87,
		   SockCost       = Shares * StockPriceBuy,
		   BuyComm        = SockCost * BROOKER,
	       StockPriceSell = 33.92,
		   StockEarnings  = Shares * StockPriceSell,
		   SellComm       = StockEarnings * BROOKER,
		   Profit_Loss    = (StockEarnings - SellComm) - (SockCost + BuyComm);

	cout << fixed << showpoint << setprecision(2);
	cout << "The amount of money Joe paid for the stock:     $" << setw(8) << SockCost << endl;
	cout << "Broker's commission when Joe bought the stock:  $" << setw(8) << BuyComm << endl; 
	cout << "The amount that Joe sold the stock for:         $" << setw(8) << StockEarnings << endl;
	cout << "broker's commission when Joe sold the stock:    $" << setw(8) << SellComm << endl;
	cout << "Profit/loss after sale and broker commissions:  $" << setw(8) << Profit_Loss << endl;
	return 0;
}