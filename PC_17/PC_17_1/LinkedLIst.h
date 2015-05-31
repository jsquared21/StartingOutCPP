//#ifndef LINKEDLIST_H
//#define LINKEDLIST_H

#include <iostream>
using namespace std;
class LinkedList
{
protected:
	struct ListNode
	{
		double value;
		ListNode *next;
		ListNode(double value1, ListNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	ListNode *head;					// List head pointer
public:
	LinkedList() { head = NULL; } 	// Constructor
	~LinkedList();
	void add(double x);
	bool isMember(double x);
};

//********************************************************************************
// add function adds a new node containing x to the front (head) of the list.    * 
//********************************************************************************
void LinkedList::add(double x)
{
	if (head == NULL)
		head = new ListNode(x);
	else
	{
		head = new ListNode(x, head);
	}
}

//********************************************************************************
// isMember function tests to see if the list contains a node with the value x.  *
//********************************************************************************
bool LinkedList::isMember(double x)
{
	ListNode *ptr = head;
	while(ptr != NULL)
	{
		if (ptr->value == x)
			return true;
		ptr = ptr->next;
	}

	return false;
}

//********************************************************************************
// Destructor deallocates the memory  used by the list.                          *
//********************************************************************************
LinkedList::~LinkedList()
{
	ListNode *ptr = head;	// Strat at head of list
	while (ptr != NULL)
	{
		// garbage keeps track of node to be deleted
		ListNode *garbage = ptr;
		// Move to the next node if any
		ptr = ptr->next;
		// Delete the "garbage" node
		delete garbage;
	}
}

//#endif