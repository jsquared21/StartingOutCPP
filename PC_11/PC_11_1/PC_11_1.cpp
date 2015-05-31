// Programming Challenges
// Check Writing
// This program asks the user to enter a number in the range 0 through 9999 and
// then prints out its English description.

#include <iostream>
#include <string>
#include "Numbers.h"
using namespace std;

int main()
{
	int Num;

	// Ask the user to enter a number in the range 0 through 9999;
	cout << "This program displays the English description of a number.\n"
		 << "Enter a number in the range 0 through 9999: ";
	cin  >> Num;
	Numbers Obj(Num);

	Obj.print();

	return 0;
}