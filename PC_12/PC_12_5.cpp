/*
Write a function that accepts a C-string as an argument and capitalizes the first character of
each sentence in the string. For instance, if the string argument is “hello. my name is Joe.
what is your name?” the function should manipulate the string so it contains “Hello. My
name is Joe. What is your name?” Demonstrate the function in a program that asks the
user to input a string and then passes it to the function. The modified string should be displayed
on the screen.
*/
#include <iostream>
#include <string>
using namespace std;

string capFirst(char *);

const int LENGTH = 100;

int main()
{
	char Input[LENGTH];

	// Ask user to enter a string
	cout << "Enter a sentence.\n";
	cin.getline(Input, LENGTH);

	cout << capFirst(Input) << endl;
}

//******************************************************************************
// capFirst                                                                    *
// This function accepts a C-string as an argument and capitalizes the first   *
// character of each sentence in the string and returns it.                    *
//******************************************************************************
string capFirst(char *Str)
{
	for (int i = 0; i < strlen(Str); i++)
	{
		if(ispunct(Str[i]) || i == 0)
		{
		   if (isalpha(Str[i]))
		   {
		   		Str[i] = toupper(Str[i]);
		   }
		   
		   if(isspace(Str[i+1]))
		   {
		   	  Str[i+2] = toupper(Str[i+2]);
		   	  i += 2;
		   }
		}
	}
	return Str;
}