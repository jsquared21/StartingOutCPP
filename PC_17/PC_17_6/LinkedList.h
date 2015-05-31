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
	LinkedList(){ head = NULL; } 	// Constructor
	// Copy Constructor
	LinkedList(const LinkedList& original);
	~LinkedList();					// Destructor
	// Member functions
	void add(double x);
	void remove(double x);
	bool isMember(double x);
	void reverse();
	void print();
	ListNode *reverse(ListNode*);
private:
	static ListNode *copyList(ListNode * right);
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
// remove function revomes the node containing x from the list.                  *
//********************************************************************************
void LinkedList::remove(double x)
{
	ListNode *ptr, *previous;
	if (head == NULL)
		return;
	if (head->value == x)
	{
		ptr = head;
		head = head->next;
		delete ptr;
	}
	else
	{
		ptr = head;
		while (ptr != NULL && ptr->value != x)
		{
			previous = ptr;
			ptr = ptr->next;
		}
		if (ptr)
		{
			previous->next = ptr->next;
			delete ptr;
		}
	}
}

//********************************************************************************
// isMember function tests the list to see is x is a member of a node.           *
//********************************************************************************
bool LinkedList::isMember(double x)
{
	ListNode *ptr = head;

	if (head == NULL)
		return false;
	while (ptr != NULL)
	{
		if (ptr->value == x)
			return true;
		ptr = ptr->next;
	}
	return false;
}

//********************************************************************************
// reverse function rearranges the nodes in the list so that their order is      *
// reversed.                                                                     *
//********************************************************************************
void LinkedList::reverse()
{
	ListNode *ptr = head;
	ListNode *b;
	reverse(ptr, ptr->next, b);

}

LinkedList::ListNode * LinkedList::reverse(ListNode * ptr, ListNode* tail, ListNode *b) 
{
	if (ptr == NULL)
		return NULL;
	else
	{
		reverse(ptr->next, );
	}
}

//********************************************************************************
// print function displays the contents of each node in the list.                *
//********************************************************************************
void LinkedList::print()
{
	ListNode *ptr = head;
	while (ptr != NULL)
	{
		cout << ptr->value << " ";
		ptr = ptr->next;
	}
	cout << endl;
}

//********************************************************************************
// Copy Constructor                                                              *
//********************************************************************************
LinkedList::LinkedList(const LinkedList& original)
{
	head = copyList(original.head);
}

//********************************************************************************
// copyList makes a copy of the linked list inside a LinkedList object.          *
//********************************************************************************
LinkedList::ListNode * LinkedList::copyList(ListNode * aList)
{
	if (aList == NULL)
		return NULL;
	else
	{
		// Copy the tail of list
		ListNode *tailCopy = copyList(aList->next);
		// Return head attached to tailCopy
		return new ListNode(aList->value, tailCopy);
	}
}

//********************************************************************************
// Destructor                                                                    *
//********************************************************************************
LinkedList::~LinkedList()
{
	ListNode *ptr = head;
	while (ptr != NULL)
	{
		ListNode *garbage = ptr;
		ptr = ptr->next;
		delete garbage;
	}
}