#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Function prototype
void reverse(char *);
void lower(char *);
void upper(char *);

const int LENGTH = 101;

int main()
{
	char List[LENGTH];

	cout << "Enter a string no longer than " << LENGTH - 1 << " characters:\n";
	cin.getline(List, LENGTH);

	reverse(List);
	cout << "Reverse: " << List << endl;

	lower(List);
	cout << "Lower: " << List << endl;

	upper(List);
	cout << "Upper: " << List << endl;

	return 0;
}

//********************************************************************************
// upper                                                                         *
// This function accepts a C-string as an argument. It steps through all the     *
// characters in the string, converting each to uppercase.                       *
//********************************************************************************
void upper(char *array)
{
	for (int i = 0; i < strlen(array); i++)
	{
		array[i] = toupper(array[i]);
	}
}

//********************************************************************************
// lower                                                                         *
// This function accepts a pointer to a C-string as an argument. It steps        *
// through all the characters in the string, conberting each to lowercase.       *
//********************************************************************************
void lower(char *array)
{
	for (int i = 0; i < strlen(array); i++)
	{
		array[i] = tolower(array[i]);
	}
}

//********************************************************************************
// reverse                                                                       *
// This function accepts a C-string as an argument. It steps through all the     *
// characters in the string testing each character to determine whether it is    *
// uppercase or lowercase. If a character is uppercase, it is converted to       *
// lowercase. If a character is lowercase it is converted to uppercase.          *
//********************************************************************************
void reverse(char *array)
{
	for (int i = 0; i < strlen(array); i++)
	{
		if (isupper(array[i]))
			array[i] = tolower(array[i]);
		else if (islower(array[i]))
				array[i] = toupper(array[i]);
	}
}