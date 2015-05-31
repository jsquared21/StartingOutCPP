/*
isPrime Function

A prime number is an integer greater than 1 that is evenly divisible by only 1 and
itself. For example, the number 5 is prime because it can only be evenly divided
by 1 and 5. The number 6, however, is not prime because it can be divided by
1, 2, 3, and 6.

Write a Boolean function named isPrime, which takes an integer as an argument and
returns true if the argument is a prime number, and false otherwise. Demonstrate
the function in a complete program.

***********************************************************************************
* TIP: Recall that the % operator divides one number by another, and returns the  *
* remainder of the division. In an expression such as num1 % num2, the % operator *
* will return 0 if num1 is evenly divisible by num2.                              *
***********************************************************************************/

#include <iostream>
using namespace std;

// Function Prototypes
bool isPrime(int);

int main()
{
	int Num;

		cout << "This program let you know if the number entered is a "
			 << "prime number.\nEnter a number: ";
		cin  >> Num;

	cout << "The number " << Num;

	if (isPrime(Num))
	{
		cout << " is a Prime number." << endl;
	}
	else
		cout << " is not a Prime number." << endl;

	return 0;
}

/**************************************************************************
 *                                isPrime                                 *
 *  This function take an integer as an argument and retruns ture if the  *
 *  argument is a prime number, and false otherwise.                      *
 **************************************************************************/
bool isPrime(int Num)
{
	if (Num > 1)
	{
		for (int i = 2; i <= Num; ++i)
		{
			
			if (Num % i == 0)
			{
				if(Num == i)
					return true;
				else
					return false;
			}
	
		}
	}
	return false;
}
