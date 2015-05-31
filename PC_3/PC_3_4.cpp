// This program calculates and displays the minimum amount
// of insurance that should be purchased for a property.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PERCENT_INSURE = .80;

		  double ReplacementCost,
		  		 MinInsurance;

		  // Input Replacement cost data
		  cout << "To calculate the minimum amount of insurance\n";
		  cout << "that should be purchased for the property.\n";
		  cout << "enter the building's replacement cost ";
		  cin  >> ReplacementCost;

		  // Calculate the minimum amount of insurance
		  MinInsurance = ReplacementCost * PERCENT_INSURE;

		  // Display results
		  cout << "The minimum amount of insurance that should be\n";
		  cout << "purchased for this property is $";
		  cout << fixed << showpoint << setprecision(2) << MinInsurance << endl;
		  return 0;
}