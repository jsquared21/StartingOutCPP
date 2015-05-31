/*
Past Ocean Levels
The Earth's ocean levels have risen an average of 1.8 millimeters per year over
the past century. Write a program that computes and displays the number of
centimeters and number of inches the ocean rose during this time. One millimeter
is equivalent to 0.1 centimeters. One centimeter is equivalent to 0.3937 inches.
*/
// This program computes and displays the number of centimeters and the number of
// inches the ocean rose in a century.
#include <iostream>
using namespace std;

int main()
{
	double Century = 100,
		   MM 	   = 1.8 * Century,
		   CM 	   = MM * 0.1,
		   In 	   = CM * 0.3937;

	cout << "Over the past century the Earth's ocean levels have risen an average of:\n";
	cout << MM << " millimeters per year.\n";
	cout << CM << " centimeters per year.\n";
	cout << In << " inches per year.\n";
	return 0;
}
