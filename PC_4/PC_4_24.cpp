/*
Using Files—Internet Service Provider Part 3

Months with 30 days have 720 hours, and months with 31 days have 744 hours. February,
with 28 days, has 672 hours. Enhance the input validation of the Internet Service Provider
program by asking the user for the month (by name), and validating that the number of
hours entered is not more than the maximum for the entire month. Here is a table of the
months, their days, and number of hours in each
_______________________________________________________________________________________
Month                                         Days                 Hours
_______________________________________________________________________________________
January, March, May, July,                     31                   744
August, October, December

April, June, September,                        30                   720
November

February                                       28                   672
_______________________________________________________________________________________
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	char Choice;
	string Name, Month; 
	int Hours;
	double CostA, CostB, CostC = 0,
		   SavingsA, SavingsB, SavingsC;

	ofstream OutFile;
	OutFile.open("Internetbill.txt"); // To open file.

	// Ask user to input name, their current package and hours of use.
	cout << "This program will assist you in calculating your monthy bill.\n"
	     << "Please enter your name: ";
	cin  >> Name;
	cout << "Enter the month of the bill cycle by name: ";
	cin  >> Month;
	cout << "Please enter the letter representing package you purchased:\n\n"
	     << "  A = For $9.95 per month 10 hours of access are provided.\n" 
		 << "  	   Additional hours are $2.00 per hour.\n\n"
		 << "  B = For $14.95 per month 20 hours of access are provided.\n"
		 << "  	   Additional hours are $1.00 per hour.\n\n"
		 << "  C = For $19.95 per month unlimited access is provided.\n";
	cin  >> Choice;
	cout << "How many hours were used? ";
	cin  >> Hours;

	// Validate that hours used in the January, March, May, July, August, October,
	// and December dont exceed 31 Days or 744 hours.
	if (Hours > 744 && (Month == "January" || Month == "March" || Month == "May"
		|| Month == "July" || Month == "August" || Month == "October"
		|| Month == "December"))
	{
		cout << "Error! Invalid hours.\nThere are only 744 hours in the month of "
	         << Month << ".\nPlease run the program again with number of hours\n"
	         << "that less than 744.\n\n";	         
	}
	// Validate that hours used in the April, June, September and November dont
	// exceed 30 Days or 720 hours.
	else if (Hours > 720 && (Month == "April" || Month == "June" || 
		     Month == "September" || Month == "November"))
	{
		cout << "Error! Invalid hours.\nThere are only 720 hours in the month of "
	         << Month << ".\nPlease run the program again with number of hours\n"
	         << "that is less than 720.\n\n";	         
	}
	// Validate that hours used in the February dont exceed 28 Days or 672 hours.
	else if (Hours > 672 && Month == "February")
	{
		cout << "Error! Invalid hours.\nThere are only 672 hours in the month of "
	         << Month << ".\nPlease run the program again with a number of hours\n"
	         << "that is less than 672.\n\n";	         
	}
	// Validate that the user only selects package A, B, or C.
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
	{	// Report error in package choice input validation
		cout << "\nError! Invalid package choice.\n"
			 << "Please run package again and choose\n"
			 << "either package A, B or C.\n\n";
	}
	OutFile.close(); // Close File
	cout << "File Saved\n";
	return 0;
}