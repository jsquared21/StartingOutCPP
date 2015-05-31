#ifndef DYNSTACK_H
#define DYNSTACK_H
#include <iostream>
using namespace std;
template <class T>
class DynStack
{
private:
	class StackNode
	{
		friend class DynStack;
		T value;
		StackNode *next;
		// Constructor
		StackNode(T value1, StackNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	StackNode *top;
public:
	// Constructor and Destructor
	DynStack() { top = NULL; }
	void push(T value);
	void pop(T &value);
	bool isEmpty();
};

//*********************************************
// adds a value to the top of the stach.      *
//*********************************************
template <class T>
void DynStack<T>::push(T num)
{
	top = new StackNode(num, top);
}

//*********************************************************
// removes the value at the top of the stack. *
//*********************************************************
template <class T>
void DynStack<T>::pop(T &num)
{
	if (isEmpty())
	{
		cout << "Error: Stack is empty.\n";
		exit(1);
	}
	else
	{
		StackNode *temp;
		num = top->value;
		temp = top;
		top = top->next;
		delete temp;
	}
}

//*********************************************************
// Function isEmpty returns true if stack is empty, and   *
// false otherwise                                        *
//*********************************************************
template <class T>
bool DynStack<T>::isEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

#endif
