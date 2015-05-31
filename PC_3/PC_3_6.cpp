// Test Average
// This program calculates and displays the average test score.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double Score1,
		   Score2,
		   Score3,
		   Score4,
		   Score5,
		   Average;

	// Input Scores.
	cout << "Enter five test scores (separated by spaces only)\n";
	cout << "and this program will calculate the average test score.\n";
	cin  >> Score1 >> Score2 >> Score3 >> Score4 >> Score5;

	// Calculate and display the average test score.
	Average = (Score1 + Score2 + Score3 + Score4 + Score5) / 5;
	cout << "The average test score is ";
	cout << fixed << showpoint << setprecision(1) << Average << endl;
	return 0;
}