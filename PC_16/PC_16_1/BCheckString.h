#ifndef BCHECKSTRING_H
#define BCHECKSTRING_H

#include <iostream>
using namespace std;

// Derived from the STL string class.
class BCheckString:public string
{
	string str;		// Holds the string
public:
	// Exception class.
	class BoundsException
	{ };	// Empty class declaration
	// Member functions.
// A) Constructor that recieves a string object passed 
//    by value and passes it on to the base class constructor.
	BCheckString(string str): string(str) 	
	{ this->str = str; }
// B) This function overloads the operator[] and throws a BoundsException
//    object if k is negative or is greater thank or equal to the length of the
//	  string. If k is within the bonds of the string, the character at position
//	  k in the string is returned. 
	char operator[](int k)
	{
		k--;
		if (k < 0 || k >= str.length())
			throw BoundsException();

		return str[k];
	}
};
#endif
