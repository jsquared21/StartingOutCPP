/*
Future Ocean Levels
During the past decade ocean levels have been rising faster than in the past, an
average of approximately 3.1 millimeters per year. Write a program that computes
how much ocean levels are expected to rise during the next 20 years if they
continue rising at this rate. Display the answer in both centmeters and inches.
*/
// Program computes and displays how much ocean are expected to rise.
#include <iostream>
using namespace std;

int main()
{
	double RiseMM = 3.1 * 20,
		   RiseCM = RiseMM * 0.1,
		   RiseIn = RiseMM * 0.0393701;

	cout << "During the next 20 years ocean levels are expected to rise:\n";
	cout << RiseCM << " centmeters per year.\n";	
	cout << RiseIn << " inches per year.\n";
	return 0;
}