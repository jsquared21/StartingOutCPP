#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

#include "SimpleVector.h"

template <class T>
class SearchableVector : public SimpleVector<T>
{
public:
	// Constructor.
	SearchableVector(int s) : SimpleVector<T>(s)
		{ }
	// Copy Constructor
	SearchableVector(SearchableVector &);
	// Additional constructor.
	SearchableVector(SimpleVector<T> &obj):
		SimpleVector<T>(obj)
		{ }
	int findItem(T);
};

//********************************************
// Definition of the copy constructor.       *
//********************************************
template <class T>
SearchableVector<T>::
SearchableVector(SearchableVector &obj) :
SimpleVector<T>(obj)
{
}

//********************************************
// findItem takes a parameter of type T      *
// and searches for it within the array.     *
//********************************************
template <class T>
int SearchableVector<T>::findItem(T item)
{
	int first = 0,					// First array element
		last = this->size() - 1,	// Last array element
		middle;						// Midpoint of search
		
	while (first <= last)
	{
		middle = (first + last) / 2;			// Calculate midpoint
		if (this->operator[](middle) == item)	// If value is found at mid
			return middle;
		else if (this->operator[](middle) > item) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;		// If value is in upper half
	}
	return -1;
}
#endif