#ifndef ABSTRACTSORT_H
#define ABSTRACTSORT_H
#include <iostream>
using namespace std;

// Abstract class with a pure virtual member function.
class AbstractSort
{
protected:
	int compares;	// Number of comparisons
public:
	// Constructor
	AbstractSort()
	{ 
		cout << "Instance of AbstractSort created" << endl;
		compares = 0; 
	}
	// pure virtual member function.
	virtual void sort(int arr[ ], int size) = 0;
	int compare(int a, int b);
	// getCompares can be called after the sorting is done
	// to rettieve the number of comparisons performed.
	int getCompares() { return compares; }
};

#endif