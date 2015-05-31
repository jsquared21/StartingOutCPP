/*
Sorting Benchmarks
Write a program that uses two identical arrays of at least 20 integers. It should
call a function that uses the bubble sort algorithm to sort one of the arrays in
ascending order. The function should count the number of exchanges it makes. The
program should then call a function that uses the selection sort algorithm to sort
the other array. It should also count the number of exchanges it makes. Display
these values on the screen.
*/
#include <iostream>
using namespace std;

// Function prototypes
void bubbleSort(int[], int, int&);
void selectionSort(int[], int, int&);
void displayResults(int, int);

int main()
{
	const int SIZE = 20;
	int List1[SIZE] = {80, 12, 30,  6, 16, 98, 43, 53, 22, 11,
					   10, 79, 28, 67, 86, 15,  4, 63, 42, 51};

	int List2[SIZE] = {80, 12, 30,  6, 16, 98, 43, 53, 22, 11,
					   10, 79, 28, 67, 86, 15,  4, 63, 42, 51};

	int Exch1 = 0, Exch2 = 0;
	
	bubbleSort(List1, SIZE, Exch1);
	
	selectionSort(List2, SIZE, Exch2);

	displayResults(Exch1, Exch2);

}

/********************************************************************************
 *                                   displayResults                             *
 * This function displays the number of exchanges each sort alogrithm made.     *
 ********************************************************************************/
void displayResults(int Exch1, int Exch2)
{	
	cout << "Number of exchanges made by each sort algorithm.\n";
	cout << "Bubble sort:    " << Exch1 << endl;
	cout << "Selection sort: " << Exch2 << endl;
}
/********************************************************************************
 *                                   bubbleSort                                 *
 * This function performs an ascending-order bubble sort on an array. The       *
 * perameter size holds the number of elements in the array. The function also  *
 * counts the number of exchanges it makes.                                     *
 ********************************************************************************/
void bubbleSort(int array[], int size, int &Exch)
{
	int temp;
	bool swap;

	do
	{ 	swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
				Exch++;
			}
		}
	} while (swap);
 }

/********************************************************************************
 *                               selectionSort                                  *
 * This function performs an ascending-order selection sort on an array. The    *
 * parameter size holds the number of elements in the array. The function also  *
 * counts the number of exchanges it makes.                                     *
 ********************************************************************************/
void selectionSort(int array[], int size, int &Exch2)
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
				Exch2++;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}