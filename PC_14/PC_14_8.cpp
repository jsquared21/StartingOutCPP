/*
Ackermann’s Function
Ackermann’s function is a recursive mathematical algorithm that can be used to test how
well a computer performs recursion. Write a function A(m, n) that solves Ackermann’s
function. Use the following logic in your function:
If m = 0 then return n + 1
If n = 0 then return A(m-1, 1)
Otherwise, return A(m-1, A(m, n-1))
Test your function in a driver program that displays the following values:
A(0, 0) A(0, 1) A(1, 1) A(1, 2) A(1, 3) A(2, 2) A(3, 2)
*/
#include <iostream>
using namespace std;

// Function prototype
int A(int, int);

int main()
{
	int m, n;

	cout << "Enter to numbers separated by white space.\n";
	cin  >> m >> n;

	cout << A(m, n) << endl;
	return 0;
}

//********************************************************************************
// Definition of A. This function accepts two integer arguments, solves and      *
// returns the result of Ackermann's function.                                   * 
//********************************************************************************
int A(int m, int n)
{
	if (m == 0)
		return n + 1;
	if (n == 0)
		return A(m - 1, 1);
	else
		return A(m-1, A(m, n-1));
}