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
	~LinkedList();					// Desturctor
	// Member functions
	void add(double x);
	void remove(double x);
	bool isMember(double x);
	int search(double x);
	void print();
	LinkedList(const LinkedList& original);
private:
	static ListNode* copyList(ListNode* aList);
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
// remove function removes a node containing x from the list.                    *
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
// isMember function tests if x is a member of a node in the list.               *
//********************************************************************************
bool LinkedList::isMember(double x)
{
	if (head == NULL)
		return false;

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
// search function searches nodes in list for x. Returns the position of a       *
// x on the list if found, else returns -1.                                      *
//********************************************************************************
int LinkedList::search(double x)
{
	int count = 0;
	if (head == NULL)
		return -1;
	else
	{
		ListNode * ptr = head;
		while (ptr != NULL)
		{
			if (ptr->value == x)
				return count;
			ptr = ptr->next;
			count++;
		}
		return -1;
	}
}

//********************************************************************************
// print function display the contents of the node in the list.                  *
//********************************************************************************
void LinkedList::print()
{
	ListNode *ptr = head; // start at head of list
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
// Create a separate copy of list inside a LinkedList object.                    *   
//********************************************************************************
LinkedList::ListNode* LinkedList::copyList(ListNode* aList)
{
	if (aList == NULL)
		return NULL;
	else
	{
		// Copy the tail of the list
		ListNode *tailCopy = copyList(aList->next);
		// Return copy of head attached to tail
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
//********************************************************************************
//********************************************************************************