// PC_8_12.cpp -- PayRoll client program
#include <iostream>
#include "PayRoll.h"
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	const int EMPLS = 7;

	PayRoll gross[EMPLS];
	double r, h;

	ifstream read;
	read.open("payroll.dat");
	if (!read)
		cout << "Error opening data file.\n";
	else
	{
		for (int i = 0; i < EMPLS; i++)
		{
			read >> r;
			gross[i].setRate(r);
			read >> h;
			gross[i].setHrs(h);
		}

		read.close();
	}

	cout << "\n    PayRoll Report\n";
	cout << "  Employee Gross pay\n"
		 << "-----------------------\n";
	cout << fixed << showpoint << setprecision(2);
	for (int i = 0; i < EMPLS; i++)
	{
		cout << "Employee #" << (i + 1) << ": $"
			 << gross[i].getGross() << endl;
	}

	return 0;
}