// Monthly Payments
// This program calculates and displays monthly payments on a loan.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int NumOfPayments;
	double Loan,
		   AnnualRate,
		   MthRate,
		   MthPayment,
		   PaidBack,
		   Interest;

	// Input amount of the loan, number of
	// payments and percent annual interest rate.
	cout << "Enter the following data to generate\nyour monthly payments report.\n";
	cout << "Loan Amount: ";
	cin  >> Loan;
	cout << "Annual interest rate: ";
	cin  >> AnnualRate;
	cout << "Number of Payments: ";
	cin  >> NumOfPayments;

	// Calculate monthly payments, monthly interest rate,
	// amount paid back and interest paid.
	AnnualRate /= 100;
	MthRate = AnnualRate / 12;
	MthPayment =  Loan * ((MthRate * pow(1 + MthRate, NumOfPayments))
								/ (pow(1 + MthRate, NumOfPayments) - 1));
	PaidBack = MthPayment * NumOfPayments;
	Interest = PaidBack - Loan;
	MthRate *= 100;

	// Display report
	cout << fixed << showpoint << setprecision(2);
	cout << "Loan Amount:              $" << setw(9) << Loan << endl;
	cout << "Monthly Interest Rate:     " << setw(8)
		 << static_cast<int>(MthRate) << "%\n";
	cout << "Number of Payments:        " << setw(9) << NumOfPayments << endl;
	cout << "Monthly Payment:          $" << setw(9) << MthPayment << endl;
	cout << "Amount Paid Back:         $" << setw(9) << PaidBack << endl;
	cout << "Interest Paid:            $" << setw(9) << Interest << endl;
	return 0;
}