// Property Tax
// This program calculates and displays annual property tax.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double ASSESSED_RATE = .6;
	
	double ActualValue,
		   CurrentTaxRate,
		   AssessedValue,
		   AnnualPropertyTax;

	// Input the actual value of the property and the current tax rate.
	cout << "Enter the actual value of the property: $";
	cin  >> ActualValue;
	cout << "Enter the current tax rate for\n";
	cout << "each $100 of assessed value: $";
	cin  >> CurrentTaxRate;

	// Calculate annual property tax.
	AssessedValue = ActualValue * ASSESSED_RATE;
	AnnualPropertyTax = AssessedValue * (CurrentTaxRate / 100);

	// Display annual property tax.
	cout << fixed << showpoint << setprecision(2);
	cout << "Annual Property tax: $" << AnnualPropertyTax << endl;
	return 0;
}