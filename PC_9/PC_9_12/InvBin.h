// InvBin.h -- InvBin class specification file.
#ifndef INVBIN_H
#define INVBIN_H
#include <string>
using namespace std;

class InvBin
{
private:
	string description; 						// Item name
	int qty; 									// Quantity of items
												// in this bin
public:
	InvBin (string d = "empty", int q = 0) 		// 2-parameter constructor
	{ description = d; qty = q; } 				// with default values

	// It will also have the following public member functions. They will
	// be used by the BinManager class, not the client program.
	void setDescription(string d)
	{ description = d; }
	string getDescription()
	{ 	string d;
		d = description;
		return d;
	}
	void setQty(int q)
	{ qty = q;}
	int getQty()
	{ return qty;}
};
#endif