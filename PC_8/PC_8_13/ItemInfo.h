// ItemInfo.h -- ItemInfo class specification file
#ifndef ITEMINFO_H
#define ITEMINFO_H
#include <string>
using namespace std;


// Structure that holds data members
struct ItemInfo
{
	string Name;			// Holds the name of items
	double Price;			// Hokds the Price of items
	int InStock;			// Holds the number of items in stock

	// Default constructor overloaded 0 arguments
	ItemInfo()
	{ Name = " "; Price = 0.0; InStock = 0; }

	// Default constructor overloaded 3 arguments
	ItemInfo(string a, double p, int i)
	{ Name = a; Price = p; InStock = i; }
};
#endif