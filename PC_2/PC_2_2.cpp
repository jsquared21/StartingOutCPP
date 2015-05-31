/*
author Jabari James <jabarimail@gmail.com>
squared, Inc., 2014.
copyright 2014 by jsquared
version 0.1

Sales Prediction:
The East Coast sales division of a company generates 62 percent of total sales.
Based on that percentage, write a program that will predict how much the East
Coast division will generate if the company has $4.6 million in sales this year.
Display the result on the screen.
*/

// This program Predicts the annual sales of the East Coast sales division.
#include <iostream>
using namespace std;

int main()
{
	double PoTS 		= .62,
		   CompSales 	= 4600000;
	int    ECSales		= CompSales * PoTS;

	cout << "The East Coast division is predicted to generate $";
	cout << ECSales << " in sales." << endl; 
	return 0;
}