/*
File Previewer
Write a program that asks the user for the name of a text file. The program should display
the first 10 lines of the file on the screen. If the file has fewer than 10 lines, the entire file
should be displayed along with a message indicating the entire file has been displayed.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename, buffer;
	int count = 10; 

	// Ask the user for the name of a text file.
	cout << "Enter the name of a text file: ";
	cin  >> filename;

	fstream infile(filename, ios::in);
	if (!infile)
	{
		cout << "Error opening file.\n";
		return 0;
	}

	for (int i = 0; i < count; ++i)
	{
		if (!infile)
		{
			cout << "The entire file has been displayed.\n";
			break;
		}
		else
		{
			getline(infile, buffer);
			cout << buffer << endl;
		}
	}
	infile.close();
	return 0;

}