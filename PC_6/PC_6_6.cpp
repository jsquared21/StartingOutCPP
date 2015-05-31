/*
Safest Driving Area

Write a program that determines which of 5 geographic regions within a major city
(north, south, east, west, and central) had the fewest reported traffic accidents
last year. It should have the following two functions, which are called by main.

	• int getNumAccidents() is passed the name of a region. It asks the user for
	  the number of traffic accidents reported in that region during the last
	  year, validates the input, then returns it. It should be called once for
	  each city region.
	• void findLowest() is passed the five accident totals. It determines which is
	  the smallest and prints the name of the region, along with its accident
	  figure.

	  Input Validation: Do not accept an accident number that is less than 0.
*/
#include <iostream>
using namespace std;

// Function Prototypes
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main()
{
	int North, South, East, West, Central;

	cout << "\nThis program determines which region\n"
		 << "had the fewest reported traffic accidents.\n"
		 << "------------------------------------------\n\n";
	// Call function getNumAccidents once for each area.
	North   = getNumAccidents("North");
	South   = getNumAccidents("South");
	East    = getNumAccidents("East");
	West    = getNumAccidents("West");
	Central = getNumAccidents("Central");

	// Call function findLowest passing the five
	// accident figures as arguments.
	findLowest(North, South, East, West, Central);

	return 0;
}

/*****************************************************************
 *                       getNumAccidents                         *
 * This function is passed the name of a region. It asks the     *
 * user for the number of traffic accidents reported in that     *
 * region during the year, validates the input, then returns it. *
 *****************************************************************/
int getNumAccidents(string Region)
{
	int Accidents;

	do
	{
		cout << "How many traffic accidents were reported in\nthe "
			 << Region << " region during last year? ";
		cin  >> Accidents;

		if (Accidents < 0)
		{
			cout << "\nInvalid report!\n"
				 << "Accident number must be greater than 0.\n";
		}

	} while (!(Accidents > 0));
    cout << endl;
	return Accidents;
}

/*******************************************************************
 *                       findLowest                                *
 * This function is passed the five accident totals. It determines *
 * which is the smallest and prints the name of the region, along  *
 * with itd accident figure.                                       *
 *******************************************************************/
void findLowest(int North, int South, int East, int West, int Central)
{
	int Lowest;

	cout << "\nThe fewest reported traffic accidents last year were in\nthe ";

	if(North < South   &&
	   North < East    &&
	   North < West    &&
	   North < Central)
	{
		Lowest = North;
		cout << "North ";
	}
	else if(South < North   &&
	   		South < East    &&
	   		South < West    &&
	   		South < Central)
	{
		Lowest = South;
		cout << "South ";
	}
	else if(East < North   &&
	   		East < South   &&
	   		East < West    &&
	   		East < Central)
	{
		Lowest = East;
		cout << "East ";
	}
	else if(West < North   &&
	   		West < East    &&
	   		West < South   &&
	   		West < Central)
	{
		Lowest = West;
		cout << "West ";
	}
	else
	{
		Lowest = Central;
		cout << "Central ";
	}

	cout << "region which had " << Lowest << " reported traffic accidents.\n\n";
}