/*
Sum of Digits in a String
Write a program that asks the user to enter a series of single-digit numbers with nothing
separating them. Read the input as a C-string or a string object. The program should display
the sum of all the single-digit numbers in the string. For example, if the user enters
2514, the program should display 12, which is the sum of 2, 5, 1, and 4. The program
should also display the highest and lowest digits in the string.
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

const int LENGTH = 100;

int main()
{
	char Digits[LENGTH], D[1];
	int Sum = 0;


	// Ask the user to enter a series of single-digit numbers
	// with nothing separating them.
	cout << "Enter a series of single-digit numbers "
		 << "with nothing separating them:\n";
	//cin  >> Digits;
	cin.getline(Digits, LENGTH);

	cout << "Sum of the digits in \"" << Digits << "\": ";

	for (int i = 0; i < strlen(Digits); i++)
	{
		D[0] = Digits[i];
		Sum += atoi(D);
	}

	cout << Sum << endl;

	return 0;
}