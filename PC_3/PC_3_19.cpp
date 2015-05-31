// Pizza Slices
// This program calculates the number of slices
// a pizza of any size can be divided into.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14,
				 SLICE = 14.125;

	int NumOfSlices;
	double Diameter,
		   Radius,
		   Area;

	// Ask the user to input the diameter of the pizza.
	cout << "To calculate the number of slices a pizza can be divided\n";
	cout << "into, enter the diameter of the pizza in inches: ";
	cin  >> Diameter;

	// Calculates the radius, area of the pizza, and the
	// number of slices the pizza can be divided into.
	Radius = Diameter / 2;
	Area = PI * pow(Radius, 2);
	NumOfSlices = Area / SLICE;

	// Display number of slices the pizza can be divided into.
	cout << "This pizza can be divided into " << NumOfSlices << " slices." << endl;
	return 0;
}