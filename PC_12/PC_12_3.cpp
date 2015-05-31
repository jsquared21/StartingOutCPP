/*
Word Counter
Write a function that accepts a C-string as an argument and returns the number of words
contained in the string. For instance, if the string argument is “Four score and seven years
ago” the function should return the number 6. Demonstrate the function in a program that
asks the user to input a string and then passes it to the function. The number of words in
the string should be displayed on the screen.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int wordCount(char *);

const int LENGTH = 100;

int main()
{
	char Input[LENGTH];

	// Ask the user to input a string
	cout << "Enter a string: ";
	cin.getline(Input, LENGTH);

	cout << "Number of words in \"" << Input << "\": " << wordCount(Input) << endl;

	return 0;
}

//********************************************************************************
// wordCount                                                                     *
// This function accepts a C-string as an argument and returns the number of     *
// words contained in the string.                                                *
//********************************************************************************
int wordCount(char *Str)
{
	int count = 0;

	for (int i = 0; i < strlen(Str); i++)
	{
		if ((Str[0] != '\0' && i == 0) || Str[i] == ' ')
		{
			count++;
		}
	}
	return count;
}