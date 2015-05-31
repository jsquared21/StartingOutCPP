/*
Backward String
Write a function that accepts a C-string as an argument and displays its contents backwards.
For instance, if the string argument is “Gravity” the function should display
“ytivarG”. Demonstrate the function in a program that asks the user to input a string and
Solving the then passes it to the function.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Function prototype
string backwards(char *);

const int LENGTH = 100;

int main()
{
	char Input[LENGTH], result[LENGTH];

	// Ask the user to input a string
	cout << "Enter a string: ";
	cin.getline(Input, LENGTH);

	// Pass string to backward function
	cout << "\"" << Input << "\" written backwards is \"" << backwards(Input) 
		 << "\"." << endl;
	return 0;
}

//*****************************************************************************
// backwards                                                                  *
// This function accepts a C-string as an argument and retruns its contents   *
// backwards.                                                                 *
//*****************************************************************************
string backwards(char *Str)
{
	const int size = strlen(Str);
	char back[LENGTH];
	for (int i = size - 1; i >= 0; --i)
		back++ = Str[i];
	back[size] = '\0';

	return back;
}