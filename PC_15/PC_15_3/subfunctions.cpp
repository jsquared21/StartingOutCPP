#include <iostream>
#include "subfunctions.h"
using namespace std;

//********************************************************************************
// fun                                                                           *
// This function accepts an integer as its parameter and returns an odd number.  *
//******************************************************************************** 
int Odds::fun(int k)
{
	return 2 * k + 1;
}

//********************************************************************************
// fun                                                                           *
// This function accepts an integer as its parameter and returns an odd number.  *
//******************************************************************************** 
int LeapYr::fun(int k)
{
	return k * 4;
}
