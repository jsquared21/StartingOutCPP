/*
Student Line Up

A teacher has asked all her students to line up single file according to their first name. For
example, in one class Amy will be at the front of the line and Yolanda will be at the end.
Write a program that prompts the user to enter the number of students in the class, then
loops to read in that many names. Once all the names have been read in it reports which
student would be at the front of the line and which one would be at the end of the line.
You may assume that no two students have the same name.

	Input Validation: Do not accept a number less than 1 or greater than 25 for the number
	of students.
*/
#include <iostream>
using namespace std;

int main()
{
	int	   Roll;
	string Name,
		   Front,
		   End;

	// Ask user to enter the number of students in the class.
	cout << "\nThis program reports which student would be at the front of\n"
		 << "the line and which one would be at the end of the line.\n\n"
		 << "How many students are in the class? ";
	cin  >> Roll;

	while (Roll < 1 || Roll > 25)
	{
		cout << "\nError!\nThe number of students in the class must\n"
			 << "be greater than 1 or less than 25.\n\n"
			 << "How many students are in the class? ";
		cin  >> Roll;
	}

	cout << "Enter the first name of a student: ";
	cin  >> Name;

	Front = End = Name;

	for (int Count = 1; Count < Roll; Count++)
	{
		cout << "Enter the first name of the next student: ";
		cin  >> Name;

		if (Name > End)
			End = Name;
		if (Name < Front)
			Front = Name;

	}

	cout << endl << Front << " is at the front of the line and\n"
		 << End << " is at the end of the line.\n";

	return 0;
}