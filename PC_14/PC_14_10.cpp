/*
Prefix to Infix
Write a program that reads prefix expressions and converts them to infix. The infix expressions
should be fully parenthesized to show the order of application of the operators. Each
prefix expression should be entered on a separate line. The program should keep reading
prefix expressions and converting them to infix until a blank line is entered.
*/
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

// Function prototype
string prefixToInfix(string);

int main()
{
	string input;
	cout << "Enter prefix expressions to convert to infix.\n"
		 << "Press enter after each expression, and\n"
		 << "press enter on a blank line to quit.\n\n";
	cout << "Enter a prefix expression: ";
	getline(cin, input);
	while(input.size() != 0)
	{
		// Convert the prefix expression to infix
		cout << prefixToInfix(input) << endl;
		// Get next line of input
		cout << "Enter a prefix expression: ";
		getline(cin, input);
	}
	return 0;
}

//********************************************************************************
// prefixToInfix                                                                 *
// This funciton accepts a string that contains a single prefix expression as    *
// a parameter and return a string that contains a single infix expression.      *
//********************************************************************************
string prefixToInfix(string input)
{
	int p = input.length();
	istringstream expr(input);
	// Peek at first non-space character in prefix expression
	char ch = expr.peek();
	while (isspace(ch))
	{
		ch = expr.get();	// Read the space character
		ch = expr.peek();	// Peek again
	}
	if (isdigit(ch))
	{
		return input;
	}
	else // if (ch == '*' || ch == '-' || ch == '/' || ch == '+')
	{
		//    pre                in
		// * + x 23 y   |   (x + 23) * y

		//string sub1 = input.insert(p - 1, 1, input.at(0));
		return prefixToInfix(input.substr(1,input.length()) 
	}
}