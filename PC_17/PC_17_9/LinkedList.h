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
	LinkedList(){ head = NULL; } 
	LinkedList(const LinkedList& original);
	~LinkedList();
	void add(double x);
	void remove(double x);
	void remove(int pos);
	bool isMember(double x);
	int search(double x);
	void insert(double x, int pos);
	void print();
private:
	static ListNode *copyList(ListNode *aList);
};

//********************************************************************************
// Copy Constructor                                                              *
//********************************************************************************
LinkedList::LinkedList(const LinkedList& original)
{
	head = copyList(original.head);
}

//********************************************************************************
// copyList creates a separate copy of a list inside a LinkedList object.        *
//********************************************************************************
LinkedList::ListNode *LinkedList::copyList(ListNode *aList)
{
	if (aList == NULL)
		return NULL;
	else
	{
		// Copy the tail of the list
		ListNode *tailCopy = copyList(aList->next);
		// Return list with head attached to tail
		return new ListNode(aList->value, tailCopy);
	}
}

//********************************************************************************
// Destructor                                                                    *
//********************************************************************************
LinkedList::~LinkedList()
{
	ListNode *aptr = head;
	while (aptr != NULL)
	{
		ListNode *garbage = aptr;
		aptr = aptr->next;
		delete garbage;
	}
}

//********************************************************************************
// add function adds a new node containing x to the head of the list             *
//********************************************************************************
void LinkedList::add(double x)
{
	if (head == NULL)
		head = new ListNode(x);
	else
		head = new ListNode(x, head);
}

//********************************************************************************
// remove function (overloaded) accepts a double as its argument. this function  *
// removes the node containing x from the list.                                  *
//********************************************************************************
void LinkedList::remove(double x)
{
	ListNode *now, *past;
	if (head == NULL)
		return;
	else
	{
		now = head;
		while (now != NULL && now->value != x)
		{
			past = now;
			now = now->next;
		}
		if (now)
		{
			past->next = now->next;
			delete now;
		}
	}
}

//********************************************************************************
// remove function (Overloaded) accepts an integer a argument. This function     *
// deletes the node in position pos from the list.                               *
//********************************************************************************
void LinkedList::remove(int pos)
{
	if (head == NULL)
		return;
	else if (pos == 0)
		head = head->next;
	else
	{
		int count = 0;
		ListNode *now = head, *past;
		while (now != NULL && count != pos)
		{
			past = now;
			now = now->next;
			count++;
		}
		if (now)
		{
			past->next = now->next;
			delete now;
		}
	}
}

//********************************************************************************
// isMember function tests all the node in a list for membership of x.           *
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
// search function searches all the nodes in a list for x. Returns the position  *
// of x if found, otherwise returns -1.                                          *
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
			if (aptr->value == x)
				return count;
			aptr = aptr->next;
			count++;
		}
		return -1;
	}
}

//********************************************************************************
// insert function inserts a new node at position pos. If position pos is equal  *
// to, or grater than, the length of the list x is placed at the end of the list.*
//********************************************************************************
void LinkedList::insert(double x, int pos)
{
	ListNode *now, *past;
	if (head == NULL)
		head = new ListNode(x);
	else
	{
		now = head;
		int count = 0; 
		while (now != NULL && count != pos)
		{
			past = now;
			now = now->next;
			count++;
		}
		past->next = new ListNode(x, now);
	}
}

//********************************************************************************
// print function displays the contains of all the nodes in the list.            *
//********************************************************************************
void LinkedList::print()
{
	if (head == NULL)
		return;
	else
	{
		ListNode *aptr = head;
		cout << fixed << showpoint << setprecision(1);
		while (aptr != NULL)
		{
			cout << aptr->value << "  ";
			aptr = aptr->next;
		}
		cout << endl;
	}
}