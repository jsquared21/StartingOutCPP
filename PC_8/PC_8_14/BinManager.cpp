#include <iostream>
#include <string>
#include <cstring>
#include "BinManager.h"
using namespace std;

string BinManager::displayAllBins() 				// Returns string having one line
{
	 const int NUM = 9;
	 char name1[NUM];
 
	 for (int i = 0; i < numBins; i++)
	 {
	 	name1[i] = getDescription(i);
	 }
	

	return name1;
}	