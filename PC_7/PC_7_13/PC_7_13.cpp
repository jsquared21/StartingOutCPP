/*
Population
In a population, the birth rate and death rate are calculated as follows:

	Birth Rate = Number of Births ÷ Population
	Death Rate = Number of Deaths ÷ Population

For example, in a population of 100,000 that has 8,000 births and 6,000 deaths per
year,

	Birth Rate = 8,000 ÷ 100,000 = 0.08
	Death Rate = 6,000 ÷ 100,000 = 0.06

Design a Population class that stores a current population, annual number of
births, and annual number of deaths for some geographic area. The class should
allow these three values to be set in either of two ways: by passing arguments to
a three-parameter constructor when a new Population object is created or by
calling the setPopulation, setBirths, and setDeaths class member functions. The
class should also have getBirthRate and getDeathRate functions that compute and
return the birth and death rates. Write a short program that uses the Population
class and illustrates its capabilities.

	Input Validation: If a population figure less than 2 is passed to the class,
	use a default value of 2. If a birth or death figure less than 0 is passed in,
	use a default value of 0.
*/
#include <iostream>
#include "Population.h"
using namespace std;

int main()
{
	int Pop, Births, Deaths;

	cout << "\n  Population birth and death rate calculator\n"
		 << "----------------------------------------------\n";
	cout << "Enter the current population: ";
	cin  >> Pop;
	cout << "Enter the annual number of births: ";
	cin  >> Births;
	cout << "Enter the annual number of deaths: ";
	cin  >> Deaths;


	Population Test(Pop, Births, Deaths);


	cout << "\n\n   Population birth and death rate Report\n"
		 << "----------------------------------------------\n";
	cout << "Birth Rate: " << Test.getBirthRate() << endl;
	cout << "Death Rate: " << Test.getDeathRate() << endl;
}