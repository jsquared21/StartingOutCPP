// How many Calories?
// This programs calculates and displays calories consumed.
#include <iostream>
using namespace std;

int main()
{
	const int CALORIES_PER_COOKIE = (300 * 10) / 40;
		  int CookiesAte,
		  	  Calories;

	cout << "Enter how many cookies you ate and this program\n";
	cout << "will calculate how many total calories were consumed: ";
	cin  >> CookiesAte;

	Calories = CookiesAte * CALORIES_PER_COOKIE;
	cout << "You consumed a total of " << Calories << " calories.\n";
	return 0;
}