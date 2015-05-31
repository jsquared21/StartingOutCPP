// IntRange class function implementation file
#include <iostream>
#include "IntRange.h"
using namespace std;

/*********************************************
 *     IntRange default constructor          *
 *********************************************/
IntRange::IntRange()
{
	int L, U;

	// Prompt user to enter integer for lower and upper range
	cout << "Enter the integer to set as the lower range: ";
	cin  >> L;
	cout << "Enter the integer to set as the upper range: ";
	cin  >> U;

	lower = L;		// Set the valid lower
	upper = U;		// and upper bounds
}

/****************************************************
 *               getInt                             *
 * This function inputs an integer, validates it is * 
 * in the correct range, then returns the integer   *
 ****************************************************/
int IntRange::getInt()
{
	// Validate that integer is in the correct range
	// If not, require the user to re-enter it.
	cin >> input;		// get an integer

	while (input < lower || input > upper)
	{
		cout << "That is not a valid integer.\n"
			 << "Enter an integer greater than " << lower;
		cout << " and less than " << upper << endl;
		
		cin >> input;		// get an integer
	}

	return input;
}