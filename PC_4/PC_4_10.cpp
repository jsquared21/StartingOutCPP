/*
Bank Charges
A bank charges $10 per month plus the following check fees for a commercial checking
account:

	$.10 each for fewer than 20 checks
	$.08 each for 20–39 checks
	$.06 each for 40–59 checks
	$.04 each for 60 or more checks

Write a program that asks for the number of checks written during the past month, then
computes and displays the bank’s fees for the month.

Input Validation: Do not accept a negative value for the number of checks written.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double MONTHLY_CHARGE = 10;

	int ChecksWritten;
	double BankFees;

	// Ask user to input number of checks written during the past month.
	cout << "Compute your bank's fees for the month.\n";
	cout << "Enter the number of checks written during the past month: ";
	cin  >> ChecksWritten;

	// Input validation: negative value for ChecksWritten not accepted.
	if (ChecksWritten >= 0)
	{
		cout << fixed << showpoint << setprecision(2);
		if (ChecksWritten < 20)
		{
			BankFees = MONTHLY_CHARGE + (ChecksWritten * 1.10);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
		else if (ChecksWritten < 40)
		{
			BankFees = MONTHLY_CHARGE + (ChecksWritten * 1.08);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
		else if (ChecksWritten < 60)
		{
			BankFees = MONTHLY_CHARGE + (ChecksWritten * 1.06);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
		else
		{
			BankFees = MONTHLY_CHARGE + (ChecksWritten * 1.04);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
	}
	else
	{	
		cout << "Invalid input! Nuber of checks cannot be less then 0.\n"
			 << "Please run the program again and enter a valid number.\n";
	}
	return 0;
}