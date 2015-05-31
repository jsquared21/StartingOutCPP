/*
File Filter
A file filter reads an input file, transforms it in some way, and writes the results to an output
file. Write an abstract file filter class that defines a pure virtual function for transforming
a character. Create one subclass of your file filter class that performs encryption,
another that transforms a file to all uppercase, and another that creates an unchanged copy
of the original file.

The class should have a member function

	void doFilter(ifstream &in, ofstream &out)

that is called to perform the actual filtering. The member function for transforming a single
character should have the prototype

	char transform(char ch)

The encryption class should have a constructor that takes an integer as an argument and
uses it as the encrytion key.
*/
#include <iostream>
#include <fstream>
#include "filter.h"
using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;
	string inFileName, outFileName;

	// Ask user to enter the names of files to encrypt and decrypt.
	cout << "Enter name of file to filter: ";
	cin  >> inFileName;
	cout << "Enter name of file to receive the filtered text: ";
	cin  >> outFileName;

	inFile.open(inFileName);
	if (!inFile)
	{
		cout << "The file " << inFileName
			 << " cannot be opened.";
		exit(1);
	}
	outFile.open(outFileName);
	if (!outFile)
	{
		cout << "The file " << outFileName
			 << " cannot be opened.";
		exit(1);
	}

	//int key;
	//// Ask user to enter an encrytion key
	//cout << "Enter an encryption key: ";
	//cin  >> key;
//
	//Encrypt test(key);
	//Upper test;
	Copy test;

	test.doFilter(inFile, outFile);

	inFile.close();
	outFile.close();

	return 0;
}