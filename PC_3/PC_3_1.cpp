// This program caluclates and displays the number of miles per gallon a car gets.
#include <iostream>
using namespace std;

int main()
{
	double Gallons, Miles, MilesPerGallon;

	// Ask user to input the number of gallons of gas the car can hold
	// and the number of miles it can be driven on a full tank.
	cout << "This program caluclates how many miles per gallon your car gets\n";
	cout << "Enter the number of gallons of gas your car can hold: ";
	cin  >> Gallons;
	cout << "Enter the number of miles your car can be driven on a full tank: ";
	cin  >> Miles;

	// Calculate and display the number of miles per gallon.
	MilesPerGallon = Miles / Gallons;
	cout << "This car gets " << MilesPerGallon << " miles per gallon.\n";
	return 0;
}