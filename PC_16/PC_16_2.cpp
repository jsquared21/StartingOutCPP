/*
Arithmetic Exceptions
Write a function that accepts an integer parameter and returns its integer square root. The
function should throw an exception if it is passed an integer that is not a perfect square.
Demonstrate the function with a suitable driver program.
*/
#include <iostream>
#include <cmath>
using namespace std;

// Function Prototype
int squareRoot(int);

int main()
{
	int num, result;

	cout << "Enter a number and this program\n"
	     << "will return its square root: ";
	cin  >> num;

	try
	{
		result = squareRoot(num);
		cout << "The square root of " << num << " is " << result << endl;
	}
	catch (const char *exceptionString)
	{
		cout << exceptionString;
	}
	cout << "End of program.\n";
	return 0;
}

//********************************************************************************
// squareRoot                                                                    *
// This function accepts an integer parameter and returns its integer square     *
// root. The function throws an exception if it is passed an integer that is     *
// not a perfert square.                                                         *
//********************************************************************************
int squareRoot(int num)
{
	if (num <= 0 || sqrt(num) != static_cast<int>(sqrt(num)))
		throw "Error: The number is not a perfect square.\n";

	return sqrt(num);
}
