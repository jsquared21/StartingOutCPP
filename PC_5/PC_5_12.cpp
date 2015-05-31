/*
The Greatest and Least of These

Write a program with a loop that lets the user enter a series of integers, followed by -99 to
signal the end of the series. After all the numbers have been entered, the program should
display the largest and smallest numbers entered.
*/
#include <iostream>
using namespace std;

int main()
{
	int Num,
		Largest,
		Smallest;

	cout << "Enter a series of numbers and the program will\n"
		 << "display the largest and smallest numbers entered\n"
		 << "Enter a number\n";
	cin	 >> Num;

	Largest = Smallest = Num;

	while (Num != -99)
	{			
		cout << "Enter a number\n";
		cin  >> Num;
		
		if (Num > Largest)
			Largest = Num;

		if (Num < Smallest)
			Smallest = Num;

	}
	cout << "The largest number entered is " << Largest << "." << endl;
	cout << "The smallest number entered is " << Smallest << "." << endl;
	return 0;
}