// Using Files--Storing and Retrieving Numbers
// This program asks the user to enter five floating-point numbers
// and creates a file where it saves all five numbers.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outputFile;			    // Define ofstream object.
	outputFile.open("PC_3_23.txt");     // Open file.

	float Num1, Num2, Num3, Num4, Num5;

	// Ask the user to enter five floating-point numbers.
	cout << "Please enter five floating-point numbers separated by spaces:\n";
	cin  >> Num1 >> Num2 >> Num3 >> Num4 >> Num5;
	
	// Write the five floating-point numbers to file.
	outputFile << Num1 << endl << Num2 << endl << Num3 << endl;
	outputFile << Num4 << endl << Num5 << endl;

	// Close the file
	outputFile.close();
	cout << "Done.\n";
	return 0;
}