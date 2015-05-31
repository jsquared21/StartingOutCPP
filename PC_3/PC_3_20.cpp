// How Many Pizzas?
// This program calculates the number of pizzas need to be bought.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14,
				 SLICE = 14.125;

	double SlicesPerPizza,
		   MinSlicesNeeded,
		   People,
		   NumOfPizzas,
		   Diameter,
		   Radius,
		   Area;

	// Ask the user to input the diameter of the pizza.
	cout << "Enter the following data to calculate the\n";
	cout << "number pizzas you need to buy for your party.\n";
	cout << "How many people will be attending your party: ";
	cin  >> People;
	cout << "What is the diameter of the pizza/s in inches: ";
	cin  >> Diameter;

	// Calculates the radius, area of the pizza, and the
	// number of slices the pizza can be divided into.
	Radius = Diameter / 2;
	Area = PI * pow(Radius, 2);
	SlicesPerPizza = Area / SLICE;
	MinSlicesNeeded = People * 4;
	NumOfPizzas = MinSlicesNeeded / SlicesPerPizza;

	// Display number of slices the pizza can be divided into.
	cout << fixed << setprecision(0);
	cout << "Number of pizzas needed for your party: " << NumOfPizzas << endl;
	return 0;
}