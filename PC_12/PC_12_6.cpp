#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int Length = 100;

int countVowels(char *);
int countConsonants(char *);

int main()
{
	char List[Length],
		 choice;		// Holds menu user input.


	// Ask the user to enter a string
	cout << "Enter a string of no more than "
		 << Length-1 << " characters:\n";
	cin.getline(List, Length);

	do
	{
		cout << "               Program menu\n";
		cout << "A) Count the number of vowels in the string\n";
		cout << "B) Count the number of consonants in the string\n";
		cout << "C) Count both the vowels and consonants in the string\n";
		cout << "D) Enter another string\n";
		cout << "E) Exit the program\n";
		cin  >> choice;
		choice = toupper(choice);

		switch (choice)
		{
			case 'A' : cout << "There are " << countVowels(List)
							<< " vowels in the string:\n"
							<< List << endl;
						break;
			case 'B' : cout << "There are " << countConsonants(List)
							<< " consonants in the string:\n"
							<< List << endl;
					    break;
			case 'C' : cout << "There are "
							<< (countVowels(List) + countConsonants(List))
							<< " consonants and vowels in the string\n"
							<< List << endl;
						break;
			case 'D' : cout << "Enter another string of no more than "
		 					<< Length-1 << " characters:\n";
		 				cin.ignore();
		 			   cin.getline(List, Length);
		}

		
	} while (choice != 'E');
}

//********************************************************************************
// countVowels                                                                   *
// This function accepts a C-string as its argument. The function counts the     *
// number of vowels appearing in the string and returns that number.             *
//********************************************************************************
int countVowels(char *Ch)
{
	int count = 0;

	for (int i = 0; i < strlen(Ch); i++)
	{
		if (toupper(Ch[i]) == 'A' || 
			toupper(Ch[i]) == 'E' ||
			toupper(Ch[i]) == 'I' ||
			toupper(Ch[i]) == 'O' ||
			toupper(Ch[i]) == 'U'
		   )
			count++;
	}
	return count;
}

//********************************************************************************
// countConsonants                                                               *
// This function accepts a C-string as its argument. The function counts the     *
// number of consonants appearing in the string and returns that number.         *
//********************************************************************************
int countConsonants(char *Ch)
{
	int count = 0;

	for (int i = 0; i < strlen(Ch); i++)
	{
		if (isalpha(Ch[i]))
			count++;
	}

	return count - countVowels(Ch);
}