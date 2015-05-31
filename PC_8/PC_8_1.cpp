/*
Perfect Scores
Write a modular program that accepts at least 10 integer test scores from the user and
stores them in an array. Then main should display how many perfect scores were entered
(i.e., scores of 100), using a value-returning countPerfect function to help it.

	Input validation: Do not accept scores less than 0 or greater than 100.
*/
#include <iostream>
using namespace std;

// Function prototype
int countPerfect(int[], int);

int main()
{
	const int scores = 10;
	int test[scores];

	int Perfects;

	// Ask user to enter scores
	for (int i = 0; i < scores; i++)
	{
		int input;
		do
		{
			cout << "Enter score #" << (i + 1) << ": ";
			cin  >> input;

			if(input < 0 || input > 100)
				cout << "Scores must be greater than 0 and less than 100\n";

		} while (input < 0 || input > 100);
		test[i] = input;
	}

	Perfects = countPerfect(test, scores);

	cout << "Perfect scores: " << Perfects << endl;
}

/***********************************************************
 *                   countPerfect                          *
 * This function accepts an array and counts the number of *
 * values that are 100 and returns the total.              *
 ***********************************************************/
int countPerfect(int test[], int scores)
{
	int p = 0;
	for (int i = 0; i < scores; i++)
	{
		if (test[i] == 100)
			p++;
	}
	return p;
}
