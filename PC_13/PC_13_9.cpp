/*
Letter Frequencies
The letter e is the most frequently used letter in English prose, and the letter z is the least
frequently used. A friend of yours doing a sociology experiment believes that this may not
necessarily be true of the writings of first-year college students. To test his theory, he asks
you to write a program that will take a text file and print, for each letter of the English
alphabet, the number of times the letter appears in the file.
Hint: Use an integer array of size 128, and use the ASCII values of letters to index into the
array to store and retrieve counts for the letters.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	const int LENGTH = 128;
	int array[LENGTH];
	string fileName;
	char ch;

	for (int k = 0; k < LENGTH; k++)
	{
		array[k] = 0;
	}

	cout << "Enter the name of a text file: ";
	cin  >> fileName;

	fstream inFile(fileName, ios::in);
	if (!inFile)
	{
		cout << "Error opening file.\n";
		return 0;
	}	

	while (!inFile.fail())
	{	
		inFile.get(ch);
		ch = toupper(ch);
		array[ch]++;	
	}

	cout << "The number of time each letter of the English\n"
		 << "alphabet appears in file \"" << fileName << "\":\n";
	//cout << 
	for (int i = 65; i <= 90; i++)
	{
		ch = i;
		cout << ch << ": " << array[i] << endl;
	}
	inFile.close();
	return 0;
}