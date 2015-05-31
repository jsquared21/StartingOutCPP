/*
Population

In a population, the birth rate is the percentage increase of the population due
to births and the death rate is the percentage decrease of the population due to
deaths. Write a program that asks for the following:

	• The starting size of a population
	• The annual birth rate
	• The annual death rate
	• The number of years to display

The program should then display the starting population and the projected
population at the end of each year. It should use a function that calculates and
returns the projected new size of the population after a year. The formula is

	N = P(1 + B)(1 - D)

where N is the new population size, P is the previous population size, B is the
birth rate, and D is the death rate.

	Input Validation: Do not accept numbers less than 2 for the starting size.
	Do not accept negative numbers for birth rate or death rate. Do not accept
	numbers less than 1 for the number of years.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int&, double&, double&, int&);
int ProjYr(int, double, double);

int main()
{
	int 	StartPop,	// The starting size of a population
			NumOfYrs,	// The number of years to display
			ProjPop;	// the projected population at the end of each year
	
	double BirthRate,	// The annual birth rate
		   DeathRate; 	// The annual death rate

	// Display introduction
	cout << "\nThis program projects and displays the "
		 << "population at the end of each year.\n";

	// Call function getData
	getData(StartPop, BirthRate, DeathRate, NumOfYrs);

	// Display Table with results
	cout << "\n           Population projection Table\n"
		 << "  Year   Starting population   projected Population\n"
		 << "-----------------------------------------------------\n";

	// Call function Projyr and display results for each year 
	for (int Yr = 1; Yr <= NumOfYrs; Yr++)
	{
		ProjPop = ProjYr(StartPop, BirthRate, DeathRate);

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
int ProjYr(int StartPop, double BirthRate, double DeathRate)
{
	return StartPop * (1 + BirthRate) * (1 - DeathRate);
}

/******************************************************************************
 *                              getData                                       *
 * This function asks the user for the starting size of the population, the   *
 * annual birth rate, the annual death rate and the number of years to        *
 * display. Validates saves the data in reference parameters.                 *
 ******************************************************************************/
void getData(int& StartPop, double& BirthRate, double& DeathRate, int& NumOfYrs)
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
		cout << "How many year to display? ";
		cin  >> NumOfYrs;

	} while (NumOfYrs < 1);
}