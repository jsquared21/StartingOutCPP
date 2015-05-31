/*
List Search
Modify the list class of Programming Challenge 1 (or later) to include a member
function

	int search(double x)

that returns the position of a number x on the list. The first node in the list is
at position 0, the second node is at position 1, and so on. If x is not found on
the list, the search should return -1. Test the new member function using an
appropriate driver program.
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list; 	// Create empty list
	double input;
	int result;

	// Store values in list
	for (int i = 1; i <= 11; i++)
		list.add(i * 2.5);

	list.print();
	cout << "Enter a value to be searched in list: ";
	cin  >> input;

	result = list.search(input);

	if (result == -1)
	{
		cout << "\"" << input << "\" was not found in the list.\n"; 
	}
	else
	{
		cout << "\"" << input << "\" was found in position: " << result << endl; 
	}

	return 0;
}