/*
Payroll Report

Write a program that displays a weekly payroll report. A loop in the program should ask
the user for the employee number, gross pay, state tax, federal tax, and FICA withholdings.
The loop will terminate when 0 is entered for the employee number. After the data is
entered, the program should display totals for gross pay, state tax, federal tax, FICA with
holdings, and net pay.

	Input Validation: Do not accept negative numbers for any of the items entered. If the
	state tax + federal tax + FICA withholdings for any employee is greater than gross
	pay, print an error message and ask the user to reenter the data for that employee.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int 	EmplNum;
	double	GrossPay,
			StateTax,
			FedTax,
			FICA,
			Wth,
			NetPay,
			TotGrossPay = 0,
			TotStateTax = 0,
			TotFedTax   = 0,
			TotFICA     = 0,
			TotNetPay   = 0;


		cout << "\nThis program generates a weekly payroll Report.\n"
			 << "Enter employee number: ";
		cin  >> EmplNum;

		while (EmplNum != 0)
		{	
		
			do
			{
				cout << "Enter gross pay: ";
				cin  >> GrossPay;

				while (GrossPay < 0)
				{
					cout << "Error! Gross pay must be a positive integer."
						 << "Enter gross pay: ";
					cin  >> GrossPay;
				}

				cout << "Enter state tax: ";
				cin  >> StateTax;

				while (StateTax < 0)
				{
					cout << "Error! state tax must be a positive integer.\n";
					cout << "Enter state tax: ";
					cin  >> StateTax;
				} 
				
				cout << "Enter federal tax: ";
				cin  >> FedTax;

				while (FedTax < 0)
				{
					cout << "Error! federal tax must be a positive integer.\n";
					cout << "Enter federal tax: ";
					cin  >> FedTax;
				} 
				
				cout << "Enter FICA withholdings: ";
				cin  >> FICA;
				
				while (FICA < 0)
				{
					cout << "Error! FICA withholdings must be a positive integer.\n";
					cout << "Enter FICA withholdings: ";
					cin  >> FICA;
				} 
	
				Wth = (StateTax + FedTax + FICA);

				if (Wth > GrossPay)
				{
					cout << "Error! Invaild data.\n"
						 << "Total withholdings can not be greater than gross pay."
						 << "\nPlease Enter data for employee number: "
						 << EmplNum << endl;
				}


			} while (Wth > GrossPay);
			
			TotGrossPay += GrossPay;
			TotStateTax += StateTax;
			TotFedTax += FedTax;
			TotFICA += FICA;

			NetPay = GrossPay - Wth;

			TotNetPay += NetPay;

			cout << "Enter employee number: ";
			cin  >> EmplNum;

		}

		cout << "\n  Weekly Payroll Report\n"
			 << "---------------------------------\n";
		cout << right << fixed << showpoint << setprecision(2);
		cout << "Total Gross Pay   : $" << setw(8) << TotGrossPay << endl;
		cout << "Total State Tax   : $" << setw(8) << TotStateTax << endl;
		cout << "Total Federal Tax : $" << setw(8) << TotFedTax << endl;
		cout << "Total FICA        : $" << setw(8) << TotFICA << endl;
		cout << "Total Net Pay     : $" << setw(8) << TotNetPay << endl << endl;
	return 0;
}