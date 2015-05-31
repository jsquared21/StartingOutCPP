#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Function prototypes
string dateFormat(string);
string dollarFormat(string);
string engAmt(string);

int main()
{
	
	ostringstream ostr;
	string date, name, amt, eng, check;
	//int amt;

	// Ask user to enter the date, the payee's name,
	// and the amount of the check.
	cout << "Enter the date in the format mmddyyyy: ";
	cin  >> date;
	cout << "Enter the payee's name: ";
	cin.ignore();
	getline(cin, name);

	do
	{
		cout << "Enter the amount of the check: ";
		cin  >> amt;

		if (amt[0] == '-' || amt.compare("10000") < 0)
		{
			cout << "Error!\nCheck amount must be greater than 0\n"
				 << "and less than $10,000.\n";
		}
	}
	while (amt[0] == '-' || amt.compare("10000") < 0);

	// Format check
	check = "\n                                     ";
	check += dateFormat(date);
	check += "\n\n\n";
	check += "   Pay to the Order of: " + name + "           ";
	check += dollarFormat(amt) + "\n\n   ";
	check += engAmt(amt) + "\n";

	// Print check
	cout << check << endl;

	return 0;
}

//********************************************************************************
// dateFormat                                                                    *
//********************************************************************************
string dateFormat(string original)
{
	string formatted = original;
		
	formatted.insert(2, "/");
	formatted.insert(5, "/");
	formatted.insert(0, "Date: ");

	return formatted;
}

//********************************************************************************
// dollarFormat                                                                  *
//********************************************************************************
string dollarFormat(string original)
{
	string formatted = original;
	formatted.insert(0, "$");
	return formatted;
}


//********************************************************************************
// engAmt                                                                        *
//********************************************************************************
string engAmt(string amt)
{
	string lessThan20[ ] =
			{"", "one", "two", "three", "four", "five", "six", "seven", "eight", 
			 "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
			 "sisteen", "seventeen", "eighteen", "nineteen" };
	string bet20To100[ ] = 
			{" ", " ", "twenty", "thirty", "forty", "fifty", "sixty",
			 "seventy", "eightty", "ninety" };
	string hundred = "hundred";
	string thousand = "thousand";

	int number;
	string dollars, cents;
	if (amt.find(".",0) > amt.length())
	{
		istringstream istr(amt);
		istr >> number;
	}
	else
	{
		dollars = amt.substr(0, amt.length() - 3);
		istringstream istr(dollars);
		istr >> number;
		int pos;
		pos = amt.find(".",0);
		pos++;
		cents = amt.substr(pos, 2);
	}
	

	int    K = 0,				// Holds thousand value
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

	// Add cents.
	EngNum += "and " + cents+ " cents";	

	return EngNum;

}
