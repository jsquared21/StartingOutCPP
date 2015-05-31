/*
Rainfall Statistics Modification
Modify the Rainfall Statistics program you wrote for Programming Challenge 2 of
Chapter 7. The program should display a list of months, sorted in order of rainfall,
from highest to lowest.
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Data
{
	string Name[12];
	double Amt;



};

// Function prototypes
void getData(Data[], int);
void displayReport(Data[], int);
void selectionSort(Data[], int);

int main()
{
	
	const int mths = 12;
	Data rainfall[mths]; //= {"January", 0, "February", 0, "March", 0,
						//	"April", 0,   "May", 0,      "June", 0,
						//	"July", 0,    "August", 0,   "September", 0,
						//	"October", 0, "November", 0, "December", 0};

	// Call function getData
	getData(rainfall, mths);

	// Call function selectionsort
	selectionSort(rainfall, mths);
	
	displayReport(rainfall, mths);

	return 0;
}

/*******************************************************************
 *                          getData                                *
 * This function accepts an array start address and its size as    *
 * its arguments. Asks the user to input the total rainfall for    *
 * each of 12 months and stores the data in the array passed to it *
 *******************************************************************/
void getData(Data rainfall[], int mths)
{
	double rain;

	cout << "Enter the total rainfall for each of 12 months.\n";
	for (int i = 0; i < mths; i++)
	{
		do
		{
			cout << "Month #" <<  (i + 1) << ": ";
			cin >> rain;

			if (rain < 0)
				cout << "Error! Rainfall amounts must be greater than 0.\n";

		} while(rain < 0);
		
		rainfall[i].Amt = rain;
	}	 
}

/*******************************************************************
 *                          selectionSort                          *
 * This function uses the selection sort to arrange the values in  *
 * the array in decending order.                                   *
 *******************************************************************/
void selectionSort(Data array[], int size)
{
	Data temp;
	bool swap;

	do
	{	swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count].Amt < array[count + 1].Amt)
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
} // End bubbleSort

/*******************************************************************
 *                          displayReport                          *
 * This six parameter function accepts two double, two integer and *
 * a arrays start address and size arguments. Displays a summary   *
 * rainfall report.                                                * 
 *******************************************************************/
void displayReport(Data R[], int S)
{
	cout << "\n\n   2010 Rain Report for Neversnows County\n";
	cout << "        sorted in order of rainfall,\n"
		 << "           from highest to lowest.\n";
	cout << "        Month             Rainfall Amounts\n";
	cout << fixed << showpoint << setprecision(2);
	for (int i = 0; i < S; i++)
	{
		cout << "        " << left << setw(9) << R[i].Name << "              "
			 << R[i].Amt << endl;
	}

}

