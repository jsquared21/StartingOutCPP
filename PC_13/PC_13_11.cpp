/*
Corporate Sales Data Input
Write a program that reads the information in the file created by the program in Programming
Challenge 9. The program should calculate and display the following figures:
	• Total corporate sales for each quarter
	• Total yearly sales for each division
	• Total yearly corporate sales
	• Average quarterly sales for the divisions
	• The highest and lowest quarters for the corporation
*/
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
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
 	double TotCorpQtr[LENGTH] = {0,0,0,0}; 	// Total corporate sales for each quarter
 	double TotYrDiv, 						// Total yearly sales for each division
 		   TotYrCorp, 						// Total yearly corporate sales
 		   Highest,
 		   Lowest;

 	TotYrCorp = TotYrDiv = 0;

 	fstream File("salefigures.txt", ios::in | ios::binary);
 	if (!File)
 	{
 		cout << "Error opening file. Program aborting.\n";
 		return 0;
 	}

 	// Display sales figures.
 	cout << fixed << showpoint << setprecision(2);
 	cout << "\nCorporate Sales Data Report\n"
 		 << "---------------------------\n";
 	cout << "\nTotal sales by division:\n";
 	for (int d = 0; d < LENGTH; d++)
 	{
 		File.read(reinterpret_cast<char *>(&Sales), sizeof(Sales));
 		cout << Sales.Division[d] << ":\n";
 		cout << "  Total yearly Sales: $";
 		for (int q = 0; q < LENGTH; q++)
 		{
 			TotYrDiv += Sales.Qtr[q];
 			TotCorpQtr[q] += Sales.Qtr[q];
 		}
 		cout << TotYrDiv << endl;
 		cout << "  Average quarterly sales: $" << TotYrDiv/4 << endl;
 		TotYrCorp += TotYrDiv;
 	}
 	cout << "\nTotal corporate sales for each quarter:\n";
 	for (int i = 0; i < LENGTH; i++)
 	{
 		cout << "Quarter " << (i + 1) << ": $" << TotCorpQtr[i] << endl;
 	}

 	cout << "\nTotal yearly corporate sales: $" << TotYrCorp << endl;

 	Highest = Lowest = TotCorpQtr[0];

 	for (int i = 1; i < LENGTH; i++)
 	{
 		if (TotCorpQtr[i] > Highest)
 			Highest = TotCorpQtr[i];

 		if (TotCorpQtr[i] < Lowest)
 			Lowest = TotCorpQtr[i];
 	}

 	cout << "The highest quarter for the corporation: " << Highest << endl;
 	cout << "The lowest quarter for the corporation: " << Lowest << endl;

 	File.close();
 	return 0;
}