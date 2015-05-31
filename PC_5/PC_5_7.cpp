/*
Pennies for Pay

Write a program that calculates how much a person earns in a month if the salary is one
penny the first day, two pennies the second day, four pennies the third day, and so on
with the daily pay doubling each day the employee works. The program should ask the
user for the number of days the employee worked during the month and should display a
table showing how much the salary was for each day worked, as well as the total pay
earned for the month. The output should be displayed in dollars with two decimal
points, not in pennies.

	Input Validation: Do not accept a number less than 1 or more than 31 for the number
	of days worked.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Day,
		Worked,
		DailyPay = 1,
		Total = 0;

	// Ask user the number of days the employee works
	cout << "How many days did the employee work? ";
	cin  >> Worked;


	cout << "\nTable showing how much the\n"
		 << "salary was for each day worked:\n\n" 
		 << "   Day         Salary\n"
	     << "--------------------------\n";

	for(Day = 1; Day <= Worked; Day++)
	{
		
		cout << right << setw(5) << Day;
		cout << left << fixed << showpoint << setprecision(2)
		     << "           " << "$" << DailyPay << endl;
		Total += DailyPay;
		DailyPay *= 2;
	}
	cout << "\nTotal month's pay: $" << Total << endl;
	return 0;
}