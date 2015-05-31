/*
Dynamic Stack Template
In this chapter you studied DynIntStack, a class that implements a dynamic stack of
integers. Write a template that will create a dynamic stack of any data type. Demonstrate
the class with a driver program.
*/
#include <iostream>
#include "DynStack.h"
using namespace std;

int main()
{
	cout << "Creating stack of double data type.\n";
	DynStack<double> DStack;
	double values[] = {5.2, 10.4, 15.6, 20.3, 25.9};
	double value;

	cout << "Creating stack of char data type.\n";
	DynStack<char> ChStack;
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