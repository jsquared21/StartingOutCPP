#include "CharStack.h"
#include <iostream>
using namespace std;

//********************************************************************************
// Function push adds value to the top of the stack.                             *
//********************************************************************************
void CharStack::push(char Ch)
{
	top = new StackNode(Ch, top);
}

//********************************************************************************
// Function pop removes the value at the top of the stack, and it to Ch.         *
//********************************************************************************
void CharStack::pop(char &Ch)
{
	if (isEmpty())
	{
		cout << "Error: Stack is empty.\n";
		exit(1);
	}
	else
	{
		StackNode *temp;
		Ch = top->value;
		temp = top;
		top = top->next;
		delete temp;
	}
}

//********************************************************************************
// Function isEmpty returns true is stack is empty, and false otherwise.         *
//********************************************************************************
bool CharStack::isEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}