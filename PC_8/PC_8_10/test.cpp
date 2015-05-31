#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	string word;
	char ch;
	//char sentence[SIZE];

	cout << "Enter word: ";
	getline(cin, word);

	const int SIZE = word.length() + 1;
	char upper[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		if (i == 0)
			upper[i] = toupper(word[i]);
		else if (word[i] == 32)
		{
			upper[i] = word[i];
			upper[i+1] = toupper(word[i+1]);
			i++;
		}
		else
			upper[i] = word[i];
	}

	cout << upper; // << "\0" 
	cout << endl;


	return 0;

}