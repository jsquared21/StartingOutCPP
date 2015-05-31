// Box Office
// This program calculates and displays a theater's
// gross and net box office profit for a night.

/*
Pseudo code
Ask user to input the name of movie.
Input MovieName.
Ask user to input the amount of adult tickets sold.
Input Adult.
Ask user to input the amount of child tickets sold.
Input Child.
Compute total price of adult tickets.
Adults * PRICE_ADULT
Compute total price of child tickets.
Child * PRICE_CHILD
Compute gross box office profit.
Compute amount paid to distributor.
Displays results.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const double THEATER_PERCECT = .20,
				 PRICE_ADULT	 = 6.00,
				 PRICE_CHILD	 = 3.00;

	string Movie;

	double Adult,
		   Child,
		   GrossBOP,
		   AmtToDistributor,
		   NetBOP;

	// Input movie name and tickets sold.
	cout << "This program calculates gross and\nnet box office profit of a night.\n";
	cout << "What is the name of the movie? ";
	getline(cin, Movie);
	cout << "How many adult tickets where sold? ";
	cin  >> Adult;
	cout << "How many child tickets where sold? ";
	cin  >> Child;

	// Calculations
	GrossBOP = (Adult * PRICE_ADULT) + (Child * PRICE_CHILD);
	AmtToDistributor = GrossBOP - (GrossBOP * THEATER_PERCECT);
	NetBOP = GrossBOP * THEATER_PERCECT;

	// Display caluculations
	cout << "Movie Name:			\"" << Movie << "\"\n";
	cout << left;
	cout << "Adult Tickets Sold:		 " << Adult << endl;
	cout << "Child Tickets Sold:		 " << Child << endl;
	cout << right << fixed << showpoint << setprecision(2);
	cout << "Gross Box Office Profit:	 $" << setw(8) << GrossBOP <<endl;
	cout << "Amount Paid to Distributor:	-$";
	cout << setw(8) << AmtToDistributor <<endl;
	cout << "Net Bow Office Profit:		 $" << setw(8) << NetBOP <<endl;
	return 0;
}