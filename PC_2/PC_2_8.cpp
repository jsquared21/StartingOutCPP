/*
Land Calculation
In the United States, land is often measured in squared feet. In many other
countries it is measured in squared meters. One acre of land is equivalent
to 43,560 square feet. A square meter is equivalent to 10.7639 square feet.
Write a program that computes and displays the number of square feet and the
number of square meter in 1/4 acre of land.

Hint: Because a square meter is larger than a square foot, there will be fewer
square meters in 1/4 acre than there are square feet.
*/

// Program computes and displays the number of square feet and the number of
// square meters in 1/4 acre of land.
#include <iostream>
using namespace std;

int main()
{
	double Acres   = .25,
		   SqFeet  = Acres * 43560,
		   SqMeter = SqFeet / 10.7639;

	cout << "There are " << SqFeet << " square feet\n";
	cout << "and " << SqMeter << " square meters\n";
	cout << "in " << Acres << " acres of land.\n";
	return 0;	
}
