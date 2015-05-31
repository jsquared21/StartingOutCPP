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
	int numBins; 								// Number of bins
												// currently in use

public:
	BinManager() 								// Default constructor
	{ numBins = 0; }
	BinManager(int size, string d[], int q[]) 	// 3-parameter constructor
	{ 	// Receives number of bins in use and parallel arrays of item names
		// and quantities. Uses this info. to store values in the elements
		// of the bin array. Remember, these elements are InvBin objects.
		numBins = size;
		for (int i = 0; i < size; i++)
		{
			bin[i].setDescription(d[i]);
			bin[i].setQty(q[i]);
		}
	}

	// The class will also have the following public member functions:
	string getDescription(int index) 		// Returns name of one item
	{ return bin[index].getDescription(); }

	int getQuantity(int index) 				// Returns qty of one item
	{ return bin[index].getQty(); }

	//string displayAllBins(); 				// Returns string having one line
											// for each item
	bool addParts(int binIndex, int q) 		// These return true if the
	{ 

		if (q > 0)
		{
			bin[binIndex].setQty(bin[binIndex].getQty() + q);
			return true;
		}
		return false;
	}
	
	bool removeParts(int binIndex, int q) 	// action was done and false
	{
		if (q <= bin[binIndex].getQty() && q > 0)
		{
			bin[binIndex].setQty(bin[binIndex].getQty() - q);
			return true;
		}
		return false;
	}										// if it could not be done—
											// see validation information
};
#endif