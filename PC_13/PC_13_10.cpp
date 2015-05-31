/*
Corporate Sales Data Output
Write a program that uses a structure to store the following information on a company
division:
Division name (such as East, West, North, or South)
Quarter (1, 2, 3, or 4)
Quarterly sales
The user should be asked for the four quarters’ sales figures for the East, West, North, and
South divisions. The information for each quarter for each division should be written to a
file.
Input Validation: Do not accept negative numbers for any sales figures.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int LENGTH = 4;

struct CorpData
{
	static string Division[LENGTH];
	double Qtr[LENGTH];
	double QtrlySales;
};

string CorpData::Division[LENGTH] = {"East", "West", "North", "South"};

int main()
{
 	CorpData Sales;

 	fstream File("salefigures.txt", ios::out | ios::binary);
 	if (!File)
 	{
 		cout << "Error opening file. Program aborting.\n";
 		return 0;
 	}

 	// Ask user for the four quarters'  sales figures   
 	// for the East, West, North, and South divisions.
 	cout << "Enter the quarterly sales figures for each of the divisions:\n";
 	for (int d = 0; d < LENGTH; d++)
 	{
 		cout << Sales.Division[d] << "Division:\n";
 		for (int q = 0; q < LENGTH; q++)
 		{
 			do
 			{
 				cout << "Quarter " << (q + 1) << ": ";
 				cin  >> Sales.QtrlySales;	

 				if (Sales.QtrlySales < 0)
 					cout << "Sales figures must be greater than 0.\n";

 			} while (Sales.QtrlySales < 0);
 			Sales.Qtr[q] = Sales.QtrlySales;
 		}
 		File.write(reinterpret_cast<char *>(&Sales), sizeof(Sales));
 	}

 	File.close();
 	return 0;
}