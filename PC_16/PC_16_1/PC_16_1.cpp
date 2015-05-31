/*
String Bound Exceptions
Write a class BCheckString that is derived from the STL string class. This new class will
have two member functions:

	A)  A BCheckString(string s) constructor that receives a string object passed by
		value and passes it on to the base class constructor.
	B)  An char operator[](int k) function that throws a BoundsException object
		if k is negative or is greater than or equal to the length of the string. If k is within
		the bounds of the string, this function will return the character at position k in the
		string.

You will need to write the definition of the BoundsException class. Test your class with a
main function that attempts to access characters that are within and outside the bounds of
a suitably initialized BCheckString object.
*/
#include <iostream>
#include "BCheckString.h"
using namespace std;

int main()
{
	string Str;		// Holds the user string input
	int Pos;		// Holds the user integer input
	char Value;		// Holds the character value

	// Ask the user to enter a string.
	cout << "Enter a string: ";
	cin  >> Str;
	BCheckString test(Str); // Create a BCheckString object

	// Ask the user to enter an integer.
	cout << "Enter a number and this program will\n"
		 << "return the character at that position.\n";
	cin  >> Pos;

	// try/catch construct.
	try
	{
		Value = test[Pos];
		cout << "The character at position " << Pos << " is: " << Value << endl;
	}
	catch (BCheckString::BoundsException)
	{
		cout << "That value is out of bounds.\n";
	}
	cout << "End of program.\n";
	return 0;
}