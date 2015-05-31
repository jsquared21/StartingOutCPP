#include <iostream>
#include <iomanip>
#include <string>
#include "Stats.h"
using namespace std;

// Function Prototype
void getData(Stats&, string [], int);
void createReport(Stats&, string[]);



int main()
{
	Stats Team;
	const int Runnners = 15;
	string Names[Runnners];
	

	getData(Team, Names, Runnners);
	createReport(Team, Names);

	return 0;
}
void getData(Stats& Team, string Names[], int Runnners)
{
	string Input;
	double Time;
	cout << "\nEnter the 100-yard dash times for each runner.\n";
	for (int i = 0; i < Runnners; i++)
	{
			cout << "Enter runner #" << (i + 1) << " Name: ";
			cin  >> Input;
			Names[i] = Input;
			
		do
		{
			cout << "Enter " << Names[i] << "'s dash time: ";
			cin  >> Time;

			if (Time < 0)
				cout << "Error! Runner times must be greater than 0.\n";

		} while (Time < 0);

		if(!Team.storeValue(Time))
		cout << "Error! Database is full.\n";

		cout << endl;	
	}
}


void createReport(Stats& Team, string Names[])
{
	cout << "         Tulsa Tigers Track Team\n\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Average 100 yard-dash time: " << Team.average() << " seconds.\n";
	cout << "Slowest runner: " << Names[Team.highest()] << "        "
	 	 << Team.getStats(Team.highest()) << " seconds.\n";
	cout << "Fastest runner: " << Names[Team.lowest()] << "        "
		 << Team.getStats(Team.lowest()) << " seconds.\n";
}