#ifndef TEMPQUEUE_H
#define TEMPQUEUE_H

#include <iostream>
using namespace std;

template <class T>
class TempQueue
{
private:
	T *queueArray;
	int queueSize;
	int front;
	int rear;
	int numItems;
public:
	TempQueue(T);
	~TempQueue();
	void enqueue(T);
	void dequeue(T &);
	bool isEmpty();
	bool isFull();
	void clear();
};

//*************************************************************
// Constructor.                                               *
//*************************************************************
template<class T>
TempQueue<T>::TempQueue(T s)
{
	queueArray = new T[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}

//*************************************************************
// Destructor.                                                *
//*************************************************************
template <class T>
TempQueue<T>::~TempQueue()
{
	delete [] queueArray;
}


//*************************************************************
// Function enqueue inserts the value in num at the rear of   *
// the queue.                                                 *
//*************************************************************
template<class T>
void TempQueue<T>::enqueue(T value)
{
	if (isFull())
	{
		cout << "The queue is full.\n";
		exit(1);
	}
	else
	{
		// Calculate the new rear position.
		rear = (rear + 1) % queueSize;
		// Insert new item
		queueArray[rear] = value;
		// Update item count.
		numItems++;
	}
}

//*************************************************************
// Function dequeue removes the value at the front of the     *
// queue, ad copies it into num.                              *
//*************************************************************
template<class T>
void TempQueue<T>::dequeue(T &value)
{
	if (isEmpty())
	{
		cout << "The queue is empty.\n";
		exit(1);
	}
	else
	{
		// Move front.
		front = (front + 1) % queueSize;
		// Retrieve the front item.
		value = queueArray[front];
		// Update item count.
		numItems--;
	}
}

//*************************************************************
// Function isEmpty return true if queue is empty, and false  *
// otherwise.                                                 *
//*************************************************************
template <class T>
bool TempQueue<T>::isEmpty()
{
	if (numItems > 0)
		return false;
	else
		return true;
}

//*************************************************************
// Function isFull returns true is queue is full, and false   *
// otherwise.                                                 *
//*************************************************************
template <class T>
bool TempQueue<T>::isFull()
{
	if (numItems < queueSize)
		return false;
	else
		return true;
}
//*************************************************************
// Function clear resets the front and rear indices, and sets *
// numItems to 0.                                             *
//*************************************************************
template <class T>
void TempQueue<T>::clear()
{
	front = -1;
	rear = -1;
	numItems = 0;
}
#endif