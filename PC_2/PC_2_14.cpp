/*
Basketball Player Height
The star player of a high school basketball team is 73 inches tall. Write a
program to compute and display the height in feet / inches form.

Hint: Try using the modulus and integer divide operations.
*/
// This program computes and displays the height in feet / inches form.
#include <iostream>
using namespace std;

int main()
{
	int Feet   = 73 / 12,
		Inches = 73 % 12;

	cout << "The star player is " << Feet << "/" << Inches << " feet tall.";
	return 0;
}