// Inventory.cpp -- Inventory implementation file

#include <iostream>
#include "Inventory.h"
using namespace std;

// Function prototypes
int validate(int);
double validate(double);


/*********************************************************************************
 *                                 Inventory                                     *
 * This constructor ccepts an item’s number, quantity, and cost as arguments.    *
 * The function should call other class functions to copy these values to the    *
 * appropriate member variables and then call the setTotalCost function.         *
 *********************************************************************************/
Inventory::Inventory(int i, int q, double c)
{
	itemNumber = validate(i);
	quantity   = validate(q);
	cost       = validate(c);
	setTotalCost();
}

/*********************************************************************************
 *                               setItemNumber                                   *
 *   Accepts an int argument that is copied to the itemNumber member variable.   *
 *********************************************************************************/
void Inventory::setItemNumber(int &i)
{
	itemNumber = validate(i);
}

/*********************************************************************************
 *                               setQuantity                                     *
 *    Accepts an int argument that is copied to the quantity member variable.    *
 *********************************************************************************/
void Inventory::setQuantity(int &q)
{
	quantity = validate(q);
	setTotalCost();
}

/*********************************************************************************
 *                                 setCost                                       *
 *     Accepts a double argument that is copied to the cost member variable.     *
 *********************************************************************************/
void Inventory::setCost(double &c)
{
	cost = validate(c);
	setTotalCost();
}

/*********************************************************************************
 *                                 validate                                      *
 * These are overloaded helper functions that Do not accept negative values for  *
 * item number, quantity, or cost.                                               *
 *********************************************************************************/
int validate(int Num)
{
	if (Num < 0)
		return 0;
	else 
		return Num;
}

double validate(double Num)
{
	if (Num < 0.0)
		return 0.0;
	else 
		return Num;
}