/*
Minimum/Maximum
Write a program that asks the user to enter two numbers. The program should use the conditional
operator to determine which number is the smaller and which is the larger.
*/
#include <iostream>
using namespace std;

int main()
{
	double num1, num2;

	// Ask the user to input numbers.
	cout << "Enter two numbers and I will determine which\n";
	cout << "number is the smaller and which is the larger.\n";
	cout << "Enter the first number: ";
	cin  >> num1;
	cout << "Enter the secong number: ";
	cin  >> num2;

	if (num1 < num2)
		cout << num1 << " is smaller than " << num2 << ".\n";
	else
		cout << num2 << " is smaller than " << num1 << ".\n";
	return 0;
}