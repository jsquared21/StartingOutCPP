/*
List Print
Modify the list class you created in the previous programming challenges to add a print
member function. Test the class by starting with an empty list, adding some elements, and
then printing the resulting list out.
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list; 	// Create an empty list.

	// Add some elements
	for (int i = 0; i <= 5; i++)
		list.add(i * 1.5);

	list.print();

	return 0;
}