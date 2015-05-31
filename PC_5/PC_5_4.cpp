/*
Celsius to Fahrenheit Table
In one of the Chapter 3 Programming Challenges you were asked to write a program that
converts a Celsius temperature to Fahrenheit. Modify that program so it uses a loop to display
a table of the Celsius temperatures from 0 to 20 and their Fahrenheit equivalents.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double C,
		   F;

	cout << "Table of the Celsius temperatures from 0\n"
		 << "to 20 and their Fahrenheit equivalents:\n\n"
		 << "Celsius     Fahrenheit\n"
		 << "----------------------\n";

	for(C = 0; C <= 20; C++)
	{

		F = (9/5 * C) + 32;
		cout << right << setw(4) << C;
		cout << setw(14) << F << endl;
	}
	cout << endl;
	return 0;
}