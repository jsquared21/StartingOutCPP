/*
Using Files—Savings Account Balance Modification

Modify the Savings Account Balance program described in Programming Challenge 25 so
that it writes the final report to a file. After the program runs, print the file to hand in to
your instructor.
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{	
	ofstream OutputFile;			// Define ofstream object

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

	OutputFile.open("Savings_Account.txt"); 	// To open file
	if (!OutputFile)							// Test for errors
		cout << "Error opening file.\n";
	else
	{	// Write report to file
		OutputFile << "\n Quarterly Savings Account Report\n"
				   << "------------------------------------\n";
		OutputFile << fixed << showpoint << setprecision(2);
		OutputFile << "Starting balance  : $ " << setw(9) << StartBal << endl;
   		OutputFile << "Total deposits    : $ " << setw(9) << TotDepo << endl;
   		OutputFile << "Total withdrawals : $ " << setw(9) << TotalWd << endl;
		OutputFile << "Total interest    : $ " << setw(9) << TotInt << endl;
		OutputFile << "Final balance     : $ " << setw(9) << MthStart << endl;
	}
	cout << "Saved to file.";

	OutputFile.close();							// Close file
	return 0;
}