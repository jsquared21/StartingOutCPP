/*
File Display Program
Write a program that asks the user for the name of a file. The program should display the
contents of the file on the screen. If the file’s contents won’t fit on a single screen, the program
should display 24 lines of output at a time, and then pause. Each time the program
pauses, it should wait for the user to type a key before the next 24 lines are displayed.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fileName, buffer;
	char key;
	int count = 0;
	// Ask the user for the name of a text file.
	cout << "Enter the name of a text file: ";
	cin  >> fileName;

	fstream file(fileName, ios::in);
	if (!file)
	{
		cout << "Error opening file.\n";
		return 0;
	}
	while (getline(file, buffer))
	{
		count++;
		cout << buffer << endl;
		if (count % 24 == 0)
		{
			cin.ignore();
			cin.get(key);
		}
	}

	return 0;

}