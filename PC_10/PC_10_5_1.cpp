/*
Pie a la Mode
In statistics the mode of a set of values is the value that occurs most often. Write a program
that determines how many pieces of pie most people eat in a year. Set up an integer array
that can hold responses from 30 people. For each person, enter the number of pieces they
say they eat in a year. Then write a function that finds the mode of these 30 values. This
will be the number of pie slices eaten by the most people. The function that finds and
returns the mode should accept two arguments, an array of integers, and a value indicating
how many elements are in the array.
*/
#include <iostream>
using namespace std;

// Function prototypes
void getData(int [], int);
void selecitonSort(int [], int);
int getmode(int [], int);

int main()
{
	const int ppl = 30;
	int slices[ppl];	

	getData(slices, ppl);
	selecitonSort(slices, ppl);	

	for (int i = 0; i < ppl; i++)
	{
		cout << slices[i] << " ";
	}

	cout << "\nNumber of pie slices eaten by the most people: "
		 << getmode(slices, ppl) << endl;

	return 0;
}
//*****************************************************************************
//                                   getData                                  *
//*****************************************************************************
void getData(int array[], int size)
{
	cout << "Enter the number of pie slices eaten by each person in a year.\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Person " << (i + 1) << ": ";
		cin  >> array[i];
	}
}
//*****************************************************************************
//                                 getmode                                    *
//*****************************************************************************
int getmode(int array[], int size)
{
	int count, hold, mode;
	count = hold = 0;
	
	for (int index = 0; index < size; index++)
	{
		count++;	 
		if (array[index] < array[index + 1])
		{
			if(count > hold)
			{
				mode = array[index];
				hold = count;
			}
			count = 0;
		}
	}
	return mode;
}
//*****************************************************************************
//                                selectionSort                               *
//*****************************************************************************
void selecitonSort(int array[], int size)
{
	int minIndex, minValue;

	for (int scan = 0; scan < (size - 1); scan++)
	{
		minIndex = scan;
		minValue = array[scan];
		for (int i = scan + 1; i < size; i++)
		{
			if (array[i] < minValue)
			{
				minValue = array[i];
				minIndex = i;
			}
		}
		array[minIndex] = array[scan];
		array[scan] = minValue; 
	} 
}