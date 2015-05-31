#include <iostream>
#include "Inventory.h"
#include <iomanip>
using namespace std;

int main()
{
	int Item, Quantity;
	double Cost;

	Inventory iphone6;

	cout << "\n    iPhone6 Cost Of Goods Sold Report wizard!\n"
		 << "----------------------------------------------------\n";
	cout << "Input the inventory information for beginning of the month.\n";
	cout << "Enter the iphone6 Item Number: ";
	cin  >> Item;
	iphone6.setItemNumber(Item);

	cout << "Enter the quantity of the iphone6 Item# "
		 << iphone6.getItemNumber() << " onhand: ";
	cin  >> Quantity;
	iphone6.setQuantity(Quantity);	
	
	cout << "Enter the wholesale per-unit cost of the iphone6 Item# "
		 << iphone6.getItemNumber() << ": ";
	cin  >> Cost;
	iphone6.setCost(Cost);

	cout << "Enter the quantity of iPhone6 Item# " << iphone6.getItemNumber();
	cout << " purchased during the month: ";
	cin  >> Quantity;
	Quantity += iphone6.getQuantity();
	iphone6.setQuantity(Quantity);

	cout << "Enter the quantity of iPhone6 Item# " << iphone6.getItemNumber();
	cout << " onhand at the end of the month: ";
	cin  >> Quantity;
	Quantity = iphone6.getQuantity() - Quantity;
	iphone6.setQuantity(Quantity);


	

	cout << "\n               iPhone6\n"
		 << "        Cost Of Goods Sold Report\n";
	cout <<"-------------------------------------------\n";

	cout << fixed << showpoint << setprecision(2);
	cout << "Item number              : "  << iphone6.getItemNumber() << endl;
	cout << "Quantity Sold            : "  << iphone6.getQuantity() << endl;
	cout << "Cost per-unit Sold       : $" << setw(10)
		 << iphone6.getCost() << endl;
	cout << "Total cost of goods sold : $" << setw(10)
	 	 << iphone6.getTotalCost() << endl;

	return 0;
}