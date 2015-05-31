/*
QuickSort Template
Create a template version of the quickSort algorithm that will work with any data type
that overloads the comparison operators. Demonstrate the template with a driver function.
*/
#include <iostream>
#include <string>
using namespace std;

// Function prototype
void quickSort(string, int, int);
string partition(string, int, int);

int main()
{
	// Array to be sorted.
	const int SIZE = 10;
	string array = "qwertyuiop";

	// Sort the array using QuicSort.
	quickSort(array, 0, SIZE-1);

	// Print the sorted array.
	for (int k = 0; k < SIZE; k++)
		cout << array[k] << " ";
	cout << endl;

	return 0;
}

//********************************************************************************
// quickSort uses the QuicSort algorithm to sort arr from arr[start] through     *
// arr[end].                                                                     *
//********************************************************************************
void quickSort(string arr, int start, int end)
{
	if (start < end)
	{
		
	}
}