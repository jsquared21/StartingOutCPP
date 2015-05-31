/*
Name Arranger
Write a program that asks for the user’s first, middle, and last names. The names should be
stored in three different character arrays. The program should then store in a fourth array
the name arranged in the following manner: the last name followed by a comma and a
space, followed by the first name and a space, followed by the middle name. For example,
if the user entered “Carol Lynn Smith”, it should store “Smith, Carol Lynn” in the
fourth array. Display the contents of the fourth array on the screen.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int LENGTH = 100;

int main()
{
	char First[LENGTH], Middle[LENGTH], Last[LENGTH], Name[LENGTH];

	// Ask for user's first, middle and last name.
	cout << "Enter your name: ";
	cin  >> First >> Middle >> Last;

	strcpy(Name, Last);
	strcat(Name, ", ");
	strcat(Name, First);
	strcat(Name, " ");
	strcat(Name, Middle);

	cout << Name << endl;

	return 0;
}