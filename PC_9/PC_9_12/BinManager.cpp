#include <iostream>
#include <string>
#include "BinManager.h"
using namespace std;

// Function prototype

/******************************************************************************
 *                           addParts overloaded                              *
 ******************************************************************************/

bool BinManager::addParts(string itemDecription, int q)
{
	int binIndex;

	if(q > 0)
	{
		binIndex = search(itemDecription);
		if (binIndex == -1)
			return false;
		else
		{
			bin[binIndex].setQty(bin[binIndex].getQty() + q);
			return true;
		}
	}
	return false;	
}	

/******************************************************************************
 *                            removeParts overloaded                          *
 ******************************************************************************/
bool BinManager::removeParts(string itemDecription, int q)
{
	int binIndex;

	if(q > 0)
	{
		binIndex = search(itemDecription);
		if (binIndex == -1)
			return false;
		else
		{
			bin[binIndex].setQty(bin[binIndex].getQty() - q);
			return true;
		}
	}
	return false;
}

/******************************************************************************
 *                                   search                                   *
 ******************************************************************************/
int BinManager::search(string value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < 30 && !found)
	{
		if (bin[index].getDescription() == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

/******************************************************************************
 *                             getQuantity overloaded                         *
 ******************************************************************************/
 int BinManager::getQuantity(string itemDecription)
 {
 	int binIndex;

 	binIndex = search(itemDecription);
 	if (binIndex == -1)
 		return binIndex;
 	
 	return bin[binIndex].getQty();
 }