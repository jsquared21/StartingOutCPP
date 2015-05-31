/*
Recursive Array Sum
Write a function that accepts two arguments, an array of integers and a number indicating
the number of elements in the array. The function should recursively calculate the sum of
all the numbers in the array. Demonstrate the use of the function in a program that asks
the user to enter an array of numbers and prints its sum.
*/
#include <iostream>
using namespace std;

// Function prototype
int arraySum(int *, int);

int main()
{
	int size;
	int *array;

	cout << "How many figures do you wish to add? ";
	cin  >> size;

	array = new int[size]; // Allocate memory.

	cout << "Enter each of the figures to sum:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "figure " << (i + 1) << ": ";
		cin  >> array[i];
	}

	cout << arraySum(array, size) << endl;

	delete [] array;
	array = 0;
	return 0;
}

//********************************************************************************
// Definition of arraySum. Function accepts two arguments, an array of integers  *
// and a number indicating the number of elements in the array. The Function     *
// recursively calculates the sum of all the number in the array.                *
//********************************************************************************
int arraySum(int *array, int size)
{
	if (size == 0)
		return 0;
	else
		return  array[size - 1] + arraySum(array, size - 1);
}