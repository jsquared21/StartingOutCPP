// Car.h -- Car class specification file
#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
	private:
		int    year,		// Holds the car's model year.
			   speed;		// Holds the car's current speed.
		string make;		// Holds the make of the car.

	public:
		// Constructor accpets the car's year and make as arguments and assigns
		// these values to the object's year and make member variables. The
		// speed member variable is initialize to 0.
		Car(int y, string m)
		{	year = y; make = m; speed = 0; }

		// Accessor functions to retrieve values from object's year, make and
		// speed variables.
		int getYear()
		{	return year; }

		int getSpeed()
		{	return speed; }

		string getMake()
		{	return make; }

		// Function adds 5 to the speed member variable.
		void accelerate()
		{	speed += 5; }

		// Function subtracts 5 from the speed member variable.
		void brake()
		{	speed -= 5; }
};
#endif