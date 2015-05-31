/*
Dynamic String Queue
Design a class that stores strings on a dynamic queue. The strings should not be fixed in
length. Demonstrate the class with a driver program.
*/
#include <iostream>
#include "DynStrQueue.h"
#include <string>
using namespace std;

int main()
{
	DynStrQueue strQueue;

	string input;

	cout << "Enter a string to the queue.\n";
	cout << "input \'exit\' when finished.\n";
	do
	{

		getline(cin, input);
		
		if (input == "exit" || input == "Exit" || input == "EXIT")
		{
			break;
		}
		else
			strQueue.enqueue(input);

	} while (input != "exit" || input != "Exit" || input != "EXIT");

	cout << "The items in strQueue were: ";
	while (!strQueue.isEmpty())
	{
		string str;
		strQueue.dequeue(str);
		cout << str << "  ";
	}
	cout << endl;
	return 0;
}