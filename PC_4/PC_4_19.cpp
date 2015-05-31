/*
Long-Distance Calls

A long-distance carrier charges the following rates for telephone calls between the United
States and Mexico:
__________________________________________________________________________________________
 Starting Time of Call 				Rate per Minute
__________________________________________________________________________________________ 
 00:00–06:59							$0.12
 07:00–19:00							 0.55
 19:01–23:59							 0.35
__________________________________________________________________________________________

Write a program that asks for the starting time and the number of minutes of the call, and
displays the charges. The program should ask for the time to be entered as a floating-point
number in the form HH.MM. For example, 07:00 hours will be entered as 07.00, and
16:28 hours will be entered as 16.28.
	
	Input Validation: The program should not accept times that are greater than 23:59.
	Also, no number whose last two digits are greater than 59 should be accepted.
	Hint: Assuming num is a floating-point variable, the following expression will give you
	its fractional part:
	
	num - static_cast<int>(num)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float StartTime, Length, Mins, Hrs, Charges, StartMins, LengthInMins;


	// Ask user for the starting time and the number of minutes of the call.
	cout << "This program calculates your long-distance telephone charges.\n";
	cout << "Enter the starting time of the call as a floating-point number\n"
		 << "in the form HH.MM: ";
	cin  >> StartTime;
	cout << "Enter the number of minutes of the call in the form HH.MM: ";
	cin  >> Length;

	Hrs = static_cast<int>(Length);
	Mins = Length - static_cast<int>(Length);
	LengthInMins = (Hrs * 60) + (Mins * 100);
	StartMins = StartTime - static_cast<int>(StartTime);

	if (Mins <= .59 && StartMins <= .59)
	{
		cout << fixed << showpoint << setprecision(2);
		if (StartTime >= 00.00 && StartTime <= 06.59)
		{
			Charges = LengthInMins * 0.12;
			cout << "Cost of call: $" << Charges << endl;
		}
		else if (StartTime <= 19.00)
		{
			Charges = LengthInMins * 0.55;
			cout << "Cost of call: $" << Charges << endl;
		}
		else if (StartTime <= 23.59)
		{
			Charges = LengthInMins * 0.35;
			cout << "Cost of call: $" << Charges << endl;
		}
		else
			cout << "Error! Call times cannot be less than\n00.00 minutes"
		         << " or greater than 23.59 minutes.\n";
	}
	else
		cout << "Error! Last two digts in the numbers"
			 << " must be less than 59.\n";
	return 0;
}