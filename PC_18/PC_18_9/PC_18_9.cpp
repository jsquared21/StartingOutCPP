/*
File Reverser
Write a program that opens a text file and reads its contents into a stack of characters. The
program should then pop the characters from the stack and save them in a second text file.
The order of the characters saved in the second file should be the reverse of their order in
the first file.
*/
#include <iostream>
#include <fstream>
#include "CharStack.h"
using namespace std;

int main()
{
	CharStack stack;
	char ch;

	ifstream inputFile;
	ofstream outputFile;

	inputFile.open("letters.txt");
	if (!inputFile)
	{
		cout << "The file cannot be opened.\n";
		exit(1);
	}
	while (inputFile.get(ch))
	{
		stack.push(ch);
	}
	inputFile.close();

	outputFile.open("testoutput.txt");
	if (!outputFile)
	{
		cout << "The file cannot be opened.\n";
		exit(1);
	}
	while (!stack.isEmpty())
	{
		stack.pop(ch);
		outputFile.put(ch);
	}
	outputFile.close();
	return 0;
}