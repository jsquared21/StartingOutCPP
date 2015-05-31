/*
SimpleVector Modification
Modify the SimpleVector class template, presented in this chapter, to include the member
functions push_back and pop_back. These functions should emulate the STL vector class
member functions of the same name. (See Table 16-4.) The push_back function should
throw an exception if the array is full. The push_back function should accept an argument
and insert its value at the end of the array. The pop_back function should accept no argument
and remove the last element from the array. Test the class with a driver program.
*/
#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main()
{
	const int SIZE = 5;
	int iInput;
	double dInput;
	char ch;
	SimpleVector<int> intTable(SIZE);
	SimpleVector<double> doubleTable(SIZE);

	// Store values in the arrays.
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x] = (x * 2);
		doubleTable[x] = (x * 2.14);
	}

	// Display the values in the arrays.
	cout << "These values are in intTable:\n";
	intTable.print();
	cout << "These values are in doubleTable:\n";

	doubleTable.print();

	// Use the built-in + operator on array elements.
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x] = intTable[x] + 5;
		doubleTable[x] = doubleTable[x] + 1.5;
	}
	// Display the values in the array.
	cout << "These values are in intTable:\n";
	intTable.print();
	cout << "These values are in doubleTable:\n";
	doubleTable.print();

	// Use the built-in ++ operator on array elements.
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x]++;
		doubleTable[x]++;
	}
	// Display the values in the array.
	cout << "These values are in intTable:\n";
	intTable.print();
	cout << "These values are in the doubleTable:\n";
	doubleTable.print();
	cout << endl;

	cout << "These values are intTable:\n";	
	intTable.print();
	cout << "Add a value: ";
	cin  >> iInput;
	try
	{
		intTable.push_back(iInput);
	}
	catch (SimpleVector<int>::ArrayFull)
	{
		cout << "Error: Array is full.\n";
	}
	cout << "These values are intTable after push_back:\n";	
	intTable.print();	

	try
	{
		intTable.pop_back();	
	}
	catch (SimpleVector<int>::ArrayFull)
	{
		cout << "Error: Array is empty.\n";
	}
	cout << "These values are intTable after pop_back:\n";	
	intTable.print();

	return 0;
}