/*
Dynamic Queue Template
In this chapter you studied DynIntQueue, a class that implements a dynamic queue of integers.
Write a template that will create a dynamic queue of any data type. Demonstrate the
class with a driver program.
*/
#include <iostream>
#include "DynQueue.h"
using namespace std;

int main()
{
	DynQueue<int> iQueue;
	DynQueue<string> strQueue;

	string Str[] = {"one", "two", "three", "four", "five"};

	cout << "Enqueuing 5 items in each queue...\n";

	// Enqueue 5 items.
	for (int i = 1; i < 5; i++)
		iQueue.enqueue(i*i);
	for (int i = 0; i < 5; i++)
		strQueue.enqueue(Str[i]);

	// Dequeue and retrieve all items in the queue.
	cout << "The values in iQueue were:\n";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << "  ";
	}
	cout << "\nThe values in strQueue were:\n";
	while (!strQueue.isEmpty())
	{
		string sValue;
		strQueue.dequeue(sValue);
		cout << sValue << "  ";
	}
	cout << endl;
	return 0;
}