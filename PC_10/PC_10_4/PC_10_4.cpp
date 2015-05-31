/*
Money Money Money #1
Modify Program 10-19 (the United Cause case study program) so it can be used with any
set of donations. The program should dynamically allocate the donations array and ask
the user to input its values.
*/
#include <iostream>
#include "donlist.h"
using namespace std;

int main()
{
	DonationList ckGraphics;
	cout << "The donations sorted in descending order are:\n";
	ckGraphics.showSorted();
	cout << "The donations in their original order are:\n";
	ckGraphics.show();
	return 0;
}