// This program demonstrates the IntQueue class 
#include <iostream>
#include "IntQueue.h"
using namespace std;

int main()
{
	IntQueue iQueue(5);

	cout << "Enqueuing 5 items...\n";

	// Enqueue 5 items.
	for (int k = 1; k <= 5; k++)
		iQueue.enqueue(k*k);

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