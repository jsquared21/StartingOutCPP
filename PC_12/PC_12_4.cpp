/*
Average Number of Letters
Modify the program you wrote for problem 3 (Word Counter), so it also displays the average
number of letters in each word.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Function prototype
double avgLetters(char *);

const int LENGTH = 100;

int main()
{
	char Input[LENGTH];

	// Ask the user to input a string
	cout << "Enter a string: ";
	cin.getline(Input, LENGTH);

	cout << "Average number of letters in each word of the string\n\"" 
		 << Input << "\": " << avgLetters(Input) << endl;

	return 0;
}

//********************************************************************************
// avgLetters                                                                    *
// This function accepts a C-string as an argument and returns the average       *
// number of letter in each word contained in the string.                        *
//********************************************************************************
double avgLetters(char *Str)
{
	int word = 0, letter = 0;

	for (int i = 0; i < strlen(Str); i++)
	{
		if ((Str[0] != '\0' && i == 0) || isspace(Str[i]))
			word++;
		if (isalpha(Str[i]))
			letter++;
	}
	return letter / word;
}