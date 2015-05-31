/*
Sum of Numbers
Write a program that asks the user for a positive integer value. The program should use a
loop to get the sum of all the integers from 1 up to the number entered. For example, if the
user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.
Input Validation: Do not accept an input that is less than 1.
*/
#include <iostream>
using namespace std;

int main()
{
	int Test, 		// Test expression variable
		Sum = 0;	// Set accumulator to 0

	// Ask your to enter a positive integer.
	cout << "This program will return the sum of all the\n"
		 << "integers from 1 up to the number you enter.\n"
		 << "Enter a positive integer: ";
	cin  >> Test;

	if (Test > 0)  // Validate that only positive numbers are accepted.
	{
		for (int Num = 1; Num <= Test; Num++)
		{
			Sum += Num;
		}
		cout << "The sum of the integers from 1 up to "
			 << Test << " = " << Sum << ".\n";
	}
	return 0;
}