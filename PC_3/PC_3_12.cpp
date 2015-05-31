// Currency
// This program conerts U.S. dollar amounts to Japanese yen and euros.
#include <iostream>
using namespace std;

int main()
{
	const double YEN_PER_DOLLAR   = .952,
				 EUROS_PER_DOLLAR = .7175;

		  double USd,
		  		 Yen,
		  		 Euros;

	// Input U.S. dollars.
	cout << "To convert a U.S. dollar amount to Japanese yen\n";
	cout << "and euros enter a amount in U.S. dollar: ";
	cin  >> USd;

	// Convert U.S. dollars to yen and euros. 
	Yen = USd * YEN_PER_DOLLAR;
	Euros = USd * EUROS_PER_DOLLAR;

	// Display results.
	cout << "$" << USd << " U.S. dollar is equivalent to ";
	cout << Yen << " Yen and " << Euros << " Euros.\n";
	return 0;
}