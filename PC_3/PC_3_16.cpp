// Math Tutor
// This program displays two random numbers between
// 1 and 9 to be added, then displays the result.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	unsigned seed = time(0);		// Random generator seed.
	int num1, num2, num3, num4;

	srand(seed);
	num1 = 1 + rand() % 9;
	num2 = 1 + rand() % 9;
	num3 = num1 + num2;

	// Asks user to enter the sum of two random numbers.
	cout << "Enter the sum of the following\n";
	cout << left;
	cout << "  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "----\n";
	cout << right;
	cin  >> num4;

	// Displays the correct answer.
	cout <<"The Answer is " << num3 << endl;
	return 0;
}