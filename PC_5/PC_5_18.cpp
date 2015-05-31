/*
Rectangle Display

Write a program that asks the user for two positive integers between 2 and 10 to use for
the length and width of a rectangle. If the numbers are different, the larger of the two numbers
should be used for the length and the smaller for the width. The program should then
display a rectangle of this size on the screen using the character ‘X’. For example, if the
user enters either 2 5 or 5 2, the program should display the following:

	XXXXX
	XXXXX
*/
#include <iostream>
using namespace std;

int main()
{
	int Length,
		Width,
		Num1,
		Num2;

	// Ask user to enter two positive integers between 2 and 10.
	cout << "Enter two positive integers between 2 and 10 that this program will\n"
		 << "use as the length and width of a rectangle it will display.\n";
	do
	{
		cout << "Enter the first positive integer: ";
		cin  >> Num1;

		if (Num1 < 2 || Num1 >10)
		{
			cout << "Error! Invalid integer.\nInteger must between 2 and 10.\n";
		}
	} while (Num1 < 2 || Num1 >10);

	do
	{
		cout << "Enter the second positive integer: ";
		cin  >> Num2;

		if (Num2 < 2 || Num2 >10)
		{
			cout << "Error! Invalid integer.\nInteger must between 2 and 10.\n";
		}
	} while (Num2 < 2 || Num2 >10);


	if (Num1 >= Num2)
	{
		Length = Num1;
		Width = Num2;
	}
	else
	{
		Width = Num1;
		Length = Num2;
	}

	for (int Wth = 1; Wth <= Width; Wth++)
	{
		for (int Len = 1; Len <= Length; Len++)
		{
			cout << "X";
		}
		cout << endl;
	}
	return 0;
}