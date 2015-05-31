/*
Cyborg Data Type Sizes
You have been given a job as a programmer on a Cyborg supercomputer. In order to
accomplish some calculations, you need to konw how many bytes the following data
types use: char, int, float, and double. You do not have any manuals, so you can't
look up this information, Write a C++ program that will determine the amount of
memory used by these tyes and display the information on the screen.
*/

// Program displays how many bytes data types use.
#include <iostream>
using namespace std;

int main()
{
	cout << "The data type char uses " << sizeof(char) <<  " bytes of data.\n";
	cout << "The data type int uses " << sizeof(int) << " bytes of data.\n";
	cout << "The data type float uses " << sizeof(float) << " bytes of data.\n";
	cout << "The data type double uses " << sizeof(double) << " bytes of data.\n";
	return 0;
}