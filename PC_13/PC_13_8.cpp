/*
File Decryption Filter
Write a program that decrypts the file produced by the program in Programming Challenge 7.
The decryption program should read the contents of the coded file, restore the information
to its original state, and write it to another file.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string ecrypted, decrypt;
	char ch;

	// Ask user to enter the name of file to decrypt
	cout << "Enter name of file to decrypt: ";
	cin  >> ecrypted;

	fstream inFile(ecrypted, ios::in);
	if (!inFile)
	{
		cout << "Error opening file \"" << ecrypted << "\".\n";
		return 0;
	}

	cout << "Enter name for decrypted file: ";
	cin  >> decrypt;
	fstream outFile(decrypt, ios::out);

	while (!inFile.fail())
	{
		inFile.get(ch);
		ch -= 10;
		outFile << ch;
	}

	inFile.close();
	outFile.close();
	return 0;
}