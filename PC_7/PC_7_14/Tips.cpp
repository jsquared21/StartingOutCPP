// Tips.cpp -- Tips implementation file
#include <iostream>
#include "Tips.h"
using namespace std;


Tips::Tips(double tr)
{
	if (tr < 0)
		taxRate = 0.065;
	else 
		taxRate = tr;
}

double Tips::computeTip(double totBill, double tipRate)
{
	return (totBill / (1 + taxRate)) * tipRate;
}