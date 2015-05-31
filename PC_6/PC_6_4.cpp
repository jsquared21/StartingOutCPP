/*
Kinetic Energy

In physics, an object that is in motion is said to have kinetic energy.
The following formula can be used to determine a moving object’s kinetic energy:

	KE = 1⁄2 * mv^2

The variables in the formula are as follows: KE is the kinetic energy in joules,
m is the object’s mass in kilograms, and v is the object’s velocity in meters per
second.

Write a function named kineticEnergy that accepts an object’s mass (in kilograms)
and velocity (in meters per second) as arguments. The function should return the
amount of kinetic energy that the object has. Demonstrate the function by
calling it in a program that asks the user to enter values for mass and velocity.
*/
#include <iostream>
#include <cmath>
using namespace std;

// Fumction Prototypes
double kineticEnergy(int, int);

int main()
{
	int Mass, 		// Mass in kilograms
		Velo;		// Velocity in meters per second

	// Ask user to enter object's mass (in kilograms)
	// and velocity (in meters per second)
	cout << "\nThis program calculates the amount\n"
	     << "of kinetic energy an object has.\n\n"
	     << "Enter the object’s mass (in kilograms): ";
	cin  >> Mass;
	cout << "Enter the object’s velocity (in meters per second): ";
	cin  >> Velo;
	cout << "This object has is "
		 << kineticEnergy(Mass, Velo) << " joules." << endl;
	return 0;
}

/*********************************************************
 *                     kineticEnergy                     *
 * This function accepts an object’s mas and velocity    *
 * as arguments and returns the amount of kinetic energy *
 * that the object has.                                  *
 *********************************************************/
double kineticEnergy(int Mass, int Velo)
{   
	return .5 * Mass * pow(Velo, 2);
}