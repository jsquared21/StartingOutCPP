#include <iostream>
#include <fstream>
#include <cctype>
#include "filter.h"
using namespace std;

//********************************************************************************
// doFilter                                                                      *
// This function accepts an ifstream and a ofstream object as its parameters.    *
// Read an input file, transforms it and writes the results to an output file.   *
//********************************************************************************
void AbstractFilter::doFilter(ifstream &in, ofstream &out)
{
	char ch;
	in.get(ch);
	while (!in.fail())
	{
		//ch = transform(ch);
		out.put(transform(ch));
		in.get(ch);
	}
}

//********************************************************************************
// Encrypt::transform                                                            *
// This polymorphic function accepts a character ch as its parameter adds the    *
// integer value key to ch and returns it.                                       *
//********************************************************************************
char Encrypt::transform(char ch)
{
	ch += key;
	return ch;
}

//********************************************************************************
// Upper::transform                                                              *
// This polymorphic function accepts a character ch as its parameter and returns *
// its uppercase equivalent.                                                     *
//********************************************************************************
char Upper::transform(char ch)
{
	ch = toupper(ch);
	return ch;
}

//********************************************************************************
// Copy::transform                                                               *
// This polymorphic function accepts a character as its parameter and returns it.* 
//********************************************************************************
char Copy::transform(char ch)
{
	return ch;
}

//********************************************************************************
// DoubleSpaces::transform                                                       *
// This polymorphic function accepts a character as its parameter. Checks if     *
// the character is a newline character and if true, it returns an extra newline *
// character.                                                                    *
//********************************************************************************
void DoubleSpaces::doFilter(ifstream &in, ofstream &out)
{
	char ch;
	in.get(ch);
	while (!in.fail())
	{
		if (ch == '\n')
			out.put(transform(ch));
		
		out.put(transform(ch));
		in.get(ch);
	}
}

char DoubleSpaces::transform(char ch)
{
	return ch;
}
