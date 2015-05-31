/*
10. List Sort
Modify the list class you created in the previous programming challenges by adding a
member function that will sort the list into ascending order by the numeric value of the
item stored in the node.
void sort( );
You should sort the list by moving pointers rather than by copying or swapping the contents
of the nodes.
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list;
	
	list.add(2.5);
	list.add(7.9);
	list.add(12.6);
	list.add(5.3);
	list.add(3.2);
	list.add(13.3);
	list.add(6.5);
	list.add(1.8);
	cout << "This is the unsorted list:\n";
	list.print();
	cout << "Sorting the list into ascending order by the\n" 
		 << "numeric value of the item stored in the node.\n";
	list.sort();
	cout << "This is the sorted list:\n";
	list.print();
	return 0;
}