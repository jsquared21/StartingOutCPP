// BinManager.h -- BinManager class specification file
#ifndef BINMANAGER_H
#define BINMANAGER_H
#include "InvBin.h"
#include <string>
#include <iomanip>
using namespace std;

class BinManager
{
private:
	InvBin bin[30]; 							// Array of InvBin objects
	int numBins; 								// Number of bins currently in use
	int search(string);

public:
	BinManager() 								
	{ numBins = 0; }
	BinManager(int size, string d[], int q[]) 	
	{ 	
		numBins = size;
		for (int i = 0; i < size; i++)
		{
			bin[i].setDescription(d[i]);
			bin[i].setQty(q[i]);
		}
	}

	// The class will also have the following public member functions:
	string getDescription(int index) 		
	{ return bin[index].getDescription(); }

	int getQuantity(int index) 				
	{ return bin[index].getQty(); }

	int getQuantity(string);

	//string displayAllBins(); 				
	bool addParts(int binIndex, int q) 		
	{ 

		if (q > 0)
		{
			bin[binIndex].setQty(bin[binIndex].getQty() + q);
			return true;
		}
		return false;
	}
	
	bool addParts(string, int);

	bool removeParts(int binIndex, int q) 	
	{
		if (q <= bin[binIndex].getQty() && q > 0)
		{
			bin[binIndex].setQty(bin[binIndex].getQty() - q);
			return true;
		}
		return false;
	}

	bool removeParts(string, int);										
};
#endif