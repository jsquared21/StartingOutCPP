#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

#include <iostream>
#include "SimpleVector.h"
#include <algorithm>

template<class T>
class SortableVector : public SimpleVector<T>
{
public:
	// Constructor.
	SortableVector(int s) : SimpleVector<T>(s)
	{}
	SortableVector(SimpleVector<T> &obj):
		SimpleVector<T>(obj)
		{}
	void sortAscending();
};

template <class T>
void SortableVector<T>::sortAscending()
{
	bool Swap;
	do 
	{ Swap = false;
		for (int i = 0; i < (this->size() - 1); i++)
		{
			if (this->operator[](i) > this->operator[](i + 1))
			{
				swap(this->operator[](i), this->operator[](i + 1));
				Swap = true;
			}
		}
	} while (Swap);
}
#endif