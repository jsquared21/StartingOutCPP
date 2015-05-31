/*
The Speed of Sound in Gases

When traveling through a gas, the speed of sound depends primarily on the density of the
medium. The less dense the medium, the faster the speed will be. The following table
shows the approximate speed of sound at 0 degree celsius, measured in meters per second,
when traveling through carbon dioxide, air, helium, and hydrogen.
_______________________________________________________________________________________
 Medium                       Speed (meters per sec.)
_______________________________________________________________________________________
 Carbon dioxide               258.0
 Air                          331.5
 Helium                       972.0
 Hydrogen                     1270.0
_______________________________________________________________________________________

Write a program that displays a menu allowing the user to select one of these 4 gases. After
a selection has been made, the user should enter the number of seconds it took for the
sound to travel in this medium from its source to the location at which it was detected. The
program should then report how far away (in meters) the source of the sound was from the
detection location.

	Input Validation: Check that the user has selected one of the available menu choices.
	Do not accept times less than 0 seconds or more than 30 seconds.
*/

#include <iostream>
using namespace std;

	enum Medium { CarbonDioxide = 1, Air, Helium, Hydrogen };

int main()
{
	int Choice;
	double Time,
		   Distance;

	// Display menu and ask user to choice a medim and input time
	cout << "This program calculates how far away the\n"
	     << "source of a sound was from the dection location.\n";
	cout << "Select one of the gases from the menu:\n";
	cout << "1 = Carbon dioxide\n";
	cout << "2 = Air\n";
	cout << "3 = Helium\n";
	cout << "4 = Hydrogen\n";
	cin  >> Choice;
	cout << "How many seconds did it take for the sound to\n"
	     << "travel from its source to the detection location.\n";
	cin  >> Time;

	if (Time < 0 || Time > 30)
	{
		cout << "Invalid time!\nPlease enter a time " 
			 << "within the range of 0 to 30 seconds.\n\n";
	}
	else
	{
		switch (Choice)
		{
			case CarbonDioxide : Distance = Time * 258.0;
								 cout << "The source of the sound was " 
								      << Distance << " meters away.\n\n";
								 break;

			case Air           : Distance = Time * 331.5;
								 cout << "The source of the sound was "
								 	  << Distance << " meters away.\n\n";
								 break;

			case Helium        : Distance = Time * 972.0;
								 cout << "The source of the sound was "
								      << Distance << " meters away.\n\n";
								 break;

			case Hydrogen      : Distance = Time * 1270.0;
								 cout << "The source of the sound was "
								 	  << Distance << " meters away.\n\n";
								 break;

			default            : cout << "Invalid Choice!\n"
									  << "Please enter a valid menu choice.\n\n";
		}
	}
	return 0;
}