#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList List1;
	double input;
	// Store values in list1.
	for (int i = 0; i <= 5; i++)
	{
		List1.add(i * 1.3);
	}

	// Use copy constructor to create a second list.
	LinkedList List2(List1);

	// Ask user to enter a value
	cout << "Enter a value to test the second list for membership: ";
	cin  >> input;

	// Test the second list for membership.
	if (List2.isMember(input))
		cout << "\"" << input << "\" is a member of the second list.\n";
	else
		cout << "\"" << input << "\" is not a member of the second list.\n";
	return 0;
}