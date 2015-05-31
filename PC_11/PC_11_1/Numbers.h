#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include <string>
using namespace std;

class Numbers
{
	public:
	int number;

	static string lessThan20[ ];
//		{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", 
//		 "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
//		 "sisteen", "seventeen", "eighteen", "nineteen" };
	static string bet20To100[ ]; 
//		{"twenty", "thirty", "forty", "fifty", "sixty",
//		 "seventy", "eightty", "ninety" };
	static string hundred; //"hundred";
	static string thousand; //"thousand";
	//Numbers();
	//{ number = 0; cout << "Creatng an instance Numbers.\n"; }
	Numbers(int);
	void print();
};
#endif