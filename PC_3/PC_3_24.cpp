// Using Files--Monthly Sales Tax Modification
// Monthly Sales Tax
// This program calculates and displays a monthly tax report.
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream FileOut;				// To define ofstream object.
	FileOut.open("PC_3_24.txt"); 	// To open file.


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


	// Create report and write to file.
	FileOut << "Month: " << Month << " " << Year << endl;
	FileOut << "-------------------\n";
	FileOut << fixed << showpoint << setprecision(2);
	FileOut << "Total Collected:    $" << setw(9) << TotalIncome << endl;
	FileOut << "Sales:              $" << setw(9) << ProductSales << endl;
	FileOut << "County Sales Tax:   $" << setw(9) << CountyTax << endl;
	FileOut << "State Sales Tax:    $" << setw(9) << StateTax << endl;
	FileOut << "Total Sales Tax:    $" << setw(9) << TotalSalesTax << endl;

	// Close file.
	FileOut.close();
	cout << "\nSaved to file\n";
	return 0;
}