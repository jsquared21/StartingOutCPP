/*
Lottery Winners Modification
Modify the program you wrote for Programming Challenge 2 (Lottery Winners) so it performs
a binary search instead of a linear search.
*/
#include <iostream>
using namespace std;

// Function Prototypes
int searchList(int [], int, int);

int main()
{
	const int NUMS = 10;
	int Picks[NUMS] = { 13579, 26791, 26792, 33445, 55555,
						62483, 77777, 79422, 85647, 93121 };

	int WinNums,		// Holds winning numbers
		Search;			// Holds search results

	// Ask user to enter a five-digit number
	cout << "Enter this week’s winning five-digit number: ";
	cin  >> WinNums;

	// Search the array for WinNums
	Search = searchList(Picks, NUMS, WinNums);

	// Report whether or not one of the tickets is a winner this week.
	if (Search == -1)
		cout << "Sorry, no winning ticket this week.\n";
	else
	{
		cout << "Congratulations!\nYou have the winning five-digit number: " 
			 << Picks[Search] << endl;
	}

	return 0;
}

/*******************************************************************************
 *                               searchList                                    *
 * This function performs a linear search on an integer array. The list array, *
 * which has size elements, is searched for the number stored in value. If the *
 * number is found, its array subscript is returned. Otherwise -1 is returned. *
 *******************************************************************************/
int searchList(int array[], int size, int value)
{
	int  position = -1,					// Used to record position of search value
		 first = 0,						// First array element
		 last = size - 1,				// Last array element
		 middle;						// Midpoint of search
	bool found = false;					// Flag to indecate if the value was found

	while (!found && first <= last)
	{
		middle = (first + last) / 2; 	// Calculate midpoint 
		if (array[middle] == value)		// If the value is found
		{
			position = middle;			// Record the value's subscript
			found = true;				// Set flag
		}
		else if (array[middle] > value)	// If value is in lower half
			last = middle - 1;
		else 							// If value is in upper half
			first = middle + 1;
	}
	return position;					// Return the position, or -1
}
