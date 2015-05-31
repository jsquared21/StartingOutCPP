/*
Personal Best

Write a program that asks for the name of a pole vaulter and the dates and vault heights (in
meters) of the athlete’s three best vaults. It should then report in height order (best first),
the date on which each vault was made, and its height.

	Input Validation: Only accept values between 2.0 and 5.0 for the heights.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Name, Date1, Date2, Date3;
	double Height1, Height2, Height3;

	// Input pole vaulter name, dates and vault heights.
	cout << "This program ranks a pole vaulter's jumps by height!\n";
	cout << "What is the name of the pole vaulter? ";
	cin  >> Name;
	cout << "Enter the date of " << Name << "'s first jump: ";
	cin  >> Date1;
	cout << "What was " << Name << "'s vault height in meters on " << Date1 << ": ";
	cin  >> Height1;
	cout << "Enter the date of " << Name << "'s second jump: ";
	cin  >> Date2;
	cout << "What was " << Name << "'s vault height in meters on " << Date2 << ": ";
	cin  >> Height2;
	cout << "Enter the date of " << Name << "'s third jump: ";
	cin  >> Date3;
	cout << "What was " << Name << "'s vault height in meters on " << Date3 << ": ";
	cin  >> Height3;

	// Calculate and output rankings
	if (Height1 >= 2.0 && Height1 <= 5.0 && Height2 >= 2.0 && Height2 <= 5.0
		&& Height3 >= 2.0 && Height3 <= 5.0)
	{
		cout << Name << "'s Vault Heights Rankings Report\n";
		cout << "   (ranked by hightest 1st)    \n";
		cout << "________________________________________________________\n";
		if(Height1 > Height2 && Height1 > Height3)
			if(Height2 > Height3)
			{
				cout << Height1 << " meters on " << Date1 << endl;
				cout << Height2 << " meters on " << Date2 << endl;
				cout << Height3 << " meters on " << Date3 << endl;
			}
			else
			{
				cout << Height1 << " meters on " << Date1 << endl;
				cout << Height3 << " meters on " << Date3 << endl;
				cout << Height2 << " meters on " << Date2 << endl;
			}
		else if(Height2 > Height1 && Height2 > Height3)
			if(Height1 > Height3)
			{
				cout << Height2 << " meters on " << Date2 << endl;
				cout << Height1 << " meters on " << Date1 << endl;
				cout << Height3 << " meters on " << Date3 << endl;
			}
			else
			{
				cout << Height2 << " meters on " << Date2 << endl;
				cout << Height3 << " meters on " << Date3 << endl;
				cout << Height1 << " meters on " << Date1 << endl;
			}
		else
			if(Height1 > Height2)
			{
				cout << Height3 << " meters on " << Date3 << endl;
				cout << Height1 << " meters on " << Date1 << endl;
				cout << Height2 << " meters on " << Date2 << endl;
			}
			else
			{
				cout << Height3 << " meters on " << Date3 << endl;
				cout << Height2 << " meters on " << Date2 << endl;
				cout << Height1 << " meters on " << Date1 << endl;
			}
	}
	else
	{
		cout << "Invalid height! Height values must be between 2.0 and 5.0 meters\n\n";
	}
	return 0;
}