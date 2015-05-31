/*
Total Template
Write a template for a function called total. The function should keep a running total of
values entered by the user, then return the total. The argument sent into the function
should be the number of values the function is to read. Test the template in a simple driver
program that sends values of various types as arguments and displays the results.
*/
#include <iostream>
using namespace std;

// Template definition
template <class T>
class TotalClass
{
private:
	T *aptr;	// Holds a pointer address
	T Total;	// Holds running total
	T V;		// Holds user input
	int size;	// Array size
public:
	// member functions
	//****************************************************************************
	// total                                                                     *
	// function accepts and integer as its argument which is the number of       *
	// values the function is to read. The function keeps a running total of the *
	// entered by the uesr, then returns the total.                              *
	//****************************************************************************
	T total(int S)
	{
		size = S;
		aptr = new T [S];
		for (int i = 0; i < size; i++)
			aptr[i] = T();

		cout << "Input each value follow by enter:\n";
		if (size > 1)
		{
			for (int i = 0; i < size; i++)
			{
				cin  >> V;
				Total+=V;
			}
		}
		return Total;
	}
	~TotalClass()
	{
		if (size > 0)
			delete [] aptr;
	}
};

int main()
{
	int size, intResult; 
	double dResult;
	string sResult;
	char chResult;

	cout << "How many values would you like to total? ";
	cin  >> size;

	// Test using integers
	cout << "Test total function using int data type\n"
		 << "---------------------------------------------\n";
	TotalClass<int> test;
	intResult = test.total(size);
	cout << "Total: " << intResult << endl << endl;

	// Test using doubles
	cout << "Test total function using double data type\n"
		 << "---------------------------------------------\n";
	TotalClass<double> test2;
	dResult = test2.total(size);
	cout << "Total: " << dResult << endl << endl;

	// Test using string
	cout << "Test total function using string data type\n"
		 << "---------------------------------------------\n";
	TotalClass<string> test3;
	sResult = test3.total(size);
	cout << "Total: " << sResult << endl << endl;

	// Test using character
	cout << "Test total function using character data type\n"
		 << "---------------------------------------------\n";
	TotalClass<char> test4;
	chResult = test4.total(size);
	cout << "Total: " << chResult << endl << endl;

	return 0;
}