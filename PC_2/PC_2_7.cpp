/*
Distance per Tank of Gas
A car with a 20 gallon gas tank averages 21.5 miles per gallon when driven in
town and 26.8 miles per gallon when driven on the highway. Write a program that
calculates and displays the distance the car can travel on one tank of gas when
driven in town and when driven on the highway.
*/

// This program displays the distance a car can travel on one tank of gas
// when driven in town and when driven on the highway.
#include <iostream>
using namespace std;

int main()
{
	double FullTank = 20,
		   Town 	= FullTank * 21.5,
		   Highway 	= FullTank * 26.8;

	cout << "On one tank of gas this car can travel a distance of ";
	cout << Town << " mlies in town, or " << Highway << " miles on a highway.";
	return 0;
}