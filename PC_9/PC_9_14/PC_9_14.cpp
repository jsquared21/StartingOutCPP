/*
Modify the program you wrote for Programming Challenge 13 so it stores the names in a
vector of strings, rather than in an array of strings. Create the vector without specifying a
size and then use the push_back member function to add an element holding each string to
the vector as it is read in from a file. Instead of assuming there are always 20 strings, read
in the strings and add them to the vector until there is no data left in the file. The data can
be found in the names.dat file.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Function prototypes
void selectionSort(vector<string> &);
void displayArray(vector<string> &);

int main()
{
	vector<string> name;
	ifstream Read;
	string Input;

	Read.open("names.dat");
	if (!Read)
		cout << "Error opening data file.\n";
	else
	{
		while (getline(Read, Input))
		{
			name.push_back(Input);
		}
	
		// Call the selectionSort function
		selectionSort(name);
		// Call the displayArray function
		displayArray(name);
	}
	Read.close();

	return 0;
}
/*********************************************************************************
 *                               selectionSort                                   *
 * This function uses the selection sort to arrange the values in a string array *
 * in ascending order                                                            *
 *********************************************************************************/
void selectionSort(vector<string> &array)
{
	int startScan, minIndex;
	string minValue;

	for (int startScan = 0; startScan < (array.size() - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < array.size(); index++)
		{
			if(array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

/*********************************************************************************
 *                                 displayArray                                  *
 *            This function displays all the values in the array.                *             
 *********************************************************************************/
void displayArray(vector<string> &name)
{
	for (int i = 0; i < name.size(); i++)
	{
		cout << name[i] << endl;
	}
}