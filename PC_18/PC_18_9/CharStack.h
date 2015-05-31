#ifndef CHARSTACK_H
#define CHARSTACK_H
#include <iostream>
using namespace std;

class CharStack
{
protected:
	struct StackNode
	{
		char value;
		StackNode *next;
		StackNode(char value1, StackNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	StackNode *top;
public:
	CharStack() { top = NULL; }
	void push(char);
	void pop(char &);
	bool isEmpty();
};
#endif