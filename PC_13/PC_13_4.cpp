/*
Tail of a File
Write a program that asks the user for the name of a text file. The program should display
the last 10 lines of the file on the screen (the “tail” of the file). If the file has less than 10
lines, the entire file is displayed, with a message that the entire file has been displayed. The
program should do this by seeking to the end of the file and then backing up to the tenth
line from the end.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fileName, buffer;
	int count = 0;
	char ch;

	// Ask the user for the name of a text file.
	cout << "Enter the name of a text file: ";
	cin  >> fileName;
	fstream file(fileName, ios::in);

	if (!file)
	{
		cout << "Error opening file.\n";
		return 0;
	}

	for (long i = 0; count <= 10; i++)
	{
		file.seekg(-1 * i, ios::end);
		ch = file.get();
		if (ch == '\n')
		{
			count++;
		}
	}
	file.seekg(0, ios::cur);
	getline(file, buffer);
	cout << buffer << endl;
	return 0;
}