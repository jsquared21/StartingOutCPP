/*
Error Testing
The DynIntStack and DynIntQueue classes shown in this chapter are abstract data types
using a dynamic stack and dynamic queue, respectively. The classes do not currently test
for memory allocaton errors. Modify the classes so they determine if new nodes cannot be
created, and handle the error condition in an appropriate way. (You will need to catch the
predefined exception bad_alloc.)
*/
#include <iostream>
#include "DynStack.h"
#include "DynQueue.h"
using namespace std;

int main()
{
	DynStack<double> DStack;
	DynStack<char> ChStack;
	DynQueue<int> iQueue;
	DynQueue<string> strQueue;
	double values[] = {5.2, 10.4, 15.6, 20.3, 25.9};
	char Chars[] = {'a', 'b', 'c', 'd', 'e'};
	string Str[] = {"one", "two", "three", "four", "five"};
	double value;
	char Ch;


	// Store values
	cout << "Pushing doubles...\n";
	for (int i = 0; i < 5; i++)
	{
		cout << values[i] << "  ";
		DStack.push(values[i]);
	}
	cout << endl;

	cout << "Pushing characters...\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Chars[i] << "  ";
		ChStack.push(Chars[i]);
	}
	cout << endl;

	cout << "Poping doubles...\n";
	while (!DStack.isEmpty())
	{
		DStack.pop(value);
		cout << value << "  ";
	}
	cout << endl;

	cout << "Poping characters...\n";
	while (!ChStack.isEmpty())
	{
		ChStack.pop(Ch);
		cout << Ch << "  ";
	}
	cout << endl;

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