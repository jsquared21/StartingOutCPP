/*
SearchableVector Modification
Modify the SearchableVector class template, presented in this chapter, so it performs a
binary search instead of a linear search. Test the template in a driver program.
*/
#include <iostream>
#include "searchvect.h"
using namespace std;

int main()
{
	const int SIZE = 10;
	SearchableVector<int> intTable(SIZE);
	SearchableVector<double> doubleTable(SIZE);

	// Store values in the vectors.
	for (int x = 0; x < SIZE; x++)
	{
		intTable[x] = (x * 2);
		doubleTable[x] = (x * 2.14);
	}
	// Display the values in the vectors.
	cout << "These values are in intTable:\n";
	for (int x = 0; x < SIZE; x++)
		cout << intTable[x] << " ";
	cout << endl;
	cout << "These values are in doubleTable:\n";
	for (int x = 0; x < SIZE; x++)
		cout << doubleTable[x] << " ";
	cout << endl;

	// Now search for values in the vectors.
	int result;
	cout << "Searching for 6 in intTable.\n";
	result = intTable.findItem(6);
	if (result == -1)
		cout << "6 was not found in intTable.\n";
	else
		cout << "6 was found at subscript "
			 << result << endl;

	cout << "Searching for 12.84 in doubleTable.\n";
	result = doubleTable.findItem(12.84);
	if (result == -1)
		cout << "12.84 was not found in doubleTable.\n";
	else
		cout << "12.84 was found at subscript "
		     << result << endl;
	return 0;
}