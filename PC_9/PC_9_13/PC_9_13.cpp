/*
Using Files—String Selection Sort Modification
Modify the program you wrote for Programming Challenge 6 so it reads in the 20
strings from a file. The data can be found in the names.dat file.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function prototypes
void selectionSort(string[], int);
void displayArray(string[], int);

int main()
{
	const int SIZE = 20;
	string name[SIZE];
	ifstream Read;

	Read.open("names.dat");
	if (!Read)
		cout << "Error opening data file.\n";
	else
	{
		for (int i = 0; i < SIZE; i++)
		{
			getline(Read, name[i]);
		}
	
		// Call the selectionSort function
		selectionSort(name, SIZE);
	
		// Call the displayArray function
		displayArray(name, SIZE);
	}
	Read.close();

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