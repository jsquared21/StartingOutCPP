/*
Absolute Value Template
Write a function template that accepts an argument and returns its absolute value. The
absolute value of a number is its value with no sign. For example, the absolute value of –5
is 5 and the absolute value of 2 is 2. Test the template in a simple driver program.
*/
#include <iostream>
#include <cmath>
using namespace std;

// Template functions
//********************************************************************
// absolute                                                          *
// This function accepts an arugment and returns its  absolute value *
//********************************************************************
template <class T>
T absolute(T v)
{
	return abs(v);
}

int main()
{
	int iInput; 	// Holds integer value
	double dInput;	// Holds float value
	long lInput;	// Holds long value

	cout << "Enter an value and this program\n"
		 << "will return its absolute value.\n";
	// Ask user to enter an integer
	cout << "Enter integer value: ";
	cin  >> iInput;
	cout << "Absolute value: " << absolute(iInput) << endl;

	// Ask user to enter a double
	cout << "Enter double value: ";
	cin  >> dInput;
	cout << "Absolute value: " << absolute(dInput) << endl;

	// Ask user to enter an long
	cout << "Enter long value: ";
	cin  >> lInput;
	cout << "Absolute value: " << absolute(lInput) << endl;
	return 0;
}