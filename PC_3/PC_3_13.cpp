// Monthly Sales Tax
// This program calculates and displays a monthly tax report.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const double STATE_TAX_RATE  = .04,
				 COUNTY_TAX_RATE = .02;
	
	string Month;

	double Year,
		   TotalIncome,
		   ProductSales,
		   StateTax,
		   TotalSalesTax,
		   CountyTax;

	// Input month, year and total income.
    cout << "Please enter the following data to\n";
    cout << "prepare your sales tax report.\n";
	cout << "Enter Month: ";
	cin  >> Month;
	cout << "Enter Year: ";
	cin  >> Year;
	cout << "Enter total income collected: ";
	cin  >> TotalIncome;

	// Calculate Taxes
	ProductSales = TotalIncome / 1.06;
	StateTax = ProductSales * STATE_TAX_RATE;
	CountyTax = ProductSales * COUNTY_TAX_RATE;
	TotalSalesTax = StateTax + CountyTax;


	// Create report
	cout << "Month: " << Month << " " << Year << endl;
	cout << "-------------------\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Total Collected:    $" << setw(9) << TotalIncome << endl;
	cout << "Sales:              $" << setw(9) << ProductSales << endl;
	cout << "County Sales Tax:   $" << setw(9) << CountyTax << endl;
	cout << "State Sales Tax:    $" << setw(9) << StateTax << endl;
	cout << "Total Sales Tax:    $" << setw(9) << TotalSalesTax << endl;
	return 0;
}