// Date.cpp -- Date class function implemantation file
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

//Function prototypes
string monthHelper(int);
int yearHelper(int);

/**************************************************************************
 *                         Date constructor                               *
 **************************************************************************/
Date::Date(int m, int d, int y)
{
	validater(m, d, y);
}

/**************************************************************************
 *                             setDate                                    *
 **************************************************************************/
void Date::setDate(int m, int d, int y)
{
	validater(m, d, y);
}

/**************************************************************************
 *                            IntDate                                     *
 * This function accepts a Date object and prints the date in the format  *
 * 3/15/2010                                                              *
 **************************************************************************/
void Date::IntDate(Date D)
{
	cout << D.month << "/" << D.day << "/" << yearHelper(D.year) << endl;
}

/**************************************************************************
 *                           MthDayYr                                     *
 * This function accepts a Date object and prints the date in the format  *
 * March 15, 2010                                                         *
 **************************************************************************/
void Date::MthDayYr(Date D)
{
	cout << monthHelper(D.month) << " " << D.day << ", " << D.year << endl;
}

/**************************************************************************
 *                           DayMthYr                                     *
 * This function accepts a Date object and prints the date in the format  *
 * format 15 March 2010                                                   *
 **************************************************************************/
void Date::DayMthYr(Date D)
{
	

	cout << D.day << " " << monthHelper(D.month) << " " << D.year << endl;

}
/***************************************************************************
 *                      monthHelper function                               *
 * This function accepts and integer as its an argument and returns a      *
 * string of that month                                                    *
 ***************************************************************************/
string monthHelper(int Num)
{
	string mth;

	switch(Num)
	{
		case 1  : mth = "January";
				  break;
		case 2  : mth = "February";
				  break;
		case 3  : mth = "March";
				  break;
		case 4  : mth = "April";
				  break;
		case 5  : mth = "May";
				  break;
		case 6  : mth = "June";
				  break;
		case 7  : mth = "July";
				  break;
		case 8  : mth = "August";
				  break;
		case 9  : mth = "September";
				  break;
		case 10 : mth = "October";
				  break;
		case 11 : mth = "November";
				  break;
		case 12 : mth = "December";
				  break;
	}
	return mth;
}

/***************************************************************************
 *                      yearHelper function                                *
 * This function accepts and integer as its an argument and returns an     *
 * integer formatted for the year display.                                 *
 ***************************************************************************/
int yearHelper(int y)
{
	if (y < 2000)
		return y - 1900;
	else
		return y - 2000;
}

/***************************************************************************
 *                          validater                                      *
 * This function accepts three integers as its arguments validates that    *
 * variables m is between 1 and 12, d is between 1 and 31 and, y is        *
 * between 1950 and 2020.                                                  *
 ***************************************************************************/
void Date::validater(int m, int d, int y)
{
	if (m >= 1 && m <= 12)
		month = m;
	else
		month = 1;
	if (d >= 1 && d <= 31)
		day = d;
	else
		day =1 ;
	if (y >= 1950 && y <= 2020)
		year = y;
	else
		year = 2001;
}