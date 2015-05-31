#include <iostream>
#include <string>
#include "Numbers.h"
using namespace std;

string Numbers::lessThan20[ ] =
		{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", 
		 "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
		 "sisteen", "seventeen", "eighteen", "nineteen" };
string Numbers::bet20To100[ ] = 
		{" ", " ", "twenty", "thirty", "forty", "fifty", "sixty",
		 "seventy", "eightty", "ninety" };
string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

//********************************************************************************
//                                    Numbers                                    *
// This constructor accepts a nonnegative integer and uses it to initialize the  *
// Numbers object.                                                               *
//********************************************************************************
Numbers::Numbers(int num)
{
	// cout << "Creatng an instance Numbers.\n";
	if (num >= 0 || num <= 9999)
		number = num;
	else
		cout << "Error! Number is outside valid range.\n";
}

//********************************************************************************
//                                    Print                                      *
// This member function prints the English descripton of the Numbers object.     *
//********************************************************************************
void Numbers::print()
{
	int K = 0,				// Holds thousand value
		H = 0,				// Holds hundread value
		T = 0,				// Holds values less than 100
		N = 0;
	string EngNum = " ";	// Holds the English description of number

	// If number has a value in the thousands convert the 
	// thousand value to English.  
	if (number > 999)
	{
		K = number / 1000;
		EngNum = lessThan20[K] + " " + thousand + " ";
		N = K * 1000;
	}
	
	// If number has a value in the hundreds convert
	// hundreds value to English. 
	if (number > 99)
	{
		if (number > 999)
		{
			H = (number - N)/100;
		}
		else
			H = number / 100;

		EngNum += lessThan20[H] + " " + hundred + " ";
		N += (H * 100);
	}

	// Get tens value.
	if (N > 0)
	{
		T = number - N;
	}
	else 
		T = number;

	// Convert tens value to English.
	if (T > 19)
	{
		EngNum += bet20To100[(T/10)] + " " + lessThan20[(T%10)];
	}
	else
		EngNum += lessThan20[T];
	
	// Display English description
	cout << "English descripton: " << EngNum << "." << endl;
}
