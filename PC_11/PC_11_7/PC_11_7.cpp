#include <iostream>
#include <iomanip>
#include "DivSales.h"
using namespace std;

int main()
{
	const int N_DIVS = 6;
	DivSales division[N_DIVS];  // Array of six DivSales objects.
	double a, b, c, d;			// Holds quarterly sales values.
	bool Valid = true;


	// Ask user to enter the sales for four quarters for each division.
	cout << "Enter the sales for four quarters for each divion.\n";
	for (int i = 0; i < N_DIVS; i++)
	{
		do
		{
			cout << "Division " << (i + 1) << ": ";
			cin  >> a >> b >> c >> d;
			Valid = division[i].setQtrSales(a, b, c, d);
			if (!Valid)
			{
				cout << "Error! Only positive values for quarterly"
					 << " sales figures are accepted.\n";
			}
		} while (!Valid);
	}

	// Display a table showing the division sales for each quarter.
	cout << "\nDivision sales for each quarter:\n";
	cout << fixed << showpoint << setprecision(2);
	for (int i = 0; i < N_DIVS; i++)
	{
		cout << "Division " << (i + 1) << ": \n";
		for (int q = 0; q < 4; ++q)
		{
			cout << "  Quarter " << (q + 1) << ": $"
				 << division[i].getQtrSales(q) << endl; 
		} 
	}
	cout << endl;
	// Display the total corporate sales for the year.
	cout << "Total corporate sales for the year: $"
		 << division[0].getCorpSales() << endl;

	return 0;
}