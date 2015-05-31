/*
Simple Linked List Class
Using an appropriate definition of ListNode, design a simple linked list class
with only two member functions and a default constructor:

	void add(double x);
	boolean isMember(double x);
	LinkedList( );

The add function adds a new node containing x to the front (head) of the list,
while the isMember function tests to see if the list contains a node with the
value x. Test your linked list class by adding various numbers to the list and
then testing for membership.
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list;
	double input;

	list.add(2.5);
	list.add(4.8);
	list.add(1.3);
	list.add(4.7);

	cout << "Enter a float to test for membership in the List: ";
	cin  >> input;

	if (list.isMember(input))
		cout << "The double \"" << input << "\" is a member of the list.\n" << endl;
	else
		cout << "The double \""<< input << "\" is not a member of the list.\n" << endl;

	return 0;
}