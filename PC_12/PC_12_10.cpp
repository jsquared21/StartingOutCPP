#include <iostream>
#include <string>
using namespace std;

string replaceSubstring(string, string, string);

int main()
{
	string Str1, Str2, Str3;

	cout << "Enter a sentence:\n";
	getline(cin, Str1);

	cout << "Enter a word you would like to replace:\n";
	getline(cin, Str2);

	cout << "Enter the word you would like to replace \"" << Str2 << "\" with:\n";
	getline(cin, Str3);

	cout << "Edited sentence:\n" << replaceSubstring(Str1, Str2, Str3) << endl;

	return 0;
}

//*********************************************************************************
// replaceSubstring                                                               *
// This function accepts three string object argument, string1, string2, and      *
// string3. Searches string1 for all occurrences of string2. When it finds an     *
// occurrence of string2, it replaces it with string3. This function returns the  *
// edited string.                                                                 * 
//*********************************************************************************
string replaceSubstring(string Str1, string Str2, string Str3)
{
	int index, i = 0, count;
	
	while (Str1.find(Str2, i) < Str1.length())
	{	
		index = Str1.find(Str2, i);
		Str1.erase(index, Str2.length());
		Str1.insert(index, Str3);
		i+= Str3.length();
	}
		
	return Str1;
}