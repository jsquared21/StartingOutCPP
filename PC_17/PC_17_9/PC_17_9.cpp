/*
Member Removal by Position
Modify the list class you created in the previous programming challenges by adding a
member function for deleting a node at a specified position:

	void remove(int pos);

A value of 0 for the position means that the first node on the list (the current head) is
deleted. The function does nothing if the value passed for pos is greater or equal to the
length of the list.
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list;	// Create list

	// Store values in list
	for (int i = 1; i <= 11; i++)
		list.add(i * 2.3);

	// Print list
	cout << "These are the value in the list:\n";
	list.print();

	// Revome a node
	cout << "Revoming the value at position: 0\n";
	list.remove(0);

	// Print list
	cout << "These are the value in the list:\n";
	list.print();

	// Revome a node
	cout << "Revoming the value at position: 5\n";
	list.remove(5);

	// Print list
	cout << "These are the value in the list:\n";
	list.print();

	// Revome a node
	cout << "Revoming the value at position: 28\n";
	list.remove(28);

	// Print list
	cout << "These are the value in the list:\n";
	list.print();

	return 0;
}