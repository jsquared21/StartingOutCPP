/*
Prefix to Postfix
Write a program that reads prefix expressions and converts them to postfix. Each prefix
expression should be entered on a separate line. The program should keep reading prefix
expressions and converting them to postfix until a blank line is entered.
*/
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

// Function prototype
string prefixToPostfix(string);

int main()
{
	string input;
	cout << "Enter prefix expressions to convert to postfix.\n"
		 << "Press enter after each expression, and press\n"
		 << "enter on a black line to quit.\n\n";
	cout << "Enter a prefix expression to convert to postfix: ";
	getline(cin, input);
	while (input.size() != 0)
	{
		// Add white space at the end of string
		input += " ";
		// Convert the prefix expression to postfix
		cout << prefixToPostfix(input) << endl;
		// Get next line of input
		cout << "Enter a prefix expression to convert to postfix: ";
		getline(cin, input);
	}
	return 0;
}

//*****************************************************************************
// prefixToPostfix                                                            *
// This function accepts a string that contains a single prefix expression    *
// and returns a string converted to postfix.                                 *
//*****************************************************************************
string prefixToPostfix(string input)
{ 
	istringstream exprStream(input);
	// Peek at first non-space character in prefix expression
	char ch = exprStream.peek();
	while (isspace(ch))
	{
		ch = exprStream.get();		// Read the space character
		ch = exprStream.peek();		// Peek again
	}
	if (isdigit(ch))	
	{
		return input;
	}
	else
	{
		// The prefix expression is an operator followed
		// by two prefix expressions:
		// convert the operator to postfix 
		return prefixToPostfix(input.substr(1, input.length())) + input.at(0);
	}	
}
