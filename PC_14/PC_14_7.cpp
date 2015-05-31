/*
String Reverser
Write a recursive function that accepts a string as its argument and prints the string in
reverse order. Demonstrate the function in a driver program.
*/
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
using namespace std;

// Function prototype
string strReverser(string);

int main()
{
	string Str;

	// Ask the user to enter a string
	cout << "Enter a string and this program \n"
		 << "will print it in reverse order:\n";
	getline(cin, Str);

	// Display the string in reverse order
	cout << strReverser(Str) << endl;
	return 0;
}

//********************************************************************************
// strReverser                                                                   *
// This function accepts a string as its argument and returns the string in      *
// reverse order.                                                                *
//********************************************************************************
string strReverser(string Str)
{	
	if (Str.length() == 1)
	{
		return Str;
	}
	else
	{
		return strReverser(Str.substr(1, Str.length())) + Str.at(0);
	}	
}