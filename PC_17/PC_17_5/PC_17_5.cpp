/*
List Member Deletion
Modify the list class you created in the previous programming challenges by adding a function
to remove an item from the list, and by adding a destructor:

	void remove(double x);
	~LinkedList();

Test the class by adding by a sequence of instructions that mixes operations for adding
items, removing items, and printing the list.
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list;
	double input;	

	// Store values in list
	for (int i = 1; i <= 10 ; i++)
		list.add(i * 2.5);
	// Print list
	cout << "These a the contents of the list:\n";
	list.print();
	cout << "Removing \"5.0\" from list.\n";
	list.remove(5.0);
	cout << "These a the contents of the list:\n";
	list.print();
	cout << "Enter a value to remove from list: ";
	cin  >> input;
	list.remove(input);
	cout << "These a the contents of the list:\n";
	list.print();

	return 0;
}