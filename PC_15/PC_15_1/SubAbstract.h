#ifndef SUBABSTRACT_H
#define SUBABSTRACT_H
#include <iostream>
#include "AbstractSort.h"
using namespace std;

class SubAbstract:public AbstractSort
{
public:
	// Constructor
	SubAbstract()
	{ cout << "Instance of SubAbstract created" << endl; }
	// Overridden virtual function
	virtual void sort(int arr[], int size);
};
#endif