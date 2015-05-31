/*
Recursive Conversion
Convert the following function to one that uses recursion.
	void sign(int n)
	{
		while (n > 0)
		{
			cout << "No Parking\n";
			n--;
		}
	}
Demonstrate the function with a driver program.
*/
#include <iostream>
using namespace std;

// Function prototype
void sign(int);

int main()
{
	int n;

	cout << "Enter the number of time to print the sign: ";
	cin  >> n;

	sign(n);
}

//********************************************************
// Definition of sign. A recursive function to print the *
// sign "No Parking" the parameter n number of times.    *
//********************************************************
void sign(int n)
{
	if (n > 0)
	{
		cout << "No Parking\n";
		sign(--n);
	}
}