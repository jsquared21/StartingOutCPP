/*
Membership Fees Increase

A country club, which currently charges $2500 per year for membership, has announced it
will increase its membership fee by 4% each year for the next six years. Write a program
that uses a loop to display the projected rates for the next six years.
*/
#include <iostream>
using namespace std;

int main()
{
	const double RATE = 0.04,
				 CURRENT_CHARGE = 2500.0;
	int Year;
	double YrRate;

	cout << "\nCountry club projected rates\n"
		 << "    for the next six years\n"
		 << "-----------------------------\n"
		 << "      Year       Rate\n"
		 << "-----------------------------\n";

	for(Year = 1; Year <= 6; Year++)
	{
		YrRate = CURRENT_CHARGE * (1 + Year * RATE);
		cout << "       " << Year << "         " << YrRate << endl;
	}
	cout << endl;
	return 0;
}
