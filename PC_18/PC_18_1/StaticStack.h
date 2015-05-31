template <class T>
class StaticStack
{
private:
	T *stackArray;
	int capacity;
	int top;
public:
	StaticStack(int capacity);	// Consturctor
	~StaticStack(); // Destructor
	// Member functions
	void push(T value);
	void pop(T &value);
	bool isEmpty();
	// Exemption classes
	class Overflow {};
	class Underflow {};
};

//***********************************************
// Constructor                                  *
//***********************************************
template <class T>
StaticStack<T>::StaticStack(int capacity)
{
	this->capacity = capacity;
	stackArray = new T [capacity];
	top = 0;
}

//***********************************************
// Destructor                                   *
//***********************************************
template <class T>
StaticStack<T>::~StaticStack()
{ 
	delete[] stackArray;
}
//***********************************************
// added a value to the top of the stack.       *
//***********************************************
template <class T>
void StaticStack<T>::push(T value)
{
	if (top == capacity) throw StaticStack::Overflow();
	stackArray[top] = value;
	top++;
}

//**************************************************
// returns true if stack is empty, false otherwise *
//**************************************************
template <class T>
bool StaticStack<T>::isEmpty()
{
	if (top == 0)
		return true;
	else
		return false;
}

//************************************************************
// removes the value at the top of the stack and returns it. *
//************************************************************
template <class T>
void StaticStack<T>::pop(T &value)
{
	if (isEmpty()) throw StaticStack::Underflow();
	top--;
	value = stackArray[top];
}