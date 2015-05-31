/*
Member Insertion By Position
Modify the list class you created in the previous programming challenges by adding
a member function for inserting a new item at a specified position:

	void insert(double x, int pos);

A position of 0 means that x will become the first item on the list, a position of
1 means that x will become the second item on the list, and so on. A position
equal to, or greater than, the length of the list means that the x is placed at the
end of the list.
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list;

	// Store some values
	for (int i = 1; i <= 11; i++)
		list.add(i * 2.5);

	// print list
	cout << "These are the values of the list:\n";
	list.print();

	list.insert(100.6, 0);
	list.insert(200.6, 5);
	list.insert(250.6, 12);
	list.insert(300.6, 28);

	// print list
	cout << "These are the values of the list:\n";
	list.print();

	return 0;
}