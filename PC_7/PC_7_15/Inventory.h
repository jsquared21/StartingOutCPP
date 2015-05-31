// Inventory.h -- Inventory class specification file
#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
	private:
		int 	itemNumber,		// Hold teh item's number.
				quantity;		// Holds the quantity of the item onhand.
		double 	cost,			// The wholesale per-unit cost of the item.
				totalCost;		// Holds the total inventory cost of the item 
								// (calculated as quantity times cost).	
	public:
		// default constructor sets all the member variables to 0.
		Inventory()
		{ itemNumber = 0; quantity = 0; cost = 0; totalCost = 0; }

		Inventory(int, int, double);

		void setItemNumber(int&);

		void setQuantity(int&);
		
		void setCost(double&);
		
		void setTotalCost()
		{	totalCost = quantity * cost; }
		
		int getItemNumber()		// Returns the value in itemNumber
		{ return itemNumber; }
		
		int getQuantity()		// Returns the value in quantity
		{ return quantity; }

		double getCost()		// Returns the value in cost
		{ return cost; }

		double getTotalCost()	// Returns the value in total cost
		{ return totalCost; }
};
#endif