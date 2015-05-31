/*
Falling Distance

The following formula can be used to determine the distance an object falls due to 
gravity in a specific time period:

	d = 1/2gt^2

The variables in the formula are as follows: d is the distance in meters, g is 9.8,
and t is the time in seconds that the object has been falling.

Write a function named fallingDistance that accepts an object’s falling time (in
seconds) as an argument. The function should return the distance, in meters, that
the object has fallen during that time interval. Write a program that demonstrates
the function by calling it in a loop that passes the values 1 through 10 as
arguments, and displays the return value.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double GRAVITY = 9.8;

// Function prototypes
double fallingDistance(int);

int main()
{
 	cout << "\nTable of the distances an object falls due\n"
 		 << "to gravity in specific time periods.\n\n"
 		 << "    Time        Distance\n"
 	     << "(in seconds)   (in meters)\n"
 	     << "---------------------------\n";

 	for(int T = 1; T <= 10; T++)
 	{
 		cout << "    " << setw(3) << T << "           "
 			 << fixed << setprecision(0) << setw(4) 
 			 << fallingDistance(T) << endl;
 	}
 	cout << endl;
 	return 0;
}
/******************************************************************************
 *                          fallingDistance                                   *
 * This function accepts an object’s falling time (in seconds) as an argument *
 * and returns  the distance in meters that the object has fallen during that *
 * time interval.                                                             *
 ******************************************************************************/
double fallingDistance(int T)
{
	return .5 * GRAVITY * pow(T, 2);
}