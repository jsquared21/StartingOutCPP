/*
Age
Write a program that asks for the user’s name and year of birth, greets the user by name,
and declares the user’s age in years. Users are assumed to be born between the years 1800
and 2099, and should enter the year of birth in one of the three formats 18XX, 19XX, or
20XX. A typical output should be “Hello Caroline, you are 23 years old.”
*/
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	time_t epSecs;					// Seconds since epoch
	tm *pCalTime;					// Pointer to calender time
 	epSecs = time(NULL);			// Seconds since epoch
 	pCalTime = localtime(&epSecs);	// Convert to local time
	string Name;					// Holds the users name
	int Year;						// Hods the users year of birth

	// Ask for the user's name and year of bith
	cout << "What is you first name? ";
	cin  >> Name;
	cout << "Enter your year of bith in on of the three formats.\n"
		 << "18XX, 19XX, or 20XX: ";
	cin  >> Year;

	// Greet the user by name and declare the user's age in years.
	cout << "Hello " << Name << ", you are "
		 << ((1900 + pCalTime->tm_year) - Year)
		 << " years old." << endl;

	return 0;
}