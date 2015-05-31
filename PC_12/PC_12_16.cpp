/*
Modify Program 12-23 by adding a function

	string dollarFormat(double amount)

that takes a dollar amount in numeric form and returns a string formatted in
currency notation, with a $ sign and commas inserted at the appropriate locations.
Test your function using suitable inputs.
*/
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes
string dollarFormat(string);	
string dollarFormat(double); 

int main(void)
{
	
	
	double dInput;	// User input
	string sInput;	// User input
	char Ch;

	// Get the dollor amount form the user.
	cout << "Choose the data type for for entering the dollor amount\n"
		 << "Enter \"S\" for type string.\n"
		 << "Enter \"D\" for type double.\n";
	cin  >> Ch;

	switch (toupper(Ch))
	{
		case 'S' : cout << "Enter a dollor amount in the form nnnnn.nn : ";
				 cin  >> sInput;
				 // Display the formatted dollar amount.
				 cout << "formatted amount: " << dollarFormat(sInput) << endl;
				 break;
		case 'D' : cout << "Enter a dollor amount: ";
				 cin  >> dInput;
				 // Display the formatted dollar amount.
				 cout << "formatted amount: " << dollarFormat(dInput) << endl;
				 break;
	}
	
	return 0;
}

//****************************************************
// Retruns a $-formatted version of the input string *
//****************************************************
string dollarFormat(string original)
{
	string formatted = original;
	int dp = formatted.find('.');	// Postiotion of decimal point
	int pos = dp;					// Search for comma position
	while (pos > 3)
	{
		pos = pos - 3;
		formatted.insert(pos, ",");
	}
	formatted.insert(0, "$");
	return formatted;
}

//***********************************************************
// Retruns a string $-formatted version of the input double *
//***********************************************************
string dollarFormat(double amount)
{
	ostringstream ostr;
	ostr << fixed << showpoint << setprecision(2) << amount;
	string str = ostr.str();
	return dollarFormat(str);
}