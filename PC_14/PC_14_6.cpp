/*
Recursive Member Test
Write a recursive boolean function named isMember. The function should accept three
parameters: an array of integers, an integer indicating the number of elements in the array,
and an integer value to be searched for. The function should return true if the value is
found in the array, or false if the value is not found. Demonstrate the use of the function
in a program that asks the user to enter an array of numbers and a value to be searched for.
*/
#include <iostream>
using namespace std;

const int SIZE = 10;

// Function prototype
bool isMember(int [], int, int);

int main()
{
	int array[SIZE] = {5, 2, 3, 12, 30, 42, 25, 80, 19, 63};
	int num;

	// Ask user to enter an integer
	cout << "Enter a value to search for: ";
	cin  >> num;

	// Display the result of function isMember
	if (isMember(array, SIZE, num))
	{
		cout << num << " is a member of the array.\n";
	}
	else
		cout << num << " is not a member of the array.\n";

	return 0;
}

//*********************************************************************************
// Definition of isMember. A recursive function that accepts three parameters     *
// an array of integers, an integer indicating the number of elements in the      *
// array, and an integer to be searched for. The function returns ture if the     *
// is found in the array or false if the value in not found.                      *
//*********************************************************************************
bool isMember(int array[], int size, int num)
{
	int i = 0;
	
	if (*array == array[size])
		return false;
	if (*array == num)
	{
		return true;
	}
	else 
	{
		return isMember(array + 1, size, num);
	}	
}