#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Function Prototypes
void isLeapYr(int *, int, int);

int main()
{
	time_t epSes;					// Seconds since epoch
	tm *pCalTime;					// Pointer to calendar time
	epSes = time(NULL);				// Seconds since epoch
	pCalTime = localtime(&epSes);	// Convert to local time

	const int Mths = 12;			// Number of months
	// Array of month names.
	string Month[] = {"January", "February", "March", "April",
						   "May", "June", "July", "August", "September", 
						   "October", "November", "December"
					 };
	// Array of number of days in each month.
	int Days[Mths] = {30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
					 };
	string *pMth = Month;			// Pointer to string
	int *pDays = Days,				// Pointer to integer
		M,							// Holds user input for month
		Yr;							// Holds user input for year

	// Ask the user to enter two integers representing  a month and year.
	cout << "Enter the month and year: ";
	cin  >> M >> Yr;

	// User indicates the end of input by entering 0 0 for month and year.
	while (M > 0 && Yr > 0)
	{
		M--;

		// Call isLeapYr function.
		isLeapYr(pDays, M, Yr);	
				
		// Display the number of day in specified month.
		cout << *(pDays + M) << " days.\n";
		
		cout << "Enter the month and year: ";
		cin  >> M >> Yr;
	} 


	M = pCalTime->tm_mon;
	Yr = 1900 + pCalTime -> tm_year;
	isLeapYr(pDays, M, Yr);

	cout << "The current month, " << *(pMth + M) << " "
		 << Yr << ", has " << *(pDays + M) << " days." << endl;

	return 0;
}

//*****************************************************************************
//                                 isLeapYr                                   *
// This function calculates and stores the number of days in february for     *
// leap years.                                                                *
//*****************************************************************************
void isLeapYr(int *pDays, int M, int Yr)
{
	if (M == 1)
	{
		if ((Yr % 100 == 0 && Yr % 400 == 0) || (Yr % 100 != 0 && Yr % 4 == 0))
		{
			*(pDays + M) = 29;
		}
		else
			*(pDays + M) = 28;

	}
}