/*
Recursive Member Check
Modify the list class you created in the previous programming challenges to use a
recursive method to check for list membership. Test your class.
*/
#include <iostream>
#include <iomanip>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list; 	// Create empty list
	double input;

	// Store some values
	for (int i = 1; i <= 6; i++)
		list.add(i * 1.3);

	// Ask user to enter a value
	cout << "Enter a value to test for membership: ";
	cin  >> input;

	cout << fixed << showpoint << setprecision(1);
	if (list.isMember(input))
		cout << "\"" << input << "\" is a member of the list.\n";
	else
		cout << "\"" << input << "\" is not a member of the list.\n";

	return 0;
}