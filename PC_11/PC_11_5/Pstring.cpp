#include "Pstring.h"
#include <string>
using namespace std;

bool Pstring::isPalindrome()
{ 
	int first = 0,
		last = Str.length() -1;
	bool IsPal;

	for (int i = 0; i < Str.length(); i++)
	{
		IsPal = false;
		if (Str[first] == Str[last])
			IsPal = true;
		if (IsPal == false)
			break;
		first++;
		last--;
	} 
	return IsPal;
}