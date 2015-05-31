// DrinkMach.h -- DrinkMach specification file
#ifndef DRINKMACH_H
#define DRINKMACH_H

#include <iostream>
#include <string>
#include "ItemInfo.h"
using namespace std;

class DrinkMach
{
 	private:
    	// Array of five info structures;
    	ItemInfo D[5];
    	double Sales; 				// Holds revenue

    	// Private member functions
    	double inputMoney(int);
    	void dailyReport();

    public:
    	// Default contructor
    	DrinkMach();

    	// Destructor
    	~DrinkMach()
    	{ dailyReport(); }

    	// Public member functions
    	void displayChoices();
    	void buyDrink(int);
};
#endif