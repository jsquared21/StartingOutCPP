/*
Multiple Stock Sales

Use the function that you wrote for Programming Challenge 11 (Stock Profit) in a
program that calculates the total profit or loss from the sale of multiple stocks.
The program should ask the user for the number of stock sales, and the necessary
data for each stock sale. It should accumulate the profit or loss for each stock
sale and then display the total.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int &, double &, double &, double &, double &, int);
double stockProfitLoss(int, double, double, double, double);
double totalProfitLoss(int);

int main()
{
	int NumOfSales;
	double   Total;

	cout << "\nCaculate the total profit (or loss) from  sales of stock.\n";
	cout << "What is the number of stock sales? ";
	cin  >> NumOfSales;

	Total = totalProfitLoss(NumOfSales);

	cout << "Total profit or loss from sales of stock: $";
	cout << fixed << showpoint << setprecision(2);
	cout << Total << endl << endl;

	return 0;
}

/*******************************************************************************
 *                            totalProfitLoss                                  *
 *     This function calculates the total profit or loss from the sale of      *    
 *     multiple stocks                                                         *
 *******************************************************************************/
double totalProfitLoss(int NumOfSales)
{
	int    NumOfShares;
	
	double PurchPrice,
		   PurchComm,
		   SalePrice,
		   SaleComm,
		   ProfitLoss,
		   Total = 0;

	for (int Sale = 1; Sale <= NumOfSales; Sale++)
	{
		getData(NumOfShares, PurchPrice, PurchComm, SalePrice, SaleComm, Sale);

		ProfitLoss = stockProfitLoss(NumOfShares, PurchPrice, PurchComm,
									 SalePrice, SaleComm);
		Total += ProfitLoss;

		cout << endl;
	}

	return Total;
}

/*******************************************************************************
 *                               getData                                       *
 * This function asks the user for the number of stock sales, the number of    *
 * shares, the purchase price per share, the purchase commission paid, the     *
 * sale price per share, and the sale commission paid an stores the data in a  *
 * reference parameter.                                                        *
 *******************************************************************************/
void getData(int &NumOfShares, double &PurchPrice,
	         double &PurchComm, double &SalePrice, double &SaleComm, int Sale)
{
	cout << "\nPlease enter the follow data for stock sale #"
		 << Sale << ":\n";
	cout << "What is the number of shares? ";
	cin  >> NumOfShares;
	cout << "What is the purchase price per share? ";
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;
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