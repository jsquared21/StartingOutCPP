/*
Sorting Orders
Write a program that uses two identical arrays of eight integers. It should
display the contents of the first array, then call a function to sort the array
using an ascending order bubble sort modified to print out the array contents
after each pass of the sort. Next the program should display the contents of the
second array, then call a function to sort the array using an ascending order
selection sort modified to print out the array contents after each pass of the
sort.
*/
#include <iostream>
using namespace std;

// Function prototypes
void displayArray(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);

int main()
{
	const int SIZE = 8;
	int Array1[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};
	int Array2[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};

	cout << "\nContents of the first array.\n";
	displayArray(Array1, SIZE);

	cout << "\nBubble sort the first array in ascending order.\n";
	bubbleSort(Array1, SIZE);

	cout << "\nContents of the second array.\n";
	displayArray(Array2, SIZE);

	cout << "\nSelection sort the second array in ascending order.\n";
	selectionSort(Array2, SIZE);

	return 0;
}

/********************************************************************************
 *                                displayArray                                  *
 * This function displays the contents of an integer array. The parameter size  *
 * holds the size of the array.                                                 *
 ********************************************************************************/
void displayArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

/********************************************************************************
 *                                 bubbleSort                                   *
 * This function sorts an integer array in ascending order using the bubble    *
 * sort method and prints out the array contents after each pass of the sort.   * 
 ********************************************************************************/
void bubbleSort(int array[], int size)
{
	int temp;
	bool swap;

	do
	{	swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
			displayArray(array, size);
		}
	} while (swap);
}

/********************************************************************************
 *                                selectionSort                                 *
 * This function sorts an integer array in ascending orger using the selection  *
 * sort method and prints out the array's contents after each pass of the sort. *         
 ********************************************************************************/
void selectionSort(int array[], int size)
{
	int startScan, minIndex, minValue;

	for (int startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
		displayArray(array, size);
	}
}
