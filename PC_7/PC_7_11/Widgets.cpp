// Widgets.cpp -- Widgets implementation file
#include "Widgets.h"
#include <iostream>
using namespace std;



void Widgets::numOfDays(int Order)
{
	const int WPD = getOH() * getWPH();

	int Days;

	if(Order <= WPD)
	   Days = 1;
	else if (Order % WPD == 0)
		Days = Order / WPD;
	else
		Days = (Order / WPD) + 1;


	cout << "Number of days to produce " << Order << " widgets: " 
		 << Days << endl;
}