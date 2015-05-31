/*
Ocean Levels
Assuming the level of the Earth’s oceans continues rising at about 3.1 millimeters per year,
write a program that displays a table showing the total number of millimeters the oceans
will have risen each year for the next 25 years.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Year;
	double Risen = 0.0;

	cout << "Table showing the total number of millimeters the oceans\n"
		 << "will have risen each year for the next 25 years.\n\n"
		 << "    Year        Amount Risen\n"
		 << "                (millimeters)\n"
		 << "-----------------------------\n";

	for(Year = 1; Year <= 25; Year++)
	{
		Risen += 3.1;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << Year << setw(16) << Risen << endl;
	}
	return 0;
}