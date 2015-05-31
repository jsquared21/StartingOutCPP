/*
Test Scores #2

Modify the program of Programming Challenge 1 to allow the user to enter name-score
pairs. For each student taking a test, the user types a string representing the name of the
student, followed by an integer representing the student’s score. Modify both the sorting
and average-calculating functions so they take arrays of structures, with each structure
containing the name and score of a single student. In traversing the arrays, use pointers
rather than array indices.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Data
{
	string Name;
	double Grade;
};

// Function prototypes
void getData(Data *, int);
void selectionSort(Data *, int);
double getAverage(Data *, int);
void displayData(Data *, int, double);

int main()
{
	Data *Test;			// To dynamically allocate an array
	double Average;		// To hold the average of the scores
	int Scores;			// To hold number of scores


	// Get number of scores
	cout << "How many scores do you have to average? ";
	cin  >> Scores;

	// Dynamically allocate an array larger enough
	// to hold the user-defined number of scores
	Test = new Data[Scores];	// Allocate memory


	getData(Test, Scores);

	selectionSort(Test, Scores);

	Average = getAverage(Test, Scores);

	displayData(Test, Scores, Average);

	delete [] Test;
	Test = 0;

	return 0;
}

//*****************************************************************************
//                                 getData                                    *
// This function asks user to input test scores that are stored in an array.  *
// The parameter Scores holds the number of test score to be input.           *
//***************************************************************************** 
void getData(Data *Test, int Scores)
{
	cout << "Enter the names and scores for each student.\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << "Student #" << (i + 1) << endl;
		cout << "   Name: ";
		cin.ignore();
		getline(cin, (Test + i)->Name);
		do
		{
			cout << "   Score :"; 
			cin  >> (Test + i)->Grade;

			if ((Test + i)->Grade < 0)
			{
				cout << "Scores must be greater than 0.\n"
					 << "Re-enter ";
			}
			cout << endl;
		} while ((Test + i)->Grade < 0);
	}
}
//*****************************************************************************
//                              selectionSort                                 * 
// This function performs an ascending-order selection sort on the Test array *
// The paramere Scores holds the number of scores in the array.               *
//*****************************************************************************
void selectionSort(Data *Test, int Scores)
{
	int startscan, minIndex;
	Data *minValue;

	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;
		*minValue = Test[startscan];
		for (int i = startscan + 1; i < Scores; i++)
		{
			if ((Test + i)->Grade < minValue->Grade)
			{
				*minValue = Test[i];
				minIndex = i;
			}

		}
		Test[minIndex] = Test[startscan];
		Test[startscan] = * minValue;
	}
} 
//***************************************************************************** 
//                               getAverage                                   *
// This function calculates the average of the scores stored in an array.     *
// The parameter Scores holds the number of scores to average.                * 
//*****************************************************************************
double getAverage(Data *Test, int Scores)
{
	double Total;

	for (int i = 0; i < Scores; i++)
	{
		Total += (Test + i)->Grade;
	}

	return Total / Scores;
} 
//*****************************************************************************
//                              displayData                                   *
// This function displays the data in the array of Data structures. The       *
// The parameter Scores holds the number of Data structures and the parameter *
// Avg holds the average of the Grades in the array.                          *
//*****************************************************************************
void displayData(Data *Test, int Scores, double Avg) 
{
	cout << "    Test scores\n";
	cout << "Number of scores: " << Scores << endl;
	cout << "Scores in ascending-order:\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << (Test + i)->Name << ": " << (Test + i)->Grade << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Average of scores: " << Avg << endl; 
}