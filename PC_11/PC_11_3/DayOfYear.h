#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{
private:
	int Day;
	static string Month[];
public:
	DayOfYear(int);
	DayOfYear(string, int);
	void print();
	DayOfYear operator++();
	DayOfYear operator++(int);
	DayOfYear operator--();
	DayOfYear operator--(int);
};
#endif
