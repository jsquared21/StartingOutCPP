/*
Ascending Circles
Program 8-31 from Chapter 8 creates an array of four Circle objects, then displays the area
of each object. Using a copy of that program as a starting point, modify it to create an
array of eight Circle objects initialized with the following radii: 2.5, 4.0, 1.0, 3.0, 6.0, 5.5,
3.5, 2.0. Then use a bubble sort to arrange the objects in ascending order of radius size
before displaying the area of each object.
*/
#include <iostream>
#include <iomanip>
#include "Circle.h"		// Needed to create Circle objects
using namespace std;

const int NUM_CIRCLES = 8;

// Function prototypes
void bubbleSort(Circle[]);

int main()
{
	// Define an array of 4 Circle objects. Use an initialization list
	// to call the 1-argument constructor for the first 3 objects.
	// The default constructor will be called for the final object.
	Circle circle[NUM_CIRCLES] = {2.5, 4.0, 1.0, 3.0, 6.0, 5.5, 3.5, 2.0};

	// Call the funciton bubblesort
	bubbleSort(circle);

	// Display the area of ecah object
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the areas of the " << NUM_CIRCLES
		 << " circles.\n";

	for (int index = 0; index < NUM_CIRCLES; index++)
	{	cout << " circle " << (index+1) << setw(8)
			 << circle[index].findArea() << endl;
	}
	return 0;
}

/******************************************************************************
 *                                 bubbleSort                                 *
 * This function sorts an array of objects in ascending order using the       *
 * bubble sort method.                                                        *
 ******************************************************************************/
void bubbleSort(Circle array[])
{
	Circle temp;
	bool swap;

	do
	{	swap = false;
		for (int count = 0; count < (NUM_CIRCLES - 1); count++)
		{
			if (array[count].getRadius() > array[count + 1].getRadius())
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}