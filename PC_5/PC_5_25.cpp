/*
Savings Account Balance

Write a program that calculates the balance of a savings account at the end of a threemonth
period. It should ask the user for the starting balance and the annual interest rate. A
loop should then iterate once for every month in the period, performing the following:
	
	A) Ask the user for the total amount deposited into the account during that month.
		Do not accept negative numbers. This amount should be added to the balance.

	B) Ask the user for the total amount withdrawn from the account during that
		month. Do not accept negative numbers or numbers greater than the balance
		after the deposits for the month have been added in.

	C) Calculate the interest for that month. The monthly interest rate is the annual
		interest rate divided by 12. Multiply the monthly interest rate by the average of
		that month’s starting and ending balance to get the interest amount for the
		month. This amount should be added to the balance.

After the last iteration, the program should display a final report that includes the following
information:

	• starting balance at the beginning of the three-month period.
	• total deposits made during the three months
	• total withdrawals made during the three months
	• total interest posted to the account during the three months
	• final balance.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double StartBal,                // Starting Balance
		   Deposit,				    // Monthly deposits
		   Withdrawn,				// Monthy withdrawls
		   TotDepo  = 0,			// Total dposits
		   TotalWd  = 0,			// Total withdrawls
		   MthStart = 0, 			// Monthly starting balance
		   MthInt,					// Monthly interest
		   TotInt   = 0,			// Total Interest
		   MthEnd,					// Monthly ending balance
		   AnnInt;					// Annual Interest

    // Ask user to enter the starting balance and the annual interest rate
	cout << "This program calculates the balance of a\n"
	     << "savings account at the end of a three month period.\n\n";
    cout << "What is the starting balance of the account? ";
    cin  >> StartBal;
    cout << endl;

	cout << "Enter the annual interest as a decimal: ";
	cin  >> AnnInt;
	cout << endl;

	MthStart += StartBal;

	// Iterate loop once every month 
	for (int Mth = 1; Mth <= 3; Mth++)
	{

		do
		{	// Ask user to input deposits for the month
			// and validate only positive integers
			cout << "What is the total amount deposited\ninto "
				 << "the account during month " << Mth << "? ";
			cin  >> Deposit;

			if (Deposit < 0)
			{	
				cout << "Invalid integer.\n"
					 << "Deposits must be a positive integer.\n";
			}

		} while (Deposit < 0); 

		cout << endl;
		TotDepo += Deposit;

		do
		{	// Ask user to input monthly withdrawal and validate only positive
			// integers and Total deposits is greater than withdrawals
			cout << "What is the total amount withdrawn\nfrom "
				 << "the account during month " << Mth << "? ";
			cin  >> Withdrawn;

			if (Withdrawn < 0 || Withdrawn > TotDepo)
			{	
				cout << "Invalid integer.\n";

				if (Withdrawn < 0)
				{
					cout << "Withdrawals must be a positive integer.\n";
				}
				else
				{
					cout << "The Balacne must be greater than withdrawals.\n";
				}
			}
		  
		} while (Withdrawn < 0 || Withdrawn > TotDepo);

		cout << endl;

		// Accumulate total withdrawn
		TotalWd += Withdrawn;

		// Calculate monthly ending balance
		MthEnd = MthStart + Deposit - Withdrawn;

		// Calculate monthly interest
		MthInt = ((MthStart + MthEnd) / 2.0) * (AnnInt / 12.0);

		// Accumulate total Interest
	 	TotInt += MthInt;

	 	MthStart = MthEnd + MthInt;
	}

	// Display report
	cout << "\n Quarterly Savings Account Report\n"
		 << "------------------------------------\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Starting balance  : $ " << setw(9) << StartBal << endl;
   	cout << "Total deposits    : $ " << setw(9) << TotDepo << endl;
   	cout << "Total withdrawals : $ " << setw(9) << TotalWd << endl;
	cout << "Total interest    : $ " << setw(9) << TotInt << endl;
	cout << "Final balance     : $ " << setw(9) << MthStart << endl;
	return 0;
}