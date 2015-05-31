// CharConverter.h -- CharConverter class specification file.
#ifndef CHARCONVERTER_H
#define CHARCONVERTER_H

#include <string>
using namespace std;

class CharConverter
{
	private:
		int Length;
		char Sent[];
	public:
		string uppercase(string);
		string properWords(string);
};
#endif