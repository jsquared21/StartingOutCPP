/*
Using Files—Internet Service Provider Part 2

Modify the program in problem 22 so it also displays how much money Package A
customers would save if they purchased packages B or C, and how much money package
B customers would save if they purchased package C. If there would be no savings,
no message should be printed.
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
	double CostA, CostB, CostC = 0,
		   SavingsA, SavingsB, SavingsC;

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
			 	<< "Customer name               : " << Name << endl
			 	<< "Package of subscription     : " << Choice << endl
			 	<< "Hours used this month       : " << Hours << endl
			 	<< "Total amount due            : $"
			 	<< fixed << showpoint << setprecision(2);
		switch (Choice)
		{	// Calculate cost of monthly bill and additional hours.
			case 'a' : 
			case 'A' :  if (Hours <= 10)
						   CostA = 9.95;
					    else
					 	   CostA = 9.95 + ((Hours - 10) * 2);					      
			case 'b' :  
			case 'B' :  if (Hours <= 20)
						   CostB = 14.95;
					    else
					 	   CostB = 14.95 + ((Hours - 20) * 1);
			case 'c' :  
			case 'C' :  CostC = 19.95;
			default  :  if (CostA > 0)
					    {   // Save total amount due to file
						    OutFile << CostA << endl;
						    if (CostA > CostB)
						    {  // Calculate Package B customers savings
						    	  SavingsB = CostA - CostB;
						    	  OutFile << "Package B customers savings : $"
						    	          << SavingsB << endl;
						    	  	if (CostA > CostC)
						    		{   // To calculate Package C customers savings
						    			  SavingsC = CostA - CostC;
						    			  OutFile << "Package C customers savings : $"
						    			          << SavingsC << endl;
						    		}
						    } 
					    }
					    else if (CostB > 0)
					    { 	// Save total amount due to file
						    OutFile << CostB << endl;
						    if (CostB > CostC)
						    {   // Calculate Package C customers savings
						    	  SavingsC = CostB - CostC;
						    	  OutFile << "Package C customers savings : $"
						    	          << SavingsC << endl;
						    } 
					    }
					    else // Save total amount due to file
					    	OutFile << CostC << endl;

		}
	}
	else
	{	// Report package choice input validation
		cout << "\nError! Invalid package choice.\n"
			 << "Please run package again and choose\n"
			 << "either package A, B or C.\n\n";
	}
	OutFile.close(); // Close File
	cout << "File Saved\n";
	return 0;
}