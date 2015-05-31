/*
Speed Conversion Chart
Write a program that displays a table of speeds in kilometers per hour with their values
converted to miles per hour. The table should display the speeds from 60 kilometers per
hour through 130 kilometers per hour, in increments of 5 kilometers per hour. (In other
words, it should display 60 kph, 65 kph, 70 kph and so forth, up through 130 kph.)
	MPH = KPH * 0.6214
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int KPH, MPH;

	cout << "Table of speeds in kilometers per hour\n"
		 << "converted to miles per hour.\n\n"
		 << "Kilometers per hour       miles per hour\n"
		 << "------------------------------------------\n";

	for (KPH = 60; KPH <= 130; KPH += 5)
	{
		MPH = KPH * 0.6214;
		cout << right << setw(10) << KPH;
		cout << setw(25) << MPH << endl;
	}
	cout << endl;
	return 0;
}