// This program calculates and displays montly and yearly housing cost.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double RentAndMortgage,
		   Utilities,
		   Phone,
		   Cable,
		   MontlyCost,
		   YearlyCost;

	// Input monthly housing expenses.
	cout << "This program will calculate your\n";
	cout << "montly and yearly housing expenses.\n";
	cout << "Enter your rent or mortgage payment cost: ";
	cin  >> RentAndMortgage;
	cout << "Enter the cost of your utilities: ";
	cin  >> Utilities;
	cout << "Enter your monthly phone cost: ";
	cin  >> Phone;
	cout << "Enter your montly cable cost: ";
	cin  >> Cable;

	// Calculate monthly and yearly cost.
	MontlyCost = RentAndMortgage + Utilities + Phone + Cable;
	YearlyCost = MontlyCost * 12;

	// Display results.
	cout << "Total montly cost of expenses: $";
	cout << fixed << showpoint << setprecision(2);
	cout << setw(10) << MontlyCost << endl;
	cout << "Total yearly cost of expenses: $";
	cout << setw(10) << YearlyCost << endl;
	return 0;
}