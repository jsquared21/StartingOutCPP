/*
The Speed of Sound

The speed of sound varies depending on the medium through which it travels. In general,
sound travels fastest in rigid media, such as steel, slower in liquid media, such as water, and
slowest of all in gases, such as air. The following table shows the approximate speed of
sound, measured in feet per second, in air, water, and steel.

______________________________________________________________
 Medium                      Speed (feet per sec.)
______________________________________________________________
 Air                          1,100
 Water                        4,900
 Steel                       16,400
______________________________________________________________

Write a program that displays a menu allowing the user to select air water, or steel. After
the user has made a selection, the number of feet a sound wave will travel in the selected
medium should be entered. The program will then display the amount of time it will take.
(Round the answer to four decimal places.)

	Input Validation: Check that the user has selected one of the available menu choices.
	Do not accept distances less than 0.
*/
	
#include <iostream>
#include <iomanip>
using namespace std;

enum Medium { Air = 1, Water, Steel };

int main()
{
	int Choice;
	double Distance,
		   Time;

	cout << "This program calculate the number of feet a\n"
	     << "sound wave will travel in the selected medium\n";
	cout << "Select a medium from the following menu:\n";
	cout << "1 = Air\n";
	cout << "2 = Water\n";
	cout << "3 = Steel\n";
	cin  >> Choice;
	cout << "Enter the number of feet the sound wave will travel:\n";
	cin  >> Distance;

	if (Distance < 0)
		cout << "Error! Distance must be greater than zero.\n";
	else
		switch (Choice)
		{
			case Air   : Time = Distance * 1100;
					   	 cout << "A sound wave traveling though Air to a\ndistances of "
					   	      << Distance << " feet will take "
					   	      << fixed << showpoint << setprecision(4) << Time << " seconds.\n";
					   	      break;
			
			case Water : Time = Distance * 4900;
					     cout << "A sound wave traveling though water to a\ndistances of "
					          << Distance << " feet will take "
					          << fixed << showpoint << setprecision(4) << Time << " seconds.\n";
					          break;
			
			case Steel : Time = Distance * 16400;
					     cout << "A sound wave traveling though steel to a\ndistances of "
					          << Distance << " feet will take "
					          << fixed << showpoint << setprecision(4) << Time << " seconds.\n";
					          break;
			
			default	   : cout << "Invalid Menu Choice!\nPlease enter a choice from the menu.\n";  
		}
	return 0;
}