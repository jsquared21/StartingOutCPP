#ifndef NUMDAYS_H
#define NUMDAYS_H
#include <iostream>
using namespace std;

class NumDays
{
	int Hrs;  // Number of work hours

public:
	NumDays()
	{ Hrs = 0; }
	NumDays(int Hrs)
	{ this->Hrs = Hrs; }
	void setHours(int Hrs)
	{ this->Hrs = Hrs; }
	int getHours()
	{ return Hrs;}
	void setDays(double);
	double getDays();
	friend NumDays operator+(NumDays, NumDays);
	friend NumDays operator-(NumDays, NumDays);
	NumDays operator++();
	NumDays operator++(int);
	NumDays operator--();
	NumDays operator--(int);
};
#endif