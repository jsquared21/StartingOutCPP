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
	// Member functions
	void add(double x);
	void remove(double x);
	void remove(int pos);
	void insert(double x, int pos);
	bool isMember(double x);
	int search(double x);
	void sort();
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
// copyList function creates a copy of a list inside of a LinkedList object.     *
//********************************************************************************
LinkedList::ListNode *LinkedList::copyList(ListNode *aList)
{
	if (aList == NULL)
		return NULL;
	else
	{
		ListNode *tailCopy = copyList(aList->next);
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
// remove function (Overloaded) removes the node containing x from a list.       *
//********************************************************************************
void LinkedList::remove(double x)
{
	if (head == NULL)
		return;
	else
	{
		ListNode *present, *past;
		present = head;
		while (present != NULL && present->value != x)
		{
			past = present;
			present = present->next;
		} 
		if (present)
		{
			past->next = present->next;
			delete present;
		}
	}
}

//********************************************************************************
// remove function (Overloaded) removes the node at position pos from the list.  * 
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
		ListNode *present, *past;
		present = head;
		while (present != NULL && count != pos)
		{
			past = present;
			present = present->next;
		}
		if (present)
		{
			past->next = present->next; 
			delete present;
		}
	}
}

//********************************************************************************
// insert function inserts a node containing x at position pos.                  *
//********************************************************************************
void LinkedList::insert(double x, int pos)
{
	if (head == NULL)
		head = new ListNode(x);
	else
	{
		int count = 0;
		ListNode *past, *present = head;
		while (present != NULL && count != pos)
		{
			past = present;
			present = present->next;
			count++;
		}
		past->next = new ListNode(x, present);
	}
}

//********************************************************************************
// isMember function tests all the nodes in a list for membership of x.          *
//********************************************************************************
bool LinkedList::isMember(double x)
{
	if (head == NULL)
		return false;
	else
	{
		ListNode *aptr;
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
// search function searches a list for x. Returns the position of x in the list  *
// if found, otherwise returns -1.                                               *
//********************************************************************************
int LinkedList::search(double x)
{
	if (head == NULL)
		return -1;
	else
	{
		int pos = 0;
		ListNode *aptr = head;
		while (aptr != NULL)
		{
			if (aptr->value == x)
				return pos;
			aptr = aptr->next;
			pos++;
		}
		return -1;
	}
}

//********************************************************************************
// sort
//********************************************************************************
void LinkedList::sort()
{
	if (head == NULL)
		return;
	else
	{
		ListNode *minElem, *present, *scan, *past;
		bool swap;
		scan = head;
		past = scan->next;
		do
		{	swap = false;
			for (present = past->next; present != NULL; present = present->next)
			{
				if (past->value > present->value)
				{			
					
					past->next = past->next->next;
					scan->next = present;
					present->next = past;
					swap = true;					
				}
				scan = past;
				past = present;
			}
		} while (swap);		
	}
}

//********************************************************************************
// print function display the constents of all the nodes in the list.            *
//********************************************************************************
void LinkedList::print()
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