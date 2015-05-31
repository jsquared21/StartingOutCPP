/*
Queue Exceptions
Modify the static queue class used in Program 18-5 as follows.
 1. Make the isFull member private.
 2. Define a queue overflow exception and modify enqueue so that it throws this exception
 	when the queue runs out of space.
 3. Define a queue underflow exception and modify dequeue so that it throws this exception
 	when the queue is empty.
 4. Rewrite the main program so that it catches overflow exceptions when they occur.
 	The exception handler for queue overflow should print an appropriate error message
	and then terminate the program.
*/
#include <iostream>
#include "IntQueue.h"
using namespace std;

int main()
{
	IntQueue iQueue(5);

	cout << "Enqueuing 5 items...\n";

	// Enqueue 5 items.
	try
	{
		for (int k = 1; k <= 6; k++)
			iQueue.enqueue(k*k);
	}
	catch (IntQueue::OverFlow)
	{
		cout << "The queue is full.\n";
		exit(1);
	}

	// Dequeue and retrieve all items in the queue.
	cout << "The values in the quere were: ";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << "  ";
	}
	cout << endl;
	return 0;
}
