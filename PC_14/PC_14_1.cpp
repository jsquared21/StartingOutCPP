/*
1. Iterative Factorial
Write an iterative version (using a loop instead of recursion) of the factorial function
shown in this chapter. Demonstrate the use of the function in a program that prints the factorial
of a number entered by the user.
*/
#include <iostream>
using namespace std;

// Function prototype
int factorial(int);

int main()
{
	int number;

	cout << "Enter an integer value and I will display\n";
	cout << "its factorial: ";
	cin  >> number;
	cout << "The factorial of " << number << " is ";
	cout << factorial(number) << endl;
	return 0;
}

//********************************************************
// Definition of factorial. A loop function to calculate *
// the factorial of the parameter, num.                  *
//********************************************************
int factorial(int num)
{
	int fac = 1;
	for (int i = 1; i <= num; i++)
	{
		fac *= i;
		
	}
	return fac;
}