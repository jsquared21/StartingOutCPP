/*
String Selection Sort
Modify the selectionSort function presented in this chapter so it sorts an array of
strings instead of an array of ints. Test the function with a driver program. Use
Program 9-9 as a skeleton to complete.
*/
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void selectionSort(string[], int);
void displayArray(string[], int);

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

	// Call the selectionSort function
	selectionSort(name, SIZE);

	// Call the displayArray function
	displayArray(name, SIZE);

	return 0;
}
/*********************************************************************************
 *                               selectionSort                                   *
 * This function uses the selection sort to arrange the values in a string array *
 * in ascending order                                                            *
 *********************************************************************************/
void selectionSort(string array[], int size)
{
	int startScan, minIndex;
	string minValue;

	for (int startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if(array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

/*********************************************************************************
 *                                 displayArray                                  *
 *            This function displays all the values in the array.                *             
 *********************************************************************************/
void displayArray(string name[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << name[i] << endl;
	}
}