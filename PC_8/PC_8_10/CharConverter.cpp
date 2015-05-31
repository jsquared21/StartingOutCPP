// CharConverter.cpp -- CharConverter implementation file
#include <iostream>
#include <string>
#include <cctype>
#include "CharConverter.h"
using namespace std;

/*************************************************************
 *                      uppercase                            *
 * This member function accepts a string object and returns  *
 * the string with all lowercase letters converted to        *
 * upppercase. If a charater is already uppercase, or is not *
 * a letter, it should be left alone                         *
 *************************************************************/
string CharConverter::uppercase(string Word)
{
	// const int SIZE = Word.length()+1;
	// char Sent[SIZE];
	Length = Word.length()+1;

	for (int i = 0; i < Length; i++)
	{
		if(Word[i] >= 97 && Word[i] <= 122)
			Sent[i] = toupper(Word[i]);
		else
			Sent[i] = Word[i];
	}

	return Sent;
}

/*************************************************************
 *                     properWords                           *
 * This member function accepts a string object consisting   *
 * of words separated by spaces and returns it with the      *
 * first letter of each word converted to uppercase          *
 *************************************************************/
string CharConverter::properWords(string line)
{
	Length = line.length() + 1;

	for (int i = 0; i < Length; i++)
	{
		if(i == 0)
			Sent[i] = toupper(line[i]);
		else if (line[i] == 32)
		{
			Sent[i] = line[i];
			Sent[i + 1] = toupper(line[i + 1]);
			i++; 
		}
		else
			Sent[i] = line[i];
	}

	return Sent;
}