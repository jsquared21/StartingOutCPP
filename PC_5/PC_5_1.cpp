/*
Characters for the ASCII Codes
Write a program that uses a loop to display the characters for each ASCII code 32 through
127. Display 16 characters on each line with one space between characters.
*/
#include <iostream>
using namespace std;

int main()
{
	int Test,  						 	// Initialzation of variable for the test 
		Begin = 32;					 	// Initialzation of the Begin to 32

	for (int Row = 0; Row < 6; Row++)	// Outter loop to make 6 rows
	{
		Test = Begin + 16; 				// 16 character on each line
		for(int ASCII = Begin; ASCII < Test; ASCII++)
		{
			cout << static_cast<char>(ASCII) << " ";
		}
		Begin = Test; 					// Start new row one character than last line
		cout << endl;
	}
	return 0;
}