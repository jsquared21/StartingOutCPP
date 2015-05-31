// PC_8_8 -- Client program
#include <iostream>
#include <iomanip>
#include "Stats.h"
using namespace std;

// Function prototypes
string getMonth(int);

int main()
{
	Stats rain;
	double data;
	int Mths;

	cout << "\n          Rainfall Statistics Program\n\n"
		 << "Enter the number of months of data you have to input: ";
	cin  >> Mths;

	for (int i = 0; i < Mths; i++)
	{
		do
		{
			cout << "Enter data for month #" << (i + 1) << ": ";
			cin  >> data;

			if (data < 0)
			{
				cout << "Error! Rainfall amounts must be greater than "
					 << "or equal to 0.\n";
			}

		} while (data < 0);

		if (!rain.storeValue(data))
		{
			cout << "Error! Arrray is full.\n";
			break;
		}

	}

    cout << "\n    2010 Rain Report for Neversnow County\n\n";

    cout << fixed << showpoint << setprecision(2);
	cout << "Total rainfall: " << rain.total() << " inches\n";

	cout << "Average monthly rainfall: " << rain.average() << " inches\n";

	cout << "The least rain fell in " << getMonth(rain.lowest())
		 << " with " << rain.getStats(rain.lowest()) << " inches.\n";

	cout << "The most rain fell in " << getMonth(rain.highest())
		 << " with " << rain.getStats(rain.highest()) << " inches.\n";

	return 0;
}

//-------------------------------- getMonth --------------------------------
string getMonth(int Num)
{
	string Mth;
	switch(Num + 1)
	{
		case 1 : Mth = "January";
				  break;
		case 2 : Mth = "February";
				 break;
		case 3 : Mth = "March";
				 break;
		case 4 : Mth = "April";
				 break;
		case 5 : Mth = "May";
				 break;
		case 6 : Mth = "June";
				 break;
		case 7 : Mth = "July";
				 break;
		case 8 : Mth = "August";
				 break;
		case 9 : Mth = "September";
				 break;
		case 10: Mth = "October";
				 break;
		case 11: Mth = "November";
				 break;
		case 12: Mth = "December";
				 break;
	}
	return Mth;
}