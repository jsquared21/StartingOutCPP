/*
Most Frequent Character
Write a function that accepts either a pointer to a C-string, or a string object, as its argument.
The function should return the character that appears most frequently in the string.
Demonstrate the function in a complete program.
*/
#include <iostream>
#include <cstring>
using namespace std;

const int LENGTH = 101;



// Function prototype
char mostFreq(char *);
void selectSort(char *);

int main()
{
	char List[LENGTH], result;

	// Ask user to enter a string
	cout << "Enter a string no longer than "
		 << LENGTH-1 << " characters.\n";
	cin.getline(List, LENGTH);

	selectSort(List);

	cout << "The character that appears the most frequently is: "
		 << mostFreq(List) << endl;

	return 0;
}

//********************************************************************************
// selectSort                                                                    *
// This function performs an ascending-odder selection sort on the array of      *
// characters.                                                                   *
//********************************************************************************
void selectSort(char * array)
{
	int scan, minIndex;
	char minValue;

	for (scan = 0; scan < (strlen(array) - 1); scan++)
	{
		minIndex = scan;
		minValue = array[scan];
		for (int index = scan + 1; index < strlen(array); index++)
		{
			if (toupper(array[index]) < toupper(minValue))
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[scan];
		array[scan] = minValue;
	}
}

//********************************************************************************
// mostFreq                                                                      *
// This function accepts a pointer to a C-string as its argument. The function   *
// returns the character that appears most frequently in the string.             *
//********************************************************************************
char mostFreq(char *Char)
{
	char Value = Char[0], Freq[1];
	int count = 0, Most = 0; 

	for (int i = 0; i < strlen(Char); i++)
	{
		count++;
		if (toupper(Char[i]) != toupper(Char[i + 1]))
		{
			if (count > Most)
			{
				Most = count;
				Freq[0] = Char[i];
			}
			Value = Char[i + 1];
			count = 0;
		}
	}
	return Freq[0];
}