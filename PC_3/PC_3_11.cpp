// Celsius to Fahrenheit
// This program converts Celsius to Fahrenheit.
#include <iostream>
using namespace std;

int main()
{
	double C,
		   F;

	cout << "To convert the temperature from Celsius to Fahrenheit\n";
	cout << "Enter the temperature in Celsius: ";
	cin  >> C;

	F = (9/5 * C) + 32;
	cout << F << "F\n";
	return 0;
}