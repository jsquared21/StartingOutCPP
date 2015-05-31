#include <iostream>
#include <string>
#include "DrinkMach.h"
#include <cctype>
#include <iomanip>
using namespace std;

/********************************************************************************
 *                          default constructor                                 * 
 ********************************************************************************/
DrinkMach::DrinkMach()
{
	D[0].Name =          "Cola"; D[0].Price =  .75; D[0].InStock = 20;
	D[1].Name =	    "Root beer"; D[1].Price =  .75; D[1].InStock = 20;
	D[2].Name =   "Orange Soda"; D[2].Price =  .75; D[2].InStock = 20;
	D[3].Name =    "Grape Soda"; D[3].Price =  .75; D[3].InStock = 20;
	D[4].Name = "Bottled water"; D[4].Price = 1.00; D[4].InStock = 20;
	
}

/********************************************************************************
 *                               displayChoices                                 *
 * This member function displays a menu of drink names and prices. Ask the user *
 * to input an integer and call the function buyDrink with the user input as    *
 * its argument.                                                                *
 ********************************************************************************/
void DrinkMach::displayChoices()
{
	int Ch;		// Holds Drink choice

	cout << "     _________________________________________\n";
	cout << "    |   Choice   |   Drink Name   |   Cost    |\n";
	cout << "     -----------------------------------------\n";
	cout << left << fixed << showpoint << setprecision(2);
	for (int i = 0; i < 5; i++)
	{
		cout << "    |      " << (i + 1) << ".    |  " << setw(14) << D[i].Name
		<<  "|   $"  << D[i].Price << "   |" << endl;
	}
	cout << "     -----------------------------------------\n";
	
	do
	{
		cout << "        Enter a drink choice from the menu.\n"
			 << "           Enter 0 to exit the program.\n";
		cin  >> Ch;

		if (Ch < 0 || Ch > 5)
			cout << "          Error! Invalid menu choice.\n";

	} while (Ch < 0 || Ch > 5);

	if (Ch > 0 && Ch <= 5)
	{
		Ch--;
		buyDrink(Ch);
	}
}

/********************************************************************************
 *                                   buyDrink                                   *
 *  This member function:                                                       *                        *
 *	• Calls the inputMoney function, passing it the patron’s drink choice.      *
 *	• If the patron no longer wishes to make the purchase, return all input     *
 *	  money.                                                                    *
 *  • If the machine is out of the requested soda, display an appropriate       *
 *	  “sold out” message and return all input money.                            *
 *  • If the machine has the soda and enough money was entered, complete the    *
 *    sale by updating the quantity on hand and money collected information,    *
 *    calculating any change due to be returned to the patron, and delivering   *
 *    the soda. This last action can be simulated by printing an appropriate    *
 *    “here is your beverage” message.                                          *
 ********************************************************************************/
void DrinkMach::buyDrink(int Ch)
{
   double Money,	// Holds patron's money
   		 Change;	// Holds change from purchase
   char Input;		// Holds user input

   Money = inputMoney(Ch);
   if (Money > 0)
   {
	   Change = (Money - D[Ch].Price);
	
	   cout << fixed << showpoint << setprecision(2);
	   cout << "\n  Order confirmation\n"
	   		<< "----------------------\n";
	   cout << "Drink: 	    " << D[Ch].Name << endl;
	   cout << "Cost:  	    $" << D[Ch].Price << endl;
	   cout << "Paid:  	    $" << Money << endl;
	   cout << "Change Due: $" << Change << endl;
	
	   cout << "\nDo you wish to make the purchase (Y/N): ";
	   cin  >> Input;
	
	   if (toupper(Input) == 'Y')
	   {
	   		if (D[Ch].InStock > 0)
	   		{
	   			D[Ch].InStock -= 1;
	
	   			Money -= Change;
	
	   			Sales = Money;
	
	   			if(Change > 0)
	   			{
	   				cout << "\nHere is your change: $" << Change << endl;
	   			}
	
	   			cout << "Here is your " << D[Ch].Name << endl;
	
	   		}
	   		else
	   		{
	   			cout << "Sorry " << D[Ch].Name << " is sold out.\n";
	   			cout << "Returning $" << Money << endl;
	   			Money = 0;
	   		}
	
	   }
	}
}

/********************************************************************************
 *                                  inputMoney                                  *
 * This member function accepts, validats, and returns the amount of money      *
 * input by the user to the function buyDrink.                                  *
 ********************************************************************************/
double DrinkMach::inputMoney(int Ch)
{
	double Money; // Holds patron's money

	
	cout << fixed << showpoint << setprecision(2);
	cout << "Please input $" << D[Ch].Price << ": ";
	cin	 >> Money;

	if (Money < D[Ch].Price)
	{
		cout << "\nYou did not enter enough money for your purchase.\n"
			 << "Returning money: $" << Money << endl;
		Money = 0;
	}
	return Money;
}

/********************************************************************************
 *                              dailyReport                                     *
 * This member function displays a report of how many of each drink type remain *
 * in the machine at the end of the day and how much money was collected.       *
 ********************************************************************************/
void DrinkMach::dailyReport()
{
	cout << "\n          Daily Report\n"
		 << "----------------------------------\n";
	cout << "Drink Name     Number in Machine\n";

	for (int i = 0; i < 5; i++)
	{
		cout << setw(14) << D[i].Name << "         " << D[i].InStock << endl;
	}

	cout << "\nRevenue: $" << Sales << endl;

}