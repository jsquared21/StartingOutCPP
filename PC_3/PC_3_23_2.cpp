// Using Files--Storing and Retrieving Numbers
// This program opens, reads and displays the
// file created by program 1.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile;				// To define ifstream object.
	inFile.open("PC_3_23.txt");		// To open the file.

	float Num1,
		  Num2,
		  Num3,
		  Num4,
		  Num5,
		  Sum;
		  	
	// Read five flooting-point numbers
	// from file and display them.
	inFile >> Num1;
	cout << "Number1: " << Num1 << endl;

	inFile >> Num2;
	cout << "Number2: " << Num2 << endl;

	inFile >> Num3;
	cout << "Number3: " << Num3 << endl;

	inFile >> Num4;
	cout << "Number4: " << Num4 << endl;

	inFile >> Num5;
	cout << "Number5: " << Num5 << endl;

	// Calculate the sum of the five numbers
	Sum = Num1 + Num2 + Num3 + Num4 + Num5;
	
	// Display the sum of the five numbers.
	cout << fixed << showpoint;
	cout << "Sum of the five numbers: " << Sum << endl;


	// To close file.
	inFile.close();
	cout << "\nSaved to file.\n";
	return 0;
	
}