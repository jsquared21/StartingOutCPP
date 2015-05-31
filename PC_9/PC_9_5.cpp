/*
Hit the Slopes
Write a program that can be used by a ski resort to keep track of local snow conditions for
one week. It should have a seven-element array of structures, where each structure holds a
date and the number of inches of snow in the base on that date. The program should have
the user input the name of the month, the starting and ending date of the seven-day period
being measured, and then the seven base snow depths. The program should then sort the
data in ascending order by base depth and display the results. Here is a sample report.
	Snow Report December 12 – 18
		Date Base
		 13 42.3
		 12 42.5
		 14 42.8
		 15 43.1
		 18 43.1
		 16 43.4
		 17 43.8
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Data
{
	int Date; 				// Holds the date
	double Ins;				// Holds the number of inches of snow 

};

// Function prototypes
void getData(string &, int &, int &, Data[], int);
void bubbleSort(Data[], int);
void displayData(string, int, int, Data[], int);

int main()
{	
	const int Days = 7;
	Data Wk[Days];

	string Mth; 			// Holds the month
	int Start,				// Holds the starting date
		End;				// Holds the ending date

	getData(Mth, Start, End, Wk, Days);

	bubbleSort(Wk, Days);

	displayData(Mth, Start, End, Wk, Days);

	cout << endl;


	return 0;
}

/********************************************************************************
 *                                  getData                                     *
 * This funciton asks the user to input the name of the month, the starting and *
 * ending date of the seven-day period measured, and the seven base show depths.*
 ********************************************************************************/
void getData(string &Mth, int &Start, int &End, Data Wk[], int Days)
{

	cout << "Input the following information for\n"
		 << "the seven-day period being measured.\n";
	cout << "Enter the name of the month: ";
	cin  >> Mth;
	cout << "Enter the starting date: ";
	cin  >> Start;
	cout << "Enter the ending date: ";
	cin  >> End;

	for (int i = 0; i < Days; i++)
	{
		Wk[i].Date = Start;
		Start++;
	}

	double Input;
	cout << "Enter the base show depths for each day.\n";
	for (int i = 0; i < Days; i++)
	{
		cout << Wk[i].Date << " of " << Mth << ": ";
		cin  >> Input;
		Wk[i].Ins = Input;
	}
}

/********************************************************************************
 *                               displayData                                    *
 * This function displays the entire array of structures.                       *
 ********************************************************************************/
void displayData(string Mth, int Start, int End, Data Wk[], int Days)
{
	cout << "Snow Report " << Mth << " " << Start << " - " << End << endl;
	cout << "   Date   Base\n";
	cout << fixed << showpoint << setprecision(1);

	for (int i = 0; i < Days; i++)
	{
		cout << "    " << Wk[i].Date << "    " << Wk[i].Ins << endl;
	}
}// End displayData

/********************************************************************************
 *                                 bubbleSort                                   *
 * This function performs a bubble sort on Data objects, arranging them in      *
 * ascending Ins order.                                                         *
 ********************************************************************************/
void bubbleSort(Data array[], int size)
{
	Data temp;				// Holds a Data object
	bool swap;

	do
	{	swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count].Ins > array[count + 1].Ins)
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true; 
			}
		}
	} while (swap);
} // End bubbleSort