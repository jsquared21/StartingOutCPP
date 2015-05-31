/*
Static Stack Template
In this chapter you studied IntStack, a class that implements a static stack of integers.
Write a template that will create a static stack of any data type. Demonstrate the class with
a driver program.
*/
#include "StaticStack.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Creating stack of double data type.\n";
	StaticStack<double> DStack(5);
	double values[] = {5.2, 10.4, 15.6, 20.3, 25.9};
	double value;

	cout << "Creating stack of char data type.\n";
	StaticStack<char> ChStack(5);
	char Chars[] = {'a', 'b', 'c', 'd', 'e'};
	char Ch;

	// Store values
	cout << "Pushing doubles...\n";
	for (int i = 0; i < 5; i++)
	{
		cout << values[i] << "  ";
		DStack.push(values[i]);
	}
	cout << endl;

	cout << "Pushing characters...\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Chars[i] << "  ";
		ChStack.push(Chars[i]);
	}
	cout << endl;

	cout << "Poping doubles...\n";
	while (!DStack.isEmpty())
	{
		DStack.pop(value);
		cout << value << "  ";
	}
	cout << endl;

	cout << "Poping characters...\n";
	while (!ChStack.isEmpty())
	{
		ChStack.pop(Ch);
		cout << Ch << "  ";
	}
	cout << endl;
	return 0;

}