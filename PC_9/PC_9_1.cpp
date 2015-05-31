/*
Write a program that lets the user enter a charge account number. The program should
determine if the number is valid by checking for it in the following list:

	5658845 4520125 7895122 8777541 8451277 1302850
	8080152 4562555 5552012 5050552 7825877 1250255
	1005231 6545231 3852085 7576651 7881200 4581002
	
Initialize a one-dimensional array with these values. Then use a simple linear search to
locate the number entered by the user. If the user enters a number that is in the array, the
program should display a message saying the number is valid. If the user enters a number
not in the array, the program should display a message indicating it is invalid.
*/
#include <iostream>
using namespace std;

// Function prototypes
int searchList(int[], int, int);

int main()
{
	const int ACCTS = 18;

	int List[ACCTS] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
						8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
						1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

	int AcctNum, 
		Result;

	// Ask the user to enter a number
	cout << "Enter your charge account number to determine if it is valid: ";
	cin  >> AcctNum;

	Result = searchList(List, ACCTS, AcctNum);
	if(Result == -1)
		cout << "Account number " << AcctNum << " is invalid.\n";
	else
		cout << "Account number " << List[Result] << " is valid\n";

	return 0;
}

/**********************************************************************
 *                              searchList                            *
 **********************************************************************/
int searchList(int list[], int size, int value)
{
	
	int index = 0,
	 	position = -1;
	bool found = false;

	while (!found && index < size)
	{
		if (list[index] == value)		// If the value is found
		{
			found = true;				// Set the flag	}
			position = index;
		}
		index++;
	}
	return position;
}