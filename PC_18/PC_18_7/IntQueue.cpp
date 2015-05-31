#include <iostream>
#include "IntQueue.h"
using namespace std;

//************************************
// Consturctor.                      *
//************************************
IntQueue::IntQueue(int s)
{
	queueArray = new int[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}

//************************************
// Destructor.                       *
//************************************
IntQueue::~IntQueue()
{
	delete [] queueArray;
}

//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************
void IntQueue::enqueue(int num)
{
	if (isFull())
	{
		throw IntQueue::OverFlow();
	}
	else
	{
		// Calculate the new rear position.
		rear = (rear + 1) % queueSize;
		// Insert new item.
		queueArray[rear] = num;
		// Update item count.
		numItems++;
	}
}

//**********************************************
// Funstion dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************
void IntQueue::dequeue(int &num)
{
	if (isEmpty())
	{
		throw UnderFlow();
	}
	else
	{
		// Move front.
		front = (front + 1) % queueSize;
		// Retrieve the front item.
		num = queueArray[front];
		// Update item count.
		numItems--;
	}
}

//**********************************************
// Function isEmpty returns true if the queue  *
// is empty, and false otherwise.              * 
//**********************************************
bool IntQueue::isEmpty()
{
	if (numItems > 0)
		return false;
	else
		return true;
}

//**********************************************
// Function isFull returns true if the queue   *
// is full, and false otherwise.               *
//**********************************************
bool IntQueue::isFull()
{
	if (numItems < queueSize)
		return false;
	else
		return true;
}

//***********************************************
// Function clear resets the front and the rear *
// indices, and sets numItems to 0.             *
//***********************************************
void IntQueue::clear()
{
	front = -1;
	rear = -1;
	numItems = 0;
}
