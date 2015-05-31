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
void partQty(BinManager &);

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
			case 3 : partQty(Whse);
					break;
			case 4 : displayData(Whse, Bins);
		}

	} while (Task != 4);


	

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
	cout << "   Warehouse bin management menu\n";
	cout << "Enter the a number to perform a task.\n";
	cout << " 1.) Store a part.\n";
	cout << " 2.) Remove a part.\n";
	cout << " 3.) Display quantity of a part stored.\n";
	cout << " 4.) Quit.\n";
	cin >> choice;

	return choice;
}
/********************************************************************************
 *                               storeParts                                     *
 * This function allows parts to be added using the bin number.                 *
 ********************************************************************************/
void storeParts(BinManager &Whse)
{
	int Bin, Ch, Qty;
	string Descrip;
	bool Bool;
	cout << "Choose your method of inputing the part you would like to store.\n";
	cout << " 1. Description.\n";
	cout << " 2. Bin number.\n";
	cin  >> Ch;

	switch (Ch)
	{
		case 1 : cout << "Enter the part's description: ";
				 cin.ignore();
				 getline(cin, Descrip);
				 cout << "Enter the quantity to be added: ";
				 cin  >> Qty;
				 Bool = Whse.addParts(Descrip, Qty);
				 break;
		case 2 : cout << "Enter the part's bin number: ";
				 cin  >> Bin;
				 cout << "Enter the quantity to be added: ";
				 cin  >> Qty;
				 Bin--;
				 Bool = Whse.addParts(Bin, Qty);
	}

	if (Bool)
		cout << "Stored.\n";
	else
		cout << "Error!\n"; 

}

/********************************************************************************
 *                                removeParts                                   *
 * This funciton allows parts to be removed using the bin number.               *
 ********************************************************************************/
void removeParts(BinManager &Whse)
{
	int Bin, Ch, Qty;
	string Descrip;
	bool Bool;
	cout << "Choose your method of inputing the part you would like to remove.\n";
	cout << " 1. Description.\n";
	cout << " 2. Bin number.\n";
	cin  >> Ch;

	switch (Ch)
	{
		case 1 : cout << "Enter the part's description: ";
				 cin.ignore();
				 getline(cin, Descrip);
				 cout << "Enter the quantity to be removed: ";
				 cin  >> Qty;
				 Bool = Whse.removeParts(Descrip, Qty);
				 break;
		case 2 : cout << "Enter the part's bin number: ";
				 cin  >> Bin;
				 cout << "Enter the quantity to be removed: ";
				 cin  >> Qty;
				 Bin--;
				 Bool = Whse.removeParts(Bin, Qty);
	}

	if (Bool)
		cout << "Removed.\n";
	else
	{
			cout << "Error!\n"; 
	}

}
/********************************************************************************
 *                               partQty                                        *           
 ********************************************************************************/
void partQty(BinManager &Whse)
{
	int Qty;
	string Item;
	
	cout << "Enter the item's Name: ";
	cin.ignore();
	getline(cin, Item);

	Qty = Whse.getQuantity(Item);
	if (Qty == -1)
		cout << "Item was not found.\n";
	else
		cout << "Item Name: " << Item << endl;
		cout << "Quantity:  " << Qty << endl;
}
