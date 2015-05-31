/*
Roman Numeral Converter
Write a program that displays the roman numeral equivalent of any decimal number
between 1 and 20 that the user enters. The roman numerals should be stored in an array of
strings and the decimal number that the user enters should be used to locate the array element
holding the roman numeral equivalent. The program should have a loop that allows
the user to continue entering numbers until an end sentinel of 0 is entered.
Input validation: Do not accept scores less than 0 or greater than 20.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string roman[21] ={ " ", "I",   "II",   "III",  "IV",  "V",
					   	    "VI",  "VII",  "VIII",  "IX",  "X",
					   	    "XI",  "XII",  "XIII", "XIV", "XV",
					   	   "XVI", "XVII", "XVIII", "XIX", "XX"};
	int num;

	do
	{
		do 
		{	
			cout << "Enter a number and between 1 and 20\n"
				 << "to see its roman numeral equivalent.\n"
				 << "Enter '0' to exit program: ";
			cin  >> num;

			if (num < 0 || num > 20)
				cout << "Error! Number was not in range.\n";

		} while (num < 0 || num > 20);

		cout << roman[num] << endl;

	} while (num != 0);
	cout << endl;
	return 0;
}