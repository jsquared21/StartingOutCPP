#ifndef PSTRING_H
#define PSTRING_H
#include <string>
using namespace std;

class Pstring : public string
{
	string Str;
public:
	Pstring(string Str): string(Str)
	{this->Str = Str;}
	bool isPalindrome();
};
#endif