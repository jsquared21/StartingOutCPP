/*
Pay Period Gross Pay
A particular employee earns $32,500 annually, Write a program that determines and
displays what the amount of his gross pay will be for each period if he is paid
twice a month (24 pay checks per year) and if he is paid bi-weekly (26 checks per
year).
*/

// This program determines and displays gross pay by period.
#include <iostream>
using namespace std;

int main()
{
	double Annual 	= 32500,
		   BiMTH	= Annual / 24,
		   BiWeek 	= Annual / 26;

	cout << "Annual eranings 	 = $" << Annual << endl;
	cout << "Bi-Monthly eranings = $" << BiMTH << endl;
	cout << "Bi-Weekly eranings  = $" << BiWeek << endl;
	return 0;
}