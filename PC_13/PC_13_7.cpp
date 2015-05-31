/*
File Encryption Filter
File encryption is the science of writing the contents of a file in a secret code. Your encryption
program should work like a filter, reading the contents of one file, modifying the information
into a code, and then writing the coded contents out to a second file. The second
file will be a version of the first file, but written in a secret code.
Although there are complex encryption techniques, you should come up with a simple one
of your own. For example, you could read the first file one character at a time, and add 10
to the ASCII code of each character before it is written to the second file.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string fileName, encrypt;
	char ch;

	// Ask the user to enter the name of the unencrypted file
	cout << "Enter the name of the file to encrypt: ";
	cin  >> fileName;
	cout << "Enter name for encrypted file: ";
	cin  >> encrypt;

	fstream inFile(fileName, ios::in);
	if (!inFile)
	{
		cout << "Error opening file \"" << fileName << "\".\n";
		return 0;
	}

	fstream outFile(encrypt, ios::out);

	while (!inFile.fail())
	{
		inFile.get(ch);
		ch += 10;
		outFile << ch;
	}

	inFile.close();
	outFile.close();
	return 0;
}