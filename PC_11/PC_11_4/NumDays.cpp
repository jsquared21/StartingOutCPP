#include <iostream>
#include "NumDays.h"
using namespace std;

//********************************************************************************
//                              Overloaded operator +                            *
//********************************************************************************
NumDays operator+(NumDays a, NumDays b)
{
	return NumDays(a.Hrs + b.Hrs);
}

//********************************************************************************
//                              Overloaded operator -                            *
//********************************************************************************
NumDays operator-(NumDays X, NumDays Y)
{
	return NumDays(X.Hrs - Y.Hrs);
}

//********************************************************************************
//                           Overloaded prefix ++ operator                       *
//********************************************************************************
NumDays NumDays::operator++()
{
	Hrs += 1.0;
	return *this;
}

//********************************************************************************
//                           Overloaded postfix ++ operator                      *
//********************************************************************************
NumDays NumDays::operator++(int)
{
	Hrs += 1.0;
	return *this;
}

//********************************************************************************
//                           Overloaded prefix -- operator                       *
//********************************************************************************
NumDays NumDays::operator--()
{
	if (Hrs > 1.0)
		Hrs -= 1.0;

	return *this;
}

//********************************************************************************
//                           Overloaded postfix -- operator                      *
//********************************************************************************
NumDays NumDays::operator--(int)
{
	if (Hrs > 1.0)
		Hrs -= 1.0;

	return *this;
}

//********************************************************************************
//                                   setDays                                     *
// This function recieves an integer as its parameter represting the number of   *
// says worked. Converts the value into number of hours worked and stores the    *
// result in the Hrs member variable.                                            *
//********************************************************************************
void NumDays::setDays(double d)
{
	Hrs = (d * 8);
}

//********************************************************************************
//                                   getDays                                     *
// This function converts and returns hours worked in to days worked.            *
//********************************************************************************
double NumDays::getDays()
{
	return (Hrs / 8.0);
}