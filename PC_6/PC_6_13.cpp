/*
Order Status

The Middletown Wholesale Copper Wire Company sells spools of copper wiring for
$100 each and ships them for $10 apiece. Write a program that displays the status
of an order. It should use two functions. The first function asks for the
following data and stores the input values in reference parameters.

   • The number of spools ordered.
   • The number of spools in stock.
   • Any special shipping and handling charges (above the regular $10 rate).

The second function receives as arguments any values needed to compute and
display the following information:

   • The number of ordered spools ready to ship from current stock.
   • The number of ordered spools on backorder (if the number ordered is greater
     than what is in stock).
   • Total selling price of the portion ready to ship (the number of spools
     ready to ship times $100).
   • Total shipping and handling charges on the portion ready to ship.
   • Total of the order ready to ship.

The shipping and handling parameter in the second function should have the default
argument 10.00.

	Input Validation: Do not accept numbers less than 1 for spools ordered. Do not
	accept a number less than 0 for spools in stock or for shipping and handling
	charges.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int &, int &, double &);
void orderStatus(int, int , double);
void numInputError(string, int);

int main()
{
	int 	Ordered,
			InStock;

	double	SpecShipg;

	getData(Ordered, InStock, SpecShipg);

	orderStatus(Ordered, InStock, SpecShipg);

	return 0;
}

/*******************************************************************************
 *                               getData                                       *
 *  This function asks the user for the number of spools order, the number of  *
 *  spools in stock and any special shipping and handling changes. Validates   *
 *  The data and stores the values in reference parameters.                    *
 *******************************************************************************/
void getData(int &Ordered, int &InStock, double &SpecShipg)
{
	cout << "\nThe Middletown Wholesale Copper Wire Order Status Query Form\n"
		 << "------------------------------------------------------------\n";
	do
	{
		cout << "Enter the number of spools ordered: ";
		cin  >> Ordered;

		if(Ordered < 1)
		{
			numInputError("Spools ordered", 1);
		}

	} while (Ordered < 1);

	do
	{
		cout << "Enter the number of spools in stock: ";
		cin  >> InStock;

		if (InStock < 0)
		{
			numInputError("Spools in stock", 0);
		}
	} while (InStock < 0);

	do
	{
		cout << "Enter the amount of any special shipping and handling charges: ";
		cin  >> SpecShipg;

		if(SpecShipg < 0)
		{
			numInputError("Special Shiping", 0);
		}

	} while (SpecShipg < 0);
}

/*******************************************************************************
 *                              orderStatus                                    *
 * This function recieves as arguments any values needed to compute and        *
 * display the number of ordered spools ready to ship from current stock, the  *
 * number of ordered spools on backorder, total selling price of the portion   *
 * ready to ship, total shipping and handing charges on the portion ready to   *
 * ship and the total of the order ready to ship.                              *
 *******************************************************************************/
void orderStatus(int Ordered, int InStock, double SpecShipg)
{
	int 	Ready,
	    	Backorder;

	double	Shipg = 10.0,
	    	TotSellPrice,
	    	TotShipg,
	    	TotOrder;

	cout << "\n\n  The Middletown Wholesale Copper Wire Order Status\n"
	     << "-------------------------------------------------------\n";

	cout << "Number of ordered spools ready to ship from current stock : ";
	if (Ordered > InStock)
	{
		Backorder = Ordered - InStock;
		Ready = InStock;
	    cout << setw(11) << Ready << endl;
		cout << "Number of ordered spools on backorder                     : "
			 << setw(11) << Backorder << endl;
	}
	else 
	{
		Ready = Ordered;
		cout << setw(11) << Ready << endl;
	}

	TotSellPrice = Ready * 100;

	TotShipg = Shipg + SpecShipg;

	TotOrder = TotSellPrice + TotShipg;

	cout << fixed << showpoint << setprecision(2);
	cout << "Total selling price of the portion ready to ship          : $"
	     << setw(10) << TotSellPrice << endl;
	cout << "Total shipping and handling on the portion ready to ship  : $"
         << setw(10) << TotShipg << endl;
    cout << "Total of the order ready to ship                          : $"
         << setw(10) << TotOrder << endl;
}

/*******************************************************************************
 *                              numInputError                                  *
 * This function recieve as argument and item and is validation limit and      *
 * displays then in an error message.                                          *
 *******************************************************************************/
void numInputError(string Item, int Limit)
{
	cout << "Error! Invalid number\n";
	cout << Item << " must be greater than " << Limit << ".\n";
}