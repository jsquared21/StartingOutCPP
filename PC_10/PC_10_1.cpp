/*
Test Scores #1

Write a program that dynamically allocates an array large enough to hold a user-defined
number of test scores. Once all the scores are entered, the array should be passed to a
function that sorts them in ascending order. Another function should be called that
calculates the average score. The program should display the sorted list of scores and
averages with appropriate headings. Use pointer notation rather than array notation
whenever possible.

	Input Validation: Do not accept negative numbers for test scores.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(double *, int);
void selectionSort(double *, int);
double getAverage(double *, int);
void displayData(double *, int, double);

int main()
{
	double *Test,		// To dynamically allocate an array
		   Average;		// To hold the average of the scores
	int Scores;			// To hold number of scores


	// Get number of scores
	cout << "How many scores do you have to average? ";
	cin  >> Scores;

	// Dynamically allocate an array larger enough
	// to hold the user-defined number of scores
	Test = new double[Scores];	// Allocate memory

	getData(Test, Scores);

	selectionSort(Test, Scores);

	Average = getAverage(Test, Scores);

	displayData(Test, Scores, Average);

	return 0;
}

//*****************************************************************************
//                                 getData                                    *
// This function asks user to input test scores that are stored in an array.  *
// The parameter Scores holds the number of test score to be input.           *
//***************************************************************************** 
void getData(double *Test, int Scores)
{
	cout << "Enter each of the scores.\n";
	for (int i = 0; i < Scores; i++)
	{
		do
		{
			cout << "Score #" << (i + 1) << ": ";
			cin  >> *(Test + i);

			if (*(Test + i) < 0)
			{
				cout << "Scores must be greater than 0.\n"
					 << "Re-enter ";
			}

		} while (*(Test + i) < 0);
	}
}
//*****************************************************************************
//                              selectionSort                                 * 
// This function performs an ascending-order selection sort on the Test array *
// The paramere Scores holds the number of scores in the array.               *
//*****************************************************************************
void selectionSort(double *Test, int Scores)
{
	int startscan, minIndex;
	double minValue;

	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;
		minValue = *(Test + startscan);
		for (int i = startscan + 1; i < Scores; i++)
		{
			if (*(Test + i) < minValue)
			{
				minValue = *(Test + i);
				minIndex = i;
			}

		}
		*(Test + minIndex) = *(Test + startscan);
		*(Test + startscan) = minValue;
	}
} 
//***************************************************************************** 
//                               getAverage                                   *
// This function calculates the average of the scores stored in an array.     *
// The parameter Scores holds the number of scores to average.                * 
//*****************************************************************************
double getAverage(double *Test, int Scores)
{
	double Total;

	for (int i = 0; i < Scores; i++)
	{
		Total += *(Test + i);
	}

	return Total / Scores;
} 
//*****************************************************************************
//                              displayData                                   *
//*****************************************************************************
void displayData(double *Test, int Scores, double Avg) 
{
	cout << "\n    Test scores\n";
	cout << "Number of scores: " << Scores << endl;
	cout << "Scores in ascending-order:\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << "#" << (i + 1) << ": " << *(Test + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Average score: " << Avg << endl; 
}