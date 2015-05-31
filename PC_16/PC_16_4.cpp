/*
Sequence Accumulation
Write a function
T accum(vector <T> v)
that forms and returns the “sum” of all items in the vector v passed to it. For example, if T is
a numeric type such as int or double, the numeric sum will be returned, and if T represents
the STL string type, then the result of concatenation is returned.
Test your function with a driver program that asks the user to enter 3 integers, uses accum
to compute the sum, and prints out the sum. The program than asks the user to enter
3 strings, uses accum to concatenate the strings, and prints the result.
*/
#include <iostream>
#include <vector>
using namespace std;

// Template definition
// accum template fucntion forms and returns the "sum"
// of all the items in the vector v passed to it.
template <class T>
T accum(vector <T> v)
{
	T sum = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		sum+= v[i];
	}

	return sum;
}

int main()
{
	vector<int> ivect; 		// Create a vector of int
	vector<string> svect;	// Create a vector of string
	int x;					// Holds user integer input
	string s;				// Holds user string input

	// Ask user to enter 3 integers
	cout << "Enter three numbers one at a time:\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Number " << (i+1) << ": ";
		cin  >> x;
		ivect.push_back(x);
	}
	// Print the sum of the numbers in the vector.
	cout << "The sum of the numbers ";
	for (int i = 0; i < 3; i++)
	{
		cout << ivect[i] << " ";
	}

	cout << "is: " << accum(ivect) << endl;

	// Ask user to enter 3 strings
	cout << "Enter three strings one at a time:\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "string " << (i+1) << ": ";
		cin  >> s;
		svect.push_back(s);
	}

	// Print the concatenate of the strings in the vector.
	cout << "The concatenate result of the strings ";
	for (int i = 0; i < 3; i++)
	{
		cout << svect[i] << " ";
	}

	cout << "is: " << accum(svect) << endl;

	return 0;
}

