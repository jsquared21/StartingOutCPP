/*
File Double Spacer
Create a subclass of the abstract filter class of Programming Challenge 5 that double spaces
a file: that is, it inserts a blank line between any two lines of the file.
*/
#include <iostream>
#include <fstream>
#include "filter.h"
using namespace std;

int main()
{
	string inFileName, outFileName;
	ifstream inFile;
	ofstream outFile;

	// Ask the user to enter name of file to filter
	cout << "Enter the name of file to filter: ";
	cin  >> inFileName;
	// Ask the user to enter name of file to receive filtered text
	cout << "Enter the name of file to receive filtered text: ";
	cin  >> outFileName;

	inFile.open(inFileName);
	if(!inFile)
	{
		cout << "Error opening file " << inFileName << endl;
		exit(1);
	}
	outFile.open(outFileName);
	if(!outFile)
	{
		cout << "Error opening file " << outFileName << endl;
		exit(1);
	}

	DoubleSpaces test;
	test.doFilter(inFile, outFile);

	inFile.close();
	outFile.close();
	return 0;
}