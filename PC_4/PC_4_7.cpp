/*
Time Calculator

Write a program that asks the user to enter a number of seconds.

• There are 86400 seconds in a day. If the number of seconds entered by the user is
  greater than or equal to 86400, the program should display the number of days in
  that many seconds.
• There are 3600 seconds in an hour. If the number of seconds entered by the user is
  less than 86400, but is greater than or equal to 3600, the program should display the
  number of hours in that many seconds.
• There are 60 seconds in a minute. If the number of seconds entered by the user is less
  than 3600, but is greater than or equal to 60, the program should display the number
  of minutes in that many seconds.
*/

#include <iostream>
using namespace std;

int main()
{
	const unsigned int  SEC_IN_DAY = 86400,
						SEC_IN_HR  = 3600,
						SEC_IN_MIN = 60;
	
	unsigned int Days, Hours, Minutes, Seconds;

	// Ask the user to enter a number of seconds.
	cout << "Enter a number of seconds: ";
	cin  >> Seconds;

	// Calculate and display the number of days, hours, minutes and seconds.
	if (Seconds >= SEC_IN_DAY)
	{
		Days = Seconds / SEC_IN_DAY;
		cout << "There is " << Days << " days in " << Seconds << " seconds.\n";
	}
	else if (Seconds >= SEC_IN_HR)
	{
		Hours = Seconds / SEC_IN_HR;
		cout << "There is " << Hours << " hours in " << Seconds << " seconds.\n";
	}
	else if (Seconds >= SEC_IN_MIN)
	{
		Minutes = Seconds / SEC_IN_MIN;
		cout << "There is " << Minutes << " minutes in " << Seconds << " seconds.\n";
	}
	return 0;
	}