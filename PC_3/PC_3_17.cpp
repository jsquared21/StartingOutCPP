// Interest Earned
// This program calculates and displays a
// report on interest earned on an investment.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int Compounded;
	double Principal,
		   Rate,
		   Interest,
		   Balance;

	// Input principal, interest rate and number of times
	// interest is compounded.
	cout << "Please enter the following data to\n";
	cout << "generate your interest earned report.\n";
	cout << "Enter the principal amount: ";
	cin  >> Principal;
	cout << "Enter the interest rate: ";
	cin  >> Rate;
	cout << "Enter the number of times the interest is compounded: ";
	cin  >> Compounded;

	// Calculate interest and final balance.
	// 1 + Rate/Compounded
	Rate /= 100;
	Balance = Principal * pow((1 + Rate/Compounded), Compounded);
	Interest = Balance - Principal;
	Rate *= 100;

	// Display report
	cout << "Interest Rate:       " << setw(8) << Rate << "%\n";
	cout << "Times Compounded:    " << setw(8) << Compounded << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Principal:          $" << setw(8) << Principal << endl;
	cout << "Interest:           $" << setw(8) << Interest << endl;
	cout << "Final Balance:      $" << setw(8) << Balance << endl;
	return 0;
}