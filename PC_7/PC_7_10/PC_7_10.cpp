/*
Report Heading
Design a class called Heading that has data members to hold the company name and
the report name. A two-parameter default constructor should allow these to be
specified at the time a new Heading object is created. If the user creates a
Heading object without passing any arguments, “ABC Industries” should be used as a
default value for the company name and “Report” should be used as a default for
the report name. The class should have member functions to print a heading in
either one-line format, as shown here:

	Pet Pals Payroll Report

or in four-line “boxed” format, as shown here:

	  *********************************************
	  					  Pet Pals
	                   Payroll Report
	  *********************************************
	  
Try to figure out a way to center the headings on the screen, based on their lengths.
Demonstrate the class by writing a simple program that uses it.
*/
#include <iostream>
#include "Heading.h"
using namespace std;

// Function prototypes
void inputHeading(Heading&);
void printHeading(Heading &);

int main()
{
	Heading Test; 

	inputHeading(Test);

	printHeading(Test);

	return 0;
}

/************************************************************
 *                         inputHeading                     *
 *   This function accepts a Heading object variable as an  *
 *   argument. Asks the user to enter a company name and a  *
 *   report name. Passes the user input to setHeading as    *
 *   arguments.                                             *
 ************************************************************/
void inputHeading(Heading &H)
{
	string C, R;

	cout << "\n       Report header setup\n"
		 << "--------------------------------------\n";
	cout << "Enter company name: ";
	getline(cin, C);
	cout << "Enter report name: ";
	getline(cin, R);

	H.setHeading(C, R);
}

/************************************************************
 *                          printHeading                    *
 * This function takes a Heading object variable as an      *
 * argument. Prompt the user to choose a header print       *
 * and calls a Heading member function passing a Heading    *
 * object variable as an argument.                          *
 ************************************************************/
void printHeading(Heading &H)
{
	int Num;

	cout << "\n       Report header print menu\n"
		 << "-------------------------------------------\n";
	cout << "  Choose your report header fromat:\n"
		 << "  1. Print a one-line header.\n"
	     << "  2. Print a four-line header.\n";
	cin  >> Num;

	switch(Num)
	{
		case 1 : H.prtOneline(H);
				 break;
		case 2 : H.prtFourline(H);
	}

}