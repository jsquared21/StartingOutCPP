// Batting Average
// This program calculates a baseball player;s batting average.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double TimesAtBat,
		   Hits,
		   Average;

	// Input data
	cout << "This program can calculate batting average.\n";
	cout << "Enter the number of times the player was at bat: ";
	cin  >> TimesAtBat;
	cout << "Enter the number of hits he got: ";
	cin  >> Hits;

	// Calculte and display average
	Average = Hits / TimesAtBat;
	cout << "The player's batting average is: ";
	cout << fixed << showpoint << setprecision(4) << Average << endl;
	return 0;
}