/*
Distance Traveled
The distance a vehicle travels can be calculated as follows:

	distance = speed * time

For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is
120 miles.

Write a program that asks the user for the speed of a vehicle (in miles per hour) and how
many hours it has traveled. It should then use a loop to display the total distance traveled
at the end of each hour of that time period. Here is an example of the output:

		What is the speed of the vehicle in mph? 40
		How many hours has it traveled? 3
		Hour Distance Traveled
		--------------------------------
			1   	   40
			2   	   80
			3   	  120

	Input Validation: Do not accept a negative number for speed and do not accept any
	value less than one for time traveled.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Speed,
		Hours,
		Distance = 0; 	// Set accumulator to 0

	// Ask the user to input the speed
	cout << "What is the speed of the vehicle in mph? ";
	cin  >> Speed;
	cout << "How man hours has it traveled? ";
	cin  >> Hours;

	if (Speed >= 0 && Hours >= 1)
	{
		cout << "Hour   Distance Traveled\n"
		 << "--------------------------------\n";

		for (int X = 1; X <= Hours; X++)
		{
			
			Distance += Speed;
			cout << right << setw(4) << X << "        ";
			cout << setw(6) << Distance << endl;
		}
	}
	return 0;
}