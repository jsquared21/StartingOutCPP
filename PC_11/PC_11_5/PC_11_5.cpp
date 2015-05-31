// This program asks the user to enter a string. This program uses the string to
// initialize a Pstring object and then calls isPalindrome() to determine whether
// the string entered is a palindrome.
#include <iostream>
#include <string>
#include "Pstring.h"
using namespace std;

int main()
{
	string Input; 	// Holds a string
	bool result;	// Holds boolean results

	// Ask user to enter a string.
	cout << "Enter a word to test if it is a palindrome: ";
	cin  >> Input;

	// Initialize a Pstring object
	Pstring str = Input;

	// Call isPalindrome() to determine whether
	// the string entered is a palindrome.
	if (str.isPalindrome())
		cout << str << " is a palindrome. " << endl;
	else
		cout << str << " is not a palindrome. " << endl;

	return 0;
}