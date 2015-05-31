// PC_8_13.cpp
#include <iostream>
#include <cctype>
#include <string>
#include "DrinkMach.h"
using namespace std;

int main()
{

	DrinkMach Test; 
	char Ch;			// Holds user choice


	do
	{	// main processing loop which calls the displayChoices
		Test.displayChoices();

		cout << "\nWould you like to purchase another beverage (Y/N): ";
		cin  >> Ch;
	
	} while (toupper(Ch) == 'Y');


	return 0;
}
