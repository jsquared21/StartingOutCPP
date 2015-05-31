/*
String Length
Write a function that accepts a C-string as an argument and returns the length of the
C-string as a result. The function should count the number of characters in the string and
return that number. Demonstrate the function in a simple program that asks the user to
input a string, passes it to the function, and then displays the function’s return value.
*/
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int stringlen(char *);

int main()
{
	const int Length = 100;
	char Input[Length];

	// Ask the user to input a sting.
	cout << "Enter a string: ";
	cin.getline(Input, Length);

	cout << "Length of " << Input << ": " << stringlen(Input) << endl;

	return 0;
}
//********************************************************************************
// stringlen                                                                     *
// This function accepts a C-string as an argument and returns the length of the *
// C-string as a result.                                                         *
//********************************************************************************
int stringlen(char *Str)
{
	return strlen(Str);
}