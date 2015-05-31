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
	// Member functions
	// Constructor
	LinkedList(){ head = NULL; }
	void add(double x);
	void remove(double x);
	bool isMember(double x);
	void print();
	// Copy Constructor
	LinkedList(const LinkedList& original);
	//LinkedList& operator=(LinkedList right);
	// Destructor
	~LinkedList();
private:
	static ListNode* copyList(ListNode *aList);
	//static void destoryList(ListNode *aList);
};

//********************************************************************************
// add function adds a new node containing x to the list.                        *
//********************************************************************************
void LinkedList::add(double x)
{
	if (head == NULL)
		head = new ListNode(x);
	else
		head = new ListNode(x, head);
}

//********************************************************************************
// remove function removes the node containing x from the list.                  *
//********************************************************************************
void LinkedList::remove(double x)
{
	ListNode *ptr, *past;
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
			past = ptr;
			ptr = ptr->next;
		}
	
		if (ptr)
		{
			past->next = ptr->next;
			delete ptr;
		}
	}
}
//********************************************************************************
// isMember function tests to see if the list contains a node with the value x.  *
//********************************************************************************
bool LinkedList::isMember(double x)
{
	ListNode * ptr = head;
	while (ptr != NULL)
	{
		if (ptr->value == x)
			return true;
		ptr = ptr->next;
	}
	return false;
}

//********************************************************************************
// print fuction display all the elements in the list.                           *
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

//********************************************************************************
// Copy Constructor                                                              *
//********************************************************************************
LinkedList::LinkedList(const LinkedList& original)
{
	head = copyList(original.head);
}

//********************************************************************************
// Make a seprate copy of the linked list inside a LinkedList object.            *
//********************************************************************************
LinkedList::ListNode * LinkedList::copyList(ListNode* aList)
{
	if (aList == NULL)
		return NULL;
	else
	{
		// First copy the tail of the list
		ListNode *tailCopy = copyList(aList->next);
		// Return copy of the head attached to copy of tail
		return new ListNode(aList->value, tailCopy);
	}
}

////********************************************************************************
//// Overloaded Assignment operator                                                *
////********************************************************************************
//LinkedList& LinkedList::operator=(LinkedList right)
//{
//	// First destory the linked list in this object
//	destoryList(head);
//	// Assign a copy of the linked list in other object
//	head = copyList(right.head);
//}
//
////********************************************************************************
//// Destroy a list by deallocation all of its nodes                               *
////********************************************************************************
//void LinkedList::destoryList(ListNode * aList)
//{
//	if (aList != NULL)
//	{
//		ListNode *tail = aList->next;
//		// deallocate the head and then destroy the tail
//		delete tail;
//		destoryList(tail);
//	}
//}
//
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

