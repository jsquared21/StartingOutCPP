#include <iostream>
#include <string>
#include "CharConverter.h"
using namespace std;

// Function prototype
void convertWord(CharConverter);
void convertSent(CharConverter);

int main()
{
	CharConverter str;
	int choice;


	cout << "\n    Character Converter Program Menu.\n";

	do
	{
		cout << "Plese choose one of the following options.\n"
			 << " 1: Convert the lower case characters in a word to uppercase.\n"
			 << " 2: Convert the first letter of each word in a sentence to\n"
			 << "    uppercase.\n"
			 << " 3: Exit the program\n";
		cin  >> choice;

		switch(choice)
		{
			case 1 : convertWord(str);
					 break;
			case 2 : convertSent(str);
					 break;
			case 3 : cout << "Exiting...\n";
		}

		if (choice < 1 || choice > 3)
		{
			cout << "Error! Invalid choice.\n";
		}

		cout << endl;

	} while (choice != 3);


	return 0;
}
void convertWord(CharConverter str)
{
	string w;

	cout << "\nEnter a word: ";
	cin  >> w;
	cout << "Your word before converting: " << w << endl;
	cout << "Your word after converting : " << str.uppercase(w) << endl;
	getchar();
}

void convertSent(CharConverter str)
{
	string w;
	
	cout << "\nEnter a sentence:\n";
	getchar();
	getline(cin, w);
	cout << "Your sentence before converting: " << w << endl;
	cout << "Your sentence after converting : " << str.properWords(w) << endl;
	cout << "Press enter to continue.\n";
	getchar();
}
