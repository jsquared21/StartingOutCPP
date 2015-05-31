/*
Binary String Search
Modify the binarySearch function presented in this chapter so it searches an array of
strings instead of an array of ints. Test the function with a driver program. Use Program 9-8
as a skeleton to complete. (The array must be sorted before the binary search will work.)
*/
// Include needed header files here.
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int binarySearch(string[], int, string);
void selectionSort(string[], int);
string getValue();

int main()
{
		const int SIZE = 20;

	string name[SIZE] =
	{"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
	"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
	"Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
	"Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
	"Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};
	// Insert your code to complete this program.

	string value;
	int result;

	selectionSort(name, SIZE);

	value = getValue();

	result = binarySearch(name, SIZE, value);

	if (result == -1)
		cout << "Name is not in list.\n";
	else
		cout << name[result] << " was found in subscript #" << result << ".\n"; 

	return 0;
}
/*********************************************************************************
 *                                  selectionSort                                *
 * This function performs an ascending-order selection sort on a string array.   *
 * This parameter size holds the number of elements in the array.                *
 *********************************************************************************/
void selectionSort(string array[], int size)
{
	int startScan, minIndex;
	string minValue;

	for (int startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = 0; index < size; index++)
		{
			minValue = array[index];
			minIndex = index;
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}
/*********************************************************************************
 *                                    getValue                                   *
 * This function asks the user a string value and returns it.                    *
 *********************************************************************************/
string getValue()
{
	string input;
	cout << "Enter the name you would like to search for: ";
	getline(cin, input);
	return input;
}

/*********************************************************************************
 *                                 binarySearch                                  *
 * This function performs a binary search on a string array with size elements   *
 * whole values are 
 *********************************************************************************/
int binarySearch(string array[], int size, string value)
{
	int first = 0,						// First array element
		last = size - 1,				// Last array element
		middle,							// Midpoint of search
		position = -1;					// Position of search value
	bool found = false;					// Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2; 	// Calculate midpoint
		if (array[middle] == value)		// If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;			// If value is in upper half
	}
	return position;	
}

