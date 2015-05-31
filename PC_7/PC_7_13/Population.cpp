// Population.cpp -- Population implementation file
#include <iostream>
#include "Population.h"
using namespace std;

// Function prototypes
int ValidateCurrPop(int&);
int ValidateBirth(int&);
int ValidateDeath(int&);

/*********************************************************************************
 *                               Population                                      *
 * Three-parameter Constructor accepts values to set member variables            *                                             *
 *********************************************************************************/
Population::Population(int cP, int b, int d)
{
	CurrPop = ValidateCurrPop(cP);

	Births = ValidateBirth(b);

	Deaths = ValidateDeath(d);
}

/*********************************************************************************
 *							        setPopulation                                *  
 *  Mutator member function for setting Current Population member variable.      *
 *********************************************************************************/
void Population::setPopulation(int cP)
{
	CurrPop = ValidateCurrPop(cP);
}

/*********************************************************************************
 *							        setBirths                                    *  
 *      Mutator member function for setting annual births member variable.       *
 *********************************************************************************/
void Population::setBirths(int b)
{
	Births = ValidateBirth(b);
}
/*********************************************************************************
 *							        setDeaths                                    *  
 *      Mutator member function for setting annual deaths member variable.       *
 *********************************************************************************/
void Population::setDeaths(int d)
{	
	Deaths = ValidateDeath(d);
}
		
/*********************************************************************************
 *                                  getBirthRate                                 *
 *              This function computes and returns the birth rate                *
 *********************************************************************************/
double Population::getBirthRate()
{
	return static_cast<double>(Births) / CurrPop;
}

/*********************************************************************************
 *                                  getDeathRate                                 *
 *              This function computes and returns the death rate                *
 *********************************************************************************/
double Population::getDeathRate()
{
	return static_cast<double>(Deaths) / CurrPop;
}

/*********************************************************************************
 *                             ValidateCurrPop                                   *
 *        Validates that population figures less than 2 default to 2.            *
 *********************************************************************************/
int ValidateCurrPop(int &cP)
{
	if(cP < 2)
	  return 2;
	else
		return cP;
}

/*********************************************************************************
 *                              ValidateBirth                                    *
 *           Validates that Birth figures less than 0 default to 0.              *
 *********************************************************************************/
int ValidateBirth(int &b)
{
	if(b < 0)
	  return 0;
	else
		return b;
}

/*********************************************************************************
 *                              ValidateDeath                                    *               
 *           Validates that Death figures less than 0 default to 0.              *
 *********************************************************************************/
int ValidateDeath(int &d)
{
	if(d < 0)
	  return 0;
	else
		return d;
}