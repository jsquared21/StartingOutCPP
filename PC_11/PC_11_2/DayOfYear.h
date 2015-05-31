#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{
	int Day;
	static string Month[];
public:
	DayOfYear(int);
	void print();
};
#endif
