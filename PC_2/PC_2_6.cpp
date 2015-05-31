/*
Miles per Gallon
A car holds 16 gallons of gasoline and can travel 350 miles before refueling.
Write a program that calculates the number of miles per gallon the car gets.
Display the result on the screen.
*/

// Program displays the number of miles per gallon.
#include <iostream>
using namespace std;

int main()
{
	int 	Miles 	= 350,
			Gallons = 16,
			MPG		= Miles / Gallons;

	cout << "This car gets " << MPG <<" miles per gallon.\n";
	return 0;
}