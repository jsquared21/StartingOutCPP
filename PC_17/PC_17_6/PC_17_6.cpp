/*
List Reverse
Modify the list class you created in the previous programming challenges by adding a
member function for reversing the list:
void reverse();
The member function rearranges the nodes in the list so that their order is reversed. You
should do this without creating or destroying nodes.
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list;

	// Store values in list
	for (int i = 1; i <= 10; i++)
		list.add(i * 2.5);
	list.print();
	list.reverse();
	list.print();
}