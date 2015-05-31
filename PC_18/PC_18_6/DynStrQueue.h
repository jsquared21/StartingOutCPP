#ifndef DYNSTRQUEUE_H
#define DYNSTRQUEUE_H
#include <iostream>
#include <string>
using namespace std;

class DynStrQueue: public string
{
private:
	class QueueNode
	{
		friend class DynStrQueue;
		string value;
		QueueNode *next;
		QueueNode(string value1, QueueNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	QueueNode *front;
	QueueNode *rear;
public:
	// Constructor and Destructor
	DynStrQueue();
	~DynStrQueue();
	// Member functions
	void enqueue(string);
	void dequeue(string &);
	bool isEmpty();
	void clear();
};

//**************************************************************************
// Constructor.                                                            *
//**************************************************************************
DynStrQueue::DynStrQueue()
{
	front = NULL;
	rear = NULL;
}

//**************************************************************************
// Destructor.                                                             *
//**************************************************************************
DynStrQueue::~DynStrQueue()
{
	clear();
}

//**************************************************************************
// Function enqueue inserts the string str at the rear of the queue.       *
//**************************************************************************
void DynStrQueue::enqueue(string str)
{
	if (isEmpty())
	{
		try
		{
			front = new QueueNode(str);
		}
		catch (bad_alloc)
		{
			cout << "Memory Allocation is full.\n";
			exit(1);
		}
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(str);
		rear = rear->next;
	}
}

//**************************************************************************
// Function dequeue removes the value at the front of the queue, and       *
// copies it to str                                                        *
//**************************************************************************
void DynStrQueue::dequeue(string &str)
{
	if (isEmpty())
	{
		cout << "The queue is empty.\n";
		exit(1);
	}
	else
	{
		QueueNode *temp;
		str = front->value;
		temp = front;
		front = front->next;
		delete temp;
	}
}

//**************************************************************************
// Function isEmpty returns true if queue is empty, and false otherwise.   *  
//**************************************************************************
bool DynStrQueue::isEmpty()
{
	if (front == NULL)
		return true;
	else
		return false;
}
//**************************************************************************
// Function clear dequeue all the elements in the queue.                   *
//**************************************************************************
void DynStrQueue::clear()
{
	string aStr;
	while (!isEmpty())
		dequeue(aStr);
}

#endif