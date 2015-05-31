/*
Book Club Points
An online book club awards points to its customers based on the number of books purchased
each month. Points are awarded as follows:
	_________________________________________________
		Books Purchased 			Points Earned
	_________________________________________________	
			   0 							0
			   1 							5
			   2 							15
			   3 							30
			   4 or more 					60
	__________________________________________________

Write a program that asks the user to enter the number of books purchased this month and
then displays the number of points awarded.
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned int BooksPurchased;

	// Input the number of books purchased.
	cout << "Please enter the number of books you purchased this\n"
		 << "month, To calculate your monthy awarded points.\n";
	cin  >> BooksPurchased;

	// Display the number of points earned.
	switch (BooksPurchased)
	{
		case 0  : cout << "You have earned 0 points for this month.\n";
					break;
		case 1	: cout << "You have earned 5 points for this month.\n";
					break;
		case 2	: cout << "You have earned 15 points for this month.\n";
					break;
		case 3	: cout << "You have earned 30 points for this month.\n";
					break;
		default : cout << "You have earned 60 points for this month.\n";		
	}
	return 0;
}

