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
	~LinkedList();					// Destructor
	// Member functions
	void add(double x);
	void remove(double x);
	bool isMember(double x);
	int search(double x);
	void insert(double x, int pos);
	void print();
	// Copy Constructor
	LinkedList(const LinkedList& original);
private:
	static ListNode *copyList(ListNode *aList);
};

//********************************************************************************
// Destructor                                                                    *
//********************************************************************************
LinkedList::~LinkedList()
{
	ListNode *aptr = head;
	while (aptr != NULL)
	{
		ListNode *garbage = aptr;
		aptr =  aptr->next;
		delete garbage;
	}
}

//********************************************************************************
// add function adds a new node containing x to the head of the list.            *   
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
	ListNode *aptr, *previous;
	if (head == NULL)
		return;
	if (head->value == x)
	{
		aptr = head;
		head = head->next;
		delete aptr;
	}
	else
	{
		aptr = head;
		while (aptr != NULL && aptr->value != x)
		{
			previous = aptr;
			aptr = aptr->next;
		}
		if (aptr)
		{
			previous->next = aptr->next;
			delete aptr;
		}
	}
}

//********************************************************************************
// isMember function tests the list to see if x is a member of and of its nodes. *
//********************************************************************************
bool LinkedList::isMember(double x)
{
	if (head == NULL)
		return false;
	else
	{
		ListNode *aptr = head;
		while (aptr != NULL)
		{
			if (aptr->value == x)
				return true;
			aptr = aptr->next;
		}
		return false;
	}
}

//********************************************************************************
// search function searches the nodes in a list for x. If x is found the         *
// position of x in the list is returned, else -1 is returned.                   * 
//********************************************************************************
int LinkedList::search(double x)
{
	if (head == NULL)
		return -1;
	else
	{
		int count = 0;
		ListNode *aptr = head;
		while (aptr != NULL)
		{
			if(aptr->value == x)
				return count;
			aptr = aptr->next;
			count++;
		}
		return -1;
	}

}

//********************************************************************************
// insert function inserts a new node into the list containing x at position pos *
//********************************************************************************
void LinkedList::insert(double x, int pos)
{
	ListNode *aptr, *previous;
	int count = 0;

	if (head == NULL)
		head = new ListNode(x);
	else
	{
		aptr = head;
		while (aptr != NULL && count != pos)
		{
			previous = aptr;
			aptr = aptr->next;
			count++;
		}
		previous->next = new ListNode(x, aptr);
	}
}

//********************************************************************************
// print function displays the contents of all the node in a list.               *
//********************************************************************************
void LinkedList::print()
{
	ListNode *aptr = head;
	while (aptr != NULL)
	{
		cout << aptr->value << " ";
		aptr = aptr->next;
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
// copyList function creates a copy of a list inside of a LinkedList object.     *
//********************************************************************************
LinkedList::ListNode* LinkedList::copyList(ListNode* aList)
{
	if (aList == NULL)
		return NULL;
	else
	{
		// Copy the tail of the list
		ListNode *tailCopy = copyList(aList->next);
		// Return list with head attached to the tail
		return new ListNode(aList->value, tailCopy);
	}
}