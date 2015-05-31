// PC_8_14.cpp -- PC_8_14 Client Program
#include <iostream>
#include "BinManager.h"
#include <iomanip>
using namespace std;

// Function Prototypes
void displayData(BinManager, int);
int displayMenu();
void storeParts(BinManager &);
void removeParts(BinManager &);

int main()
{
	string Names[] = {"Regular pliers", "N. nose pliers", "screwdriver",
					   "P. head screw driver", "Wrench-large", "Wrench-small",
					   "Drill", "Cordless drill", "Hand saw"};

	int Qty[] = {25, 5, 25, 6, 7, 18, 51, 16, 12};

	int Bins = 9;

	BinManager Whse(Bins, Names, Qty);

	int Task;

	cout << "  Warehouse bin management program ";

	displayData(Whse, Bins);

	do
	{
		Task = displayMenu();
	
		switch (Task)
		{
			case 1 : storeParts(Whse);
					break;
			case 2 : removeParts(Whse);
					break;
			case 3 : displayData(Whse, Bins);
					
		}

	} while (Task != 3);


	return 0;
}

/********************************************************************************
 *                             displayData                                      *
 * This function displays current bin data                                      *
 ********************************************************************************/
void displayData(BinManager Whse, int Bins)
{
	cout << "\n      Warehouse current bin data\n";
	cout << " Bin      Item Name            Quantity\n";
	cout << "---------------------------------------\n";
	for (int i = 0; i < Bins; ++i)
	{
		cout << " " << left << "#" << (i + 1) << "     " << setw(22)
			 << Whse.getDescription(i) << "   "
			 << Whse.getQuantity(i) << endl;
		
	}
	cout << endl;
}

/********************************************************************************
 *                             displayMenu                                      *
 * This function displays a menu and get and validates the user's choice.       *
 ********************************************************************************/
int displayMenu()
{
	int choice;
	cout << "  Warehouse bin management menu\n";
	cout << " 1.) Place parts in a bin.\n";
	cout << " 2.) Remove parts from a bin.\n";
	cout << " 3.) Quit.\n"
	cout << "Enter the a number from the menu to perform its task: ";
	cin >> choice;

	return choice;
}
/********************************************************************************
 ********************************************************************************/
void storeParts(BinManager &Whse)
{
	int Bin, Qty;
	bool Bool;
	cout << "Enter the bin number of the part you would like to store.\n";
	cin  >> Bin;
	cout << "Enter the quantity of the part being stored.\n";
	cin  >> Qty;

	Bin--;
	Bool = Whse.addParts(Bin, Qty);

	if (Bool)
		cout << "Stored.";
	else
		cout << "Error! Quantity of parts added must be greater than 0\n"; 

}

/********************************************************************************
 ********************************************************************************/
void removeParts(BinManager &Whse)
{
	int Bin, Qty;
	bool Bool;
	cout << "Enter the bin number of the part you would like to remove.\n";
	cin  >> Bin;
	cout << "Enter the quantity of the part being removed.\n";
	cin  >> Qty;

	Bin--;
	Bool = Whse.removeParts(Bin, Qty);

	if (Bool)
		cout << "Removed.";
	else
	{
		if (Qty < 0)
			cout << "Error! Quantity of parts added must be greater than 0\n"; 
		else
			cout << "Error! You cannot remove more items\n"
				 << "from a bin than it currently holds\n";
	}

}

