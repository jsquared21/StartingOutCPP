/*
Transient Population

Modify Programming Challenge 15 to also consider the effect on population caused
by people moving into or out of a geographic area. Given as input a starting
population size, the annual birth rate, the annual death rate, the number of
individuals that typically move into the area each year, and the number of
individuals that typically leave the area each year, the program should project
what the population will be numYears from now. You can either prompt the user to
input a value for numYears, or you can set it within the program.

	Input Validation: Do not accept numbers less than 2 for the starting size. Do
	not accept negative numbers for birth rate, death rate, arrivals or
	departures.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int&, double&, double&, int&, int&, int&);
int projYr(int, double, double, int, int);
int transPop(int, int);

int main()
{
	int 	StartPop,	// The starting size of a population
			NumOfYrs,	// The number of years to display
			PplIn,      // Number of individuals that move in each year
			PplOut,		// Number of individuals that leave each year
			ProjPop;	// the projected population at the end of each year
	
	double BirthRate,	// The annual birth rate
		   DeathRate; 	// The annual death rate

	// Display introduction
	cout << "\nThis program projects and displays the "
		 << "population at the end of each year.\n";

	// Call function getData
	getData(StartPop, BirthRate, DeathRate, NumOfYrs, PplIn, PplOut);

	// Display Table with results
	cout << "\n           Population projection Table\n"
		 << "  Year   Starting population   projected Population\n"
		 << "-----------------------------------------------------\n";

	// Call function Projyr and display results for each year 
	for (int Yr = 1; Yr <= NumOfYrs; Yr++)
	{
		ProjPop = projYr(StartPop, BirthRate, DeathRate, PplIn, PplOut);

		cout << setw(4) << Yr << "      " << setw(10) << StartPop;
		cout << "             " << setw(10) << ProjPop << endl;

		StartPop = ProjPop;
	}

	return 0;
}

/******************************************************************************
 *                              ProjYr                                        *
 * This funcion accepts the arguments starting size of the population, the    *
 * annual birth rate and the annual death rate. Calculates and raturns the    *
 * projected new size of the population after a year.                         *
 ******************************************************************************/
int projYr(int StartPop, double BirthRate, double DeathRate, int PplIn,
	       int PplOut)
{
	return StartPop * (1 + BirthRate) * (1 - DeathRate) - transPop(PplIn, PplOut);
}
/******************************************************************************
 *                             transPop                                       *
 * This function accepts the of individuals that typically move into and      *
 * leave the area each year as arguments and returns their difference.        * 
 ******************************************************************************/
int transPop(int PplIn, int PplOut)
{
	return PplIn - PplOut;
}

/******************************************************************************
 *                              getData                                       *
 * This function asks the user for the starting size of the population, the   *
 * annual birth rate, the annual death rate and the number of years to        *
 * display. Validates saves the data in reference parameters.                 *
 ******************************************************************************/
void getData(int& StartPop, double& BirthRate, double& DeathRate, int& NumOfYrs,
			 int& PplIn, int& PplOut)
{
	do
	{
		cout << "What is the starting size of the population? ";
		cin  >> StartPop;

	} while (StartPop < 2);

	do
	{
		cout << "What is the annual birth rate? ";
		cin  >> BirthRate;

	} while (BirthRate < 0);

	do
	{
		cout << "What is the annual death rate? ";
		cin  >> DeathRate;

	} while (DeathRate < 0);


	do
	{
		cout << "How many individuals typically move into the area each year? ";
		cin  >> PplIn;

	} while (PplIn < 0);

	do
	{
		cout << "How many individuals typically leave the area each year? ";
		cin  >> PplOut;

	} while (PplOut < 0);
	
	do
	{
		cout << "How many years to display? ";
		cin  >> NumOfYrs;

	} while (NumOfYrs < 1);
}