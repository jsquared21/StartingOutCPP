/*
Static Queue Template
In this chapter you studied IntQueue, a class that implements a static queue of integers.
Write a template that will create a static queue of any data type. Demonstrate the class
with a driver program.
*/
#include <iostream>
#include "TempQueue.h"
using namespace std;

int main()
{
	TempQueue<int> iQueue(5);
	TempQueue<char> cQueue(5);
	const int SIZE = 15;
	char charArray[SIZE] = {'a', 'b', 'c', 'd', 'e'};

	cout << "Enqueueing 5 items in each queue...\n";
	// Enqueue 5 items.
	for (int i = 1; i <= 5; i++)
		iQueue.enqueue(i*i);

	for (int i = 0; i <= 4; i++)
	{
		cQueue.enqueue(charArray[i]);
	}

	// Deqeue and retrieve all items in the queue.
	cout << "The values in iQueue were: ";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << "  ";
	}
	cout << endl;
	cout << "The values in cQueue were: ";
	while (!cQueue.isEmpty())
	{
		char ch;
		cQueue.dequeue(ch);
		cout << ch << "  ";
	}
	cout << endl;

	cout << endl;
	return 0;
}