// Average Rainfall
// This program calculates and displays the
// average monthly rainfall for three months.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string Mth1,
		   Mth2,
		   Mth3;
	double RainMth1,
		   RainMth2,
		   RainMth3,  
		   Avg;

	// Input month and rainfall data.
	cout << "This program calculates the average\n";
	cout << "monthly rainfall for three months.\n";
	cout << "Enter the name of the first month: ";
	cin  >> Mth1;
	cout << "Enter the amount of rainfall\n";
	cout << "(in inches) that fell in " << Mth1 << ": ";
	cin  >> RainMth1;

	cout << "Enter the name of the second month: ";
	cin  >> Mth2;
	cout << "Enter the amount of rainfall\n";
	cout << "(in inches) that fell in " << Mth2 << ": ";
	cin  >> RainMth2;

	cout << "Enter the name of the third month: ";
	cin  >> Mth3;
	cout << "Enter the amount of rainfall\n";
	cout << "(in inches) that fell in " << Mth3 << ": ";
	cin  >> RainMth3;

	// Calculate and display average monthly rainfall.
	Avg = (RainMth1 + RainMth2 + RainMth3) / 3;
	cout << "The average monthly rainfall for ";
	cout << Mth1 << ", " << Mth2 << ", and " << Mth3 << " was ";
	cout << fixed << setprecision(2) << Avg << " inches." << endl;
	return 0; 
}