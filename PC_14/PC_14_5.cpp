/*
Recursive Multiplication
Write a recursive function that accepts two arguments into the parameters x and y. The
function should return the value of x times y. Remember, multiplication can be performed
as repeated addition:
7 * 4 = 4 + 4 + 4 + 4 + 4 + 4 + 4
*/
#include <iostream>
using namespace std;

// Function prototype
int times(int, int);

int main()
{
	int x, y;

	// Ask user to enter to integers separated by white space.
	cout << "Enter two number separated by a space and\n"
		 << "this prgram will return their product:\n";
	cin  >> x >> y;

	// Display results of x times y.
	cout << x << " multiply by " << y << " = " << times(x, y) << endl;
	return 0;
}

//*********************************************************************************
// Definition of times. A recursive function that accepts two arruments into the  *
// parameter x and y. The function returns the value of x times y.                *
//*********************************************************************************
int times(int x, int y)
{
	if (x > 1)
	{		
		return y + times(--x, y);
	}
	else
		return y;
	
}