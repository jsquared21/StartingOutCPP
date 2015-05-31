/*
Rainfall Statistics
Write a modular program that analyzes a year’s worth of rainfall data. In addition to main,
the program should have a getData function that accepts the total rainfall for each of 12
months from the user, and stores it in a double array. It should also have four valuereturning
functions that compute and return to main the totalRainfall, averageRainfall,
driestMonth, and wettestMonth. These last two functions return the number of the
month with the lowest and highest rainfall amounts, not the amount of rain that fell those
months. Notice that this month number can be used to obtain the amount of rain that fell
those months. This information should be used either by main or by a displayReport
function called by main to print a summary rainfall report similar to the following:

		2010 Rain Report for Neversnows County

	Total rainfall: 23.19 inches
	Average monthly rainfall: 1.93 inches
	The least rain fell in January with 0.24 inches.
	The most rain fell in April with 4.29 inches.
	
	Input validation: Do not accept rainfall amounts less than 0.
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(double[], int);
double totalRainfall(double [], int);
double averageRainfall(double [], int);
int driestMonth(double [], int);
int wettestMonth(double [], int);
void displayReport(double, double, int, int, double[], int);
string getMonth(int);

// Global variables


int main()
{
	const int mths = 12;
	double rainfall[mths];
	double Total, Average, Least, Most;

	// Call function getData
	getData(rainfall, mths);

	// Call function totalRainfall
	Total = totalRainfall(rainfall, mths);
	Average = averageRainfall(rainfall, mths);
	Least = driestMonth(rainfall, mths);
	Most = wettestMonth(rainfall, mths);
	displayReport(Total, Average, Least, Most, rainfall, mths);

	return 0;
}

/*******************************************************************
 *                          getData                                *
 * This function accepts an array start address and its size as    *
 * its arguments. Asks the user to input the total rainfall for    *
 * each of 12 months and stores the data in the array passed to it *
 *******************************************************************/
void getData(double rainfall[], int mths)
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
		
		rainfall[i] = rain;
	}	 
}
/*******************************************************************
 *                       totalRainfall                             *
 * This function accepts an array as its arguments. Calculates and *
 * returns the total rainfall for the 12 months.                   *
 *******************************************************************/
double totalRainfall(double rainfall[], int mths)
{
	double tot = 0;  // Accumulate total rainfall

	for (int i = 0; i < mths; i++)
	{
		tot += rainfall[i];
	}

	return tot;
}

/*******************************************************************
 *                       averageRainfall                           *
 * This function accepts an array as its arguments. Calculates and *
 * returns the average rainfall for the 12 months.                 *
 *******************************************************************/
double averageRainfall(double rainfall[], int mths)
{
	return totalRainfall(rainfall, mths) / mths;
}
/*******************************************************************
 *                         driestMonth                             *
 * This function accepts an array address and size as its          *
 * arguments. Calculates and retruns the month with the least      *
 * rainfall.                                                       *
 *******************************************************************/
int driestMonth(double rainfall[], int mths)
{	
	double Driest = rainfall[0];
	int R;
	for (int i = 0; i < mths; i++)
	{
		if(rainfall[i] < Driest)
		{
			Driest = rainfall[i];
			R = i;
		}
	}
	return R;
}

/*******************************************************************
 *                          wettestMonth                           *
 * This function accepts an array address and size as its          *
 * arguments. Calculates and returns the month with the most       *
 * rainfall.                                                       *
 *******************************************************************/
int wettestMonth(double rainfall[], int mths)
{
	double Wettest = rainfall[0];
	int R;
	for (int i = 0; i < mths; i++)
	{
		if(rainfall[i] > Wettest)
		{
			Wettest = rainfall[i];
			R = i;
		}
	}
	return R;
}
/*******************************************************************
 *                          displayReport                          *
 * This six parameter function accepts two double, two integer and *
 * a arrays start address and size arguments. Displays a summary   *
 * rainfall report.                                                * 
 *******************************************************************/
void displayReport(double T, double A, int L, int M, double R[], int S)
{
	cout << "\n\n    2010 Rain Report for Neversnows County\n\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Total rainfall: " << T << " inches\n";
	cout << "Average monthly rainfall: " << A << " inches\n";
	cout << "The least rain fell in " << getMonth(L) << " with "
		 << R[L] << " inches.\n";
	cout << "The most rain fell in " << getMonth(M) << " with "
		 << R[M] << " inches.\n";
}

/*******************************************************************
 *                             getMonth                            *
 * This function accepts and integer as it's argument and returns  *
 * a string with the corresponding month.                          * 
 *******************************************************************/
string getMonth(int Mth)
{
	string M;
	switch (Mth + 1)
	{
		case 1 : M = "January";
				 break;
		case 2 : M = "February";
				 break;
		case 3 : M = "March";
				 break;
		case 4 : M = "April";
				 break;
		case 5 : M = "May";
				 break;
		case 6 : M = "June";
				 break;
		case 7 : M = "July";
				 break;
		case 8 : M = "August";
				 break;
		case 9 : M = "September";
				 break;
		case 10: M = "October";
				 break;
		case 11: M = "November";
				 break;
		case 12: M = "December";
				 break;
	}
	return M;
}