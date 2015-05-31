/*
Population Bar Chart

Write a program that produces a bar chart showing the population growth of Prairieville,
a small town in the Midwest, at 20 year intervals during the past 100 years. The program
should read in the population figures (rounded to the nearest 1000 people) for 1900,
1920, 1940, 1960, 1980, and 2000 from a file. For each year it should display the date
and a bar consisting of one asterisk for each 1000 people. The data can be found in the
people.dat file.

Here is an example of how the chart might begin:

PRAIRIEVILLE POPULATION GROWTH
(each * represents 1000 people)

1900 **
1920 ****
1940 *****
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream Inputfile;
	Inputfile.open("people.dat");              // Open file
	if (!Inputfile)							   // Test for open errors
		cout << "Error opening file.\n";

	int Pop;  								   // Population

	// Display Population Bar Chart Header
	cout << "PRAIRIEVILLE POPULATION GROWTH\n"
		 << "(each * represents 1000 people)\n\n";

	for (int Year = 1; Year <= 6; Year++)
	{  // One iteration per year
		switch (Year)
		{
			case 1 : cout << "1900 ";
					 break;
			case 2 : cout << "1920 ";
					 break;
			case 3 : cout << "1940 ";
					 break;
			case 4 : cout << "1960 ";
					 break;
			case 5 : cout << "1980 ";
					 break;
			case 6 : cout << "2000 ";
					 break;
		}

		Inputfile >> Pop;					 // Read from file

		Pop /= 1000;        				 // calculate one per 1000 people

		for (int Arisk = 1; Arisk <= Pop; Arisk++)
		{  // Display one asterisk per iteration
		   // One iteration per 1000 people 
			cout << "*";
		}

		cout << endl;
	}
	Inputfile.close(); 						// To close file
	return 0;
}