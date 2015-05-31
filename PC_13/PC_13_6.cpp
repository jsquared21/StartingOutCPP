/*
Sentence Filter
A program that processes an input file and produces an output file is called a filter. Write
a program that asks the user for two file names. The first file will be opened for input and
the second file will be opened for output. (It will be assumed that the first file contains
sentences that end with a period.) The program will read the contents of the first file and
change all the letters other than the first letter of sentences to lowercase. First letter of
sentences should be made uppercase. The revised contents should be stored in the second
file.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string unfmat,	// Holds unformatted file name
		   fmat,	// Holds formattted file name
		   line;
	//const int LENGTH = 100;
	char ch;
	int p, t;

	// Ask the user for two file names.
	cout << "Enter the name of the unformatted file: ";
	cin  >> unfmat;
	cout << "Enter to name of the formatted file: ";
	cin  >> fmat;

	fstream inFile(unfmat, ios::in);
	if (!inFile)
	{
		cout << "Error opening file \"" << unfmat << "\".";
		return 0;
	}
	fstream outFile(fmat, ios::out);

	inFile.clear();
	inFile.seekg(0, ios::beg);
	outFile.seekp(0, ios::beg);
	p = inFile.tellg();

	while (!inFile.fail())
	{
		t = inFile.tellg();
		getline(inFile, line);
		for (int i = 0; i < line.length(); i++)
		{
			if(p == t)
			{
				if (isalpha(line[0]))
				{
					line[0] = toupper(line[0]);
				}
				if (isspace(line[0]))
				{
					line[1] = toupper(line[1]);
				}
			}
			else if (line[i] == '.')
			{
				if (isalpha(line[i]))
				{
					line[i] = toupper(line[i]);
				}

				if (isspace(line[i+1]))
				{
					line[i+2] = toupper(line[i+2]);
					i += 2;
				}
			}
			else
				line[i] = tolower(line[i]);
		}
		outFile << line;
	}

	inFile.close();
	outFile.close();
	return 0;
}