/*
Inventory Screen Report
Write a program that reads the information in the file created by the program in Programming
Challenge 12. The program should calculate and display the following information:
• The total wholesale value of the inventory
• The total retail value of the inventory
• The total quantity of all items in the inventory
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct Inven
{
	string Desc,		// Item decpription
		   Date;		// Date added to inventory
	int    Qty;			// Quantity on hand
	double WhsleCost,	// Wholesale cost
		   RetailCost;	// Retail cost
};

int main()
{	
	Inven record;
	double Totwhsle  = 0,	// Accumulates total wholesale value 
		   TotRetail = 0;	// Accumulates total Retail value
	int TotQty = 0;			// Accumulates total quantity of all items

	fstream File("inventory.dat", ios::in | ios::binary);
	if (!File)
	{
		cout << "Error open file, aborting program.\n";
		return 0;
	}

	File.read(reinterpret_cast<char *>(&record), sizeof(record));
	while (!File.fail())
	{
		Totwhsle += record.WhsleCost * record.Qty;
		TotRetail += record.RetailCost * record.Qty;
		TotQty += record.Qty;
		File.read(reinterpret_cast<char *>(&record), sizeof(record));
	}
	File.close();
	cout << fixed << showpoint << setprecision(2);
	cout << "Total wholesale value of the inventory:       $"
		 << setw(10) << Totwhsle << endl;
	cout << "Total retail value of the inventory:          $"
		 << setw(10) << TotRetail << endl;
	cout << "Total quantity of all items in the inventory: $"
		 << setw(10) << TotQty << endl;
	return 0;
}