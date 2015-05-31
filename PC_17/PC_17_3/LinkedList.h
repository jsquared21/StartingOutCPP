#include <iostream>
#include <iomanip>
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
	ListNode *head;
public:
	LinkedList() { head = NULL; }	// Constructor
	void add(double x);
	bool isMember(double x);
	void print();
	// Copy Constructor
	LinkedList(const LinkedList& original);
private:
	static ListNode* copyList(ListNode *aList);
};

//********************************************************************************
// add function adds a new node containing x to the front (head) of the list.    *
//********************************************************************************
void LinkedList::add(double x)
{
	if (head == NULL)
		head = new ListNode(x);
	else
		head = new ListNode(x, head);
}

//********************************************************************************
// isMember function tests to see if the list contains a node with the value x.  *
//********************************************************************************
bool LinkedList::isMember(double x)
{
	ListNode *ptr = head;
	while (ptr != NULL)
	{
		if (ptr->value == x)
			return true;
		ptr = ptr->next;
	}
	return false;
}

//********************************************************************************
// Copy Constructor                                                              *
//********************************************************************************
LinkedList::LinkedList(const LinkedList& original)
{
	head = copyList(original.head);
}

//********************************************************************************
// Make a separate copy of the linked list inside a LinkedList object.           *
//********************************************************************************
LinkedList::ListNode * LinkedList::copyList(ListNode *aList)
{
	if (aList == NULL)
		return NULL;
	else
	{
		// First copy the tail
		ListNode *tailCopy = copyList(aList->next);
		// Retrun copy of the head attached to copy of tail
		return new ListNode(aList->value, tailCopy);
	}
} 

//********************************************************************************
// Print all the elements in the list.                                           *
//********************************************************************************
void LinkedList::print()
{
	ListNode *ptr = head;
	cout << fixed << showpoint << setprecision(1);
	while (ptr != NULL)
	{
		cout << ptr->value << " ";
		ptr = ptr->next;
	}
	cout << endl;
}