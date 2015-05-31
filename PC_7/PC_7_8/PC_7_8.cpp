/*
Numeric Input Validation Class
Use the CharRange class presented in this chapter as a model for an IntRange class. The
IntRange class should allow the user to enter integer values within a specified range. An
error message should be displayed when the user enters a value outside the range. Demonstrate
the class by writing a simple program that uses it.
*/
#include <iostream>
#include "IntRange.h"
using namespace std;

int main()
{
	int I;				// Holds user input

	IntRange input;		// Create a IntRange object named input
						// and prompt user for integer range

	// Prompt the user to enter an integer
	cout << "Enter any integer between " << input.getLower();
	cout << " and " << input.getUpper() << endl;
	cout << "Entering " << input.getUpper() << " will stop this program.\n";

	// Call an input member function to accept the user input and 
	// validate it before returning it to be assigned to variable int
	I = input.getInt();

	// Continue allowing integers to be entered until -99 is input
	while (I != input.getUpper())
	{
		cout << "You entered " << I << endl;
		I = input.getInt();
	}
	return 0;
}

