/*
Energy Drink Consumption
A soft drink company recently surveyed 12,467 of its customers and found that
approximately 14 percent of those surveyed purchase one or more energy drinks
per week. Of those customers who purchase energy drinks, approximately 64
percent of them pefer citrus flavored energy drinks. Write a program that
displays the following:

	* The approximate number of customers in the survey who purchase one or
	  more energy drinks per week.

	* The approximate number of costomers in the survey who prefer citrus
	  flavored energy drinks.
*/
// This program calculates and displays the results of a soft drink company's 
// survey.
#include <iostream>
using namespace std;

int main()
{
	int Customers  = 12467,
		BuyEDrinks = Customers * .14,
		Citrus 	   = BuyEDrinks * .64;

	cout << "Approximately " << BuyEDrinks << " customers in the survey\n";
	cout <<	"purchase one or more energy drinks per week.\n\n";
	cout << "Approximately " << Citrus << " customers in the survey\nprefer ";
	cout << "citrus flavored energy drinks.\n";
	return 0;
}