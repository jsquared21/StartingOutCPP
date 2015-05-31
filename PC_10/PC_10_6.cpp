/*
Median Function
In statistics the median of a set of values is the value that lies in the middle
when the values are arranged in sorted order. If the set has an even number of
values, then the median is taken to be the average of the two middle values.
Write a function that determines the median of a sorted array. The function should
take an array of numbers and an integer indicating the size of the array and
return the median of the values in the array. You may assume the array is already
sorted. Use pointer notation whenever possible.
*/
#include <iostream>
using namespace std;

// Function prototype
double getMedian(int *, int);

int main()
{
	const int SIZE = 5;
	int List[SIZE] = {1, 4, 6, 12, 17};
	int *pList = List;

	cout << "Median: " << getMedian(pList, SIZE) << endl;

	return 0;
}

double getMedian(int *array, int size)
{
	int mid = (size - 1) / 2;
	double med;

	if (size % 2 == 0)
	{
		med = (*(array + mid) + *(array + (mid + 1))) / 2;
	}
	else
		med = *(array + mid);


	return med;
}