// Heading.cpp -- Heading class functin implementation file
#include <iostream>
#include <string>
#include "Heading.h"
using namespace std;

// Function prototype
void printLine();
void printSpace(string);

/************************************************************
 *                       setHeading                         *
 * This member function accepts two string arguments and    *
 * pass them to Heading member variables.                   * 
 ************************************************************/  
void Heading::setHeading(string c, string r)
{
	Company = c;
	Report = r;
}

/************************************************************
 *                       PrtOneline                         *
 * This member function accepts a Heading class variable as *
 * an argument and prints a heading in one-line format.     *
 ************************************************************/  
void Heading::prtOneline(Heading H)
{
	cout << endl << H.Company << " " << H.Report << endl;
}

/************************************************************
 *                      PrtFourline                         *
 * This member function accepts a Heading class variable as *
 * an argument and prints a heading in four-line format.    *
 ************************************************************/
void Heading::prtFourline(Heading H)
{
	cout << endl;

	printLine();

	printSpace(H.Company);

	cout << H.Company << endl;

	printSpace(H.Report);

	cout << H.Report << endl;

	printLine();
}

/************************************************************
 *                    printLine                             *
 * This is a prtFourline helper function that prints the    *
 * lines for the the report header                          *
 ************************************************************/
void printLine()
{
	for (int space = 0; space < 12; ++space)
	{
		cout << " ";
	}

	for (int star = 0; star < 45; ++star)
	{
		cout << "*";
	}
	
	cout << endl;
}

/************************************************************
 *                     printSpace                           *
 * This is a prtFourline helper function that accepts a     *
 * string as an argument and calculates an prints the space *
 * needed before a print the header string.                 *
 ************************************************************/
void printSpace(string str)
{
    int count;

    count = 34 - (str.length()/2); 

	for (int space = 0; space < count; ++space)
	{
		cout << " ";
	}
}