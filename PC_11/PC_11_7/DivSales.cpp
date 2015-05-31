#include "DivSales.h"

// Definition for the static member of the DivSales class.
double DivSales::CorpSales = 0.0;

//********************************************************************************
//                               steQtrSales                                     *
// This function takes four arguments, each assumed to be the sales for a        *
// quarter. The value of the arguments are copied into the Sales array. The      *
// total of the four arguments is added to CorpSales.                            *
//********************************************************************************
bool DivSales::setQtrSales(double a, double b, double c, double d)
{
	if (a >= 0 && b >= 0 && c >= 0 && d >= 0)
	{
		Sales[0] = a;
		Sales[1] = b;
		Sales[2] = c;
		Sales[3] = d;
	
		for (int i = 0; i < 4; i++)
		{
			CorpSales += Sales[i];
		}
		return true;
	}
	
	return false;
}
