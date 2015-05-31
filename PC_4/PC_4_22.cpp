/*
Using Files—Internet Service Provider Part 1

An Internet service provider has three different subscription packages for its customers:

	Package A: For $9.95 per month 10 hours of access are provided. Additional hours
			   are $2.00 per hour.
	Package B: For $14.95 per month 20 hours of access are provided. Additional
			   hours are $1.00 per hour.
	Package C: For $19.95 per month unlimited access is provided.

Write a program that calculates a customer’s monthly bill. It should input customer name,
which package the customer has purchased, and how many hours were used. It should
then create a bill that includes the input information and the total amount due. The bill
should be written to a file.

	Input Validation: Be sure the user only selects package A, B, or C. Also, the number
	of hours used in a month cannot exceed 744.
*/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	char Choice;
	string Name;
	int Hours;
	double Cost;

	ofstream OutFile;
	OutFile.open("Internetbill.txt"); // To open file.



	// Ask user to input name, their current package and hours of use.
	cout << "This program will assist you in calculating your monthy bill.\n"
	     << "Please enter your name: ";
	cin  >> Name;
	cout << "Please enter the letter representing package you purchased:\n\n"
	     << "  A = For $9.95 per month 10 hours of access are provided.\n" 
		 << "  	   Additional hours are $2.00 per hour.\n\n"
		 << "  B = For $14.95 per month 20 hours of access are provided.\n"
		 << "  	   Additional hours are $1.00 per hour.\n\n"
		 << "  C = For $19.95 per month unlimited access is provided.\n";
	cin  >> Choice;
	cout << "How many hours were used? ";
	cin  >> Hours;

	// Validate that hours used in a month does not exceed 744,
	// and that the user only selects package A, B, or C.
	if (Hours > 744)
		cout << "Error! hours used in a month cannot exceed 744.\n\n";
	else if (Choice == 'a' || Choice == 'b' || Choice == 'c' ||
		     Choice == 'A' || Choice == 'B' || Choice == 'C')
	{	// To write bill to file.
		OutFile << "\nInternet service monthly bill\n"
				<< "_________________________________\n"
			 	<< "Customer name           : " << Name << endl
			 	<< "Package of subscription : " << Choice << endl
			 	<< "Hours used this month   : " << Hours << endl
			 	<< "Cost of service         : $"
			 	<< fixed << showpoint << setprecision(2);
		switch (Choice)
		{	// Calculate cost of monthly bill and additional hours.
			case 'a' : 
			case 'A' : if (Hours <= 10)
						  Cost = 9.95;
					   else
					 	  Cost = 9.95 + ((Hours - 10) * 2);
					      OutFile << Cost << endl;
					   break;
			case 'b' : 
			case 'B' : if (Hours <= 20)
						  Cost = 14.95;
					   else
					 	  Cost = 14.95 + ((Hours - 20) * 1);
					      OutFile << Cost << endl;
					   break;
			case 'c' : 
			case 'C' : Cost = 19.95;
					   OutFile << Cost << endl; 
		}
	}
	else
	{
		cout << "\nError! Invalid package choice.\n"
			 << "Please run package again and choose\n"
			 << "either package A, B or C.\n\n";
	}
	OutFile.close();
	cout << "File Saved\n";
	return 0;
}