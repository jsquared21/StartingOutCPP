/*
String Search
Write a program that asks the user for the name of a file and a string to search for. The program
will search the file for all occurrences of the specified string and display all lines that
contain the string. After all occurrences have been located, the program should report the
number of times the string appeared in the file.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fileName,	// Holds the file name.
		   buffer,		// Holds a line read from file.
		   search;		// Holds the string to be searched for.
	int count = 0;		// Accumulates the number of occurrences of search.		

	// Ask the user for the name of a file
	cout << "Enter the name of a file: ";
	cin  >> fileName;

	// Open and test a file for input.
	fstream file(fileName, ios::in);
	if (!file)
	{
		cout << "Error opening file.\n";
		return 0;
	}

	// Ask the user to enter a string to search for
	cout << "Enter a string to search for in the file \""<< fileName << "\".\n";
	cin  >> search;

	// Search file for all occurences of the specified string 
	// and display all lines that contain the string
	cout << "\nString: " << search << endl;
	cout << "All lines in file that contain the string:\n";
	file.seekg(0, ios::beg);
	while (!file.fail())
	{
		getline(file, buffer);
		if (buffer.find(search,0) < buffer.length())
		{
			cout << buffer << endl;
			count++;
		}
		
	}
	// Report the number of times the string appeared in the file.
	cout << "Numer of times the string appeared in file: " << count << endl;

	file.close();
	return 0;
}