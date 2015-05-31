#include "SubAbstract.h"
#include "AbstractSort.h"
#include <iostream>
using namespace std;

//********************************************************************************
// sort                                                                          *
// This overridden pure virtual member function sorts the array by calling the   *
// compare function to determine the relative order of pairs of numbers and      *
// a simple sorting algorithm to implement the sort function.                    *
//********************************************************************************
void SubAbstract::sort(int arr[], int size)
{
	//cout << "Running sort" << endl;

	int temp, result;
	bool swap;
	do
	{	swap = false;
		for (int count = 0; count < size; count++)
		{
			result = compare(arr[count], arr[count + 1]);
			if (result == -1)
			{
				temp = arr[count];
				arr[count] = arr[count + 1];
				arr[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}
