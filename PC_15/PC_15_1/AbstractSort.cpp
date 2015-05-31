#include "AbstractSort.h"
#include <iostream>
using namespace std;

//********************************************************************************
// compare                                                                       *
// This function compares two array elements, and keeps track of the number of   *
// comparisons performend.                                                       *
//********************************************************************************
int AbstractSort::compare(int a, int b)
{	
	//cout << "running compare" << endl;
	//cout << compares << endl;
	compares++;

	if (a < b)
		return 1;
	if (a > b)
		return -1;	
	if (a == b)
		return 0;
}

