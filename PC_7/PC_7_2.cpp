/*
Movie Profit
Modify the Movie Data program written for Programming Challenge 1 to include two
additional members that hold the movie’s production costs and first-year revenues.
The constructor should be modified so that all six member values can be specified
when a MovieData variable is created. Modify the function that displays the movie
data to display the title, director, release year, running time, and first year’s
profit or loss.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MovieData
{
	string Title,
	       Director;
	int    YrReleased,
		   RuningTime;
	double ProductionCost,
		   FirstYrRev;

	// Constructor
	MovieData(string T, string D, int YR, int RT, double PC, double FR)
	{
		Title = T;
		Director = D;
		YrReleased = YR;
		RuningTime = RT;
		ProductionCost = PC;
		FirstYrRev = FR;
	}
};



// Function prototypes
void displayinfo(MovieData);

int main()
{
	MovieData Movie1("Crash", "Thomas Ring", 2000, 130, 1000000, 5000000); 
	MovieData Movie2("Die Hard 3", "Mark Pen", 2010, 140, 1000000, 500000); 

	displayinfo(Movie1);
	displayinfo(Movie2);

	return 0;
}

/**************************************************************************
 *                            displayinfo                                 *
 * This function accepts MoiveData variables passed to is a arguments and *
 * displays the information about the movie in a clearly formatted manner *
 **************************************************************************/
void displayinfo(MovieData M)
{
	cout << "\n\n       Move information       \n"
	     << "------------------------------\n";
	cout << "Title                      : " << M.Title << endl;
	cout << "Director                   : " << M.Director << endl;
	cout << "Year Released              : " << M.YrReleased << endl;
	cout << "RuningTime (minutes)       : " << M.RuningTime << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "First year’s profit or loss: $" << M.FirstYrRev - M.ProductionCost << endl;
}
