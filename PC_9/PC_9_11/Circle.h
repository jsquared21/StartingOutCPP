// This header file contains the Circle class declaration.
#ifndef CIRCLE_H
#define CIRCLE_H
#include <cmath>

class Circle
{	private:
		double radius;					// Circle radius
		int centerX, centerY;			// Center coordinates

	public:
		Circle()						// Default constructor
		{	radius = 1.0;				// accepts no arguments
			centerX = centerY = 0;
		}

		Circle(double r)				// Constructor 2
		{	radius = r;					// accepts 1 arguement
			centerX = centerY = 0;
		}

		Circle(double r, int x, int y)	// Constructor 3
		{	radius = r;					// accepts 3 arguments
			centerX = x;
			centerY = y;
		}

		void setRadius(double r)
		{	radius = r;
		}

		double getRadius()
		{	return radius;
		}

		int getXcoord()
		{	return centerX;
		}

		int getYcoord()
		{	return centerY;
		}

		double findArea()
		{	return 3.14 * pow(radius, 2);
		}
}; // End Circle class declaration
#endif