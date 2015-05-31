#ifndef DYNQUEUE_H
#define DYNQUEUE_H

#include <iostream>
using namespace std;

template<class T>
class DynQueue
{
private:
	class QueueNode
	{
		friend class DynQueue;
		T value;
		QueueNode *next;
		QueueNode(T value1, QueueNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	QueueNode *front;
	QueueNode *rear;
public:
	// Constructor and Destructor.
	DynQueue();
	~DynQueue();

	// Member functions
	void enqueue(T);
	void dequeue(T &);
	bool isEmpty();
	void clear();
};

//***************************************************
// Constructor.                                     *
//***************************************************
template <class T>
DynQueue<T>::DynQueue()
{
	front = NULL;
	rear = NULL;
}
//***************************************************
// Destructor                                       *
//***************************************************
template <class T>
DynQueue<T>::~DynQueue()
{
	clear();
}

//***************************************************
// Function enqueue inserts the value in num at the *
// rear of the queue.                               *
//***************************************************
template <class T>
void DynQueue<T>::enqueue(T num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(num);
		rear = rear->next;
	}
}

//***************************************************
// Function dequeue removes the value at the front  *
// of the queue, and copies it into num.            * 
//***************************************************
template <class T>
void DynQueue<T>::dequeue(T &num)
{
	if(isEmpty())
	{
		cout << "The queue is empty.\n";
		exit(1);
	}
	else
	{
		QueueNode *temp;
		num = front->value;
		temp = front;
		front = front->next;
		delete temp;
	}
}

//***************************************************
// Function isEmpty returns true if the queue is    *
// empty, and false otherwise.                      *
//***************************************************
template <class T>
bool DynQueue<T>::isEmpty()
{
	if (front == NULL)
		return true;
	else
		return false;
}

//***************************************************
// Function clear dequeues all the elements in the  *
// queue.                                           *
//***************************************************
template <class T>
void DynQueue<T>::clear()
{
	T value;

	while (!isEmpty())
		dequeue(value);
}
#endif

