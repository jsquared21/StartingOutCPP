/*
Areas of Rectangles
The area of a rectangle is the rectangle’s length times its width. Write a program that asks
for the length and width of two rectangles. The program should tell the user which rectangle
has the greater area, or if the areas are the same.
*/

#include <iostream>
using namespace std;

int main()
{
	double Length1, Length2, Width1, Width2, Area1, Area2;

	// Ask the user to enter the length and with of two rectangles.
	cout << "This program determines which of two rectangles has\n"
		 << "the greater area, or if the areas are the same.\n";
	cout << "Enter the length and width of rectangle #1:\n";
	cin  >> Length1 >> Width1;
	cout << "Enter the length and width of rectangle #2:\n";
	cin  >> Length2 >> Width2;

	// Calculate the area of the rectangles.
	Area1 = Length1 * Width1;
	Area2 = Length2 * Width2;

	// Display which rectangle has the greater area, or if the areas
	// are the same.
	if (Area1 == Area2)
		cout << "The areas of both rectangle’s are the same.\n";
	else if (Area1 > Area2)
		cout << "The area of rectangle #1 is greater than rectangle #2.\n";
	else
		cout << "The area of rectangle #2 is greater than rectangle #1.\n";
	return 0;
}