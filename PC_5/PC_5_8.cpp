/*
Calories Burned
Running on a particular treadmill you burn 3.9 calories per minute. Write a program that
uses a loop to display the number of calories burned after 10, 15, 20, 25, and 30 minutes.
*/
#include <iostream>
using namespace std;

int main()
{
	const double CALORIES_PER_MIN = 3.9;

	int Min,
		Burnt = 0; 		// Acummulator set to 0

	cout << "\nTable displaying number of calories burnt on a\n"
		 << "treadmill that burns 3.9 calories per minute.\n"
		 << "\n   Minutes Ran      Calories Burnt\n"
		 << "------------------------------------------\n";

	for(Min = 10; Min <= 30; Min += 5)
	{
		Burnt = Min * CALORIES_PER_MIN;
		cout << "        "<< Min << "               " << Burnt << endl; 
	}
	cout << endl;
	return 0;
}