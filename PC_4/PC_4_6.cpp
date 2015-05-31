/*
Mass and Weight
Scientists measure an object’s mass in kilograms and its weight in newtons. If you know an
object’s mass, you can calculate its weight in newtons with the following formula:

weight = mass x 9.8

Write a program that asks the user to enter an object’s mass, and then calculates and displays
its weight. If the object weighs more than 1000 newtons, display a message indicating that
it is too heavy. If the object weighs less than 10 newtons, display a message indicating that
the object is too light.
*/

#include <iostream>
using namespace std;

int main()
{
	double Weight, Mass;

	// Ask user to input the mass of an object.
	cout << "Calculate the weight of an object.\n"
		 << "Enter the object's mass: ";
	cin  >> Mass;

	// Calculate mass.
	Weight = Mass * 9.8;

	// Display weight and messages.
	cout << "This object weights " << Weight << " newtons.\n";
	if (Weight > 1000)
		cout << "It is too heavy!\n";
	else if (Weight < 10)
		cout << "It is too light!\n";	
	return 0;
}