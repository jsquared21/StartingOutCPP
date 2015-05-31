/*
Min/Max Templates
Write templates for the two functions min and max. min should accept two arguments and
return the value of the argument that is the lesser of the two. max should accept two arguments
and return the value of the argument that is the greater of the two. Design a simple
driver program that demonstrates the templates with various data types.
*/
#include <iostream>
using namespace std;

// Templates definitions
// Min template accepts two arguments and returns the 
// value of the argumet that is the lesser of the two.
template <class T>
T Min(T num1, T num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}
// Max template accepts two arguments and returns the 
// value of the argumet that is the greater of the two.
template <class T>
T Max(T num1, T num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

int main()
{
	int inum1, inum2, result;
	double dnum1, dnum2;
	string ch1, ch2;

	// Ask user to enter two integers
	cout << "Enter two integer values:\n";
	cin  >> inum1 >> inum2;
	// Call min and max templates using integer data types
	cout << "Lesser: " <<  Min(inum1, inum2) << endl;
	cout << "Greater: " << Max(inum1, inum2) << endl;

	// Ask user to enter two doubles
	cout << "Enter two float values:\n";
	cin  >> dnum1 >> dnum2;
	// Call min and max templates using double data types
	cout << "Lesser: " << Min(dnum1, dnum2) << endl;
	cout << "Greater: " << Max(dnum1, dnum2) << endl;

	// Ask user to enter two strings
	cout << "Enter two strings values:\n";
	cin >> ch1 >> ch2; 
	// Call min and max templates using string data types
	cout << "Lesser: " << Min(ch1, ch2) << endl;
	cout << "Greater: " << Max(ch1, ch2) << endl;

	return 0;
}