/*
SortableVector Class Template
Write a class template named SortableVector. The class should be derived from the
SimpleVector class presented in this chapter. It should have a member function that sorts
the array elements in ascending order. (Use the sorting algorithm of your choice.) Test the
template in a driver program.
*/
#include <iostream>
#include "SortableVector.h"
using namespace std;

int main()
{
	const int SIZE = 10;
	SortableVector<int> intTable(SIZE);
	SortableVector<double> doubleTable(SIZE);
	int intArray[SIZE] = {4, 1, 9, 2, 5, 20, 14, 3, 5, 17};
	double doubleArray[SIZE] = {12.4, 30.1, 9.14, 2.35, 17.9, 1.4, 25.4, 8.4, 20.6, 11.7};

	// Store values in the vectors
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x] = intArray[x];
		doubleTable[x] = doubleArray[x];
	}

	// Display the values in the vector
	cout << "These values are in intTable:\n";
	for (int x = 0; x < SIZE; x++)
		cout << intTable[x] << " ";
	cout << endl;

	cout << "These values are in doubleTable:\n";
	for (int x = 0; x < SIZE; x++)
		cout << doubleTable[x] << " ";
	cout << endl;

	cout << "\nCall function sortAscending on Tables.\n\n";
	intTable.sortAscending();
	doubleTable.sortAscending();

	// Display the values in the vector
	cout << "These values are in intTable:\n";
	for (int x = 0; x < SIZE; x++)
		cout << intTable[x] << " ";
	cout << endl;

	cout << "These values are in doubleTable:\n";
	for (int x = 0; x < SIZE; x++)
		cout << doubleTable[x] << " ";
	cout << endl;

	return 0;
}

