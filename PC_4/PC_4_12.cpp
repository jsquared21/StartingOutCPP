/*
Running the Race

Write a program that asks for the names of three runners and the time it took each of them
to finish a race. The program should display who came in first, second, and third place.
Think about how many test cases are needed to verify that your problem works correctly.
(That is, how many different finish orders are possible?)

	Input Validation: Only accept positive numbers for the times.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Runner1;
	string Runner2;
	string Runner3;
	double RunTime1, RunTime2, RunTime3;

	// Ask user for runners names and times
	cout << "To calculate the placement of the runners\n"
	     << "Input the requested information.\n";
	cout << "What is the name of the fist runner? ";
	cin  >> Runner1;
	cout << "How long did " << Runner1 << " take to finish the race? ";
	cin  >> RunTime1;
	cout << "What is the name of the second runner? ";
	cin  >> Runner2;
	cout << "How long did " << Runner2 << " take to finish the race? ";
	cin  >> RunTime2;
	cout << "What is the name of the third runner? ";
	cin  >> Runner3;
	cout << "How long did " << Runner3 << " take to finish the race? ";
	cin  >> RunTime3;

	if (RunTime1 > 0 && RunTime2 > 0 && RunTime3 > 0)
		if (RunTime1 < RunTime2 && RunTime1 < RunTime3)
			if (RunTime2 < RunTime3)
			{
				cout << "First place : " << Runner1 <<endl;
				cout << "Second place: " << Runner2 <<endl;
				cout << "Third place : " << Runner3 <<endl;
			}
			else 
			{
				cout << "First place : " << Runner1 <<endl;
				cout << "Second place: " << Runner3 <<endl;
				cout << "Third place : " << Runner2 <<endl;
			}
		else if (RunTime2 < RunTime1 && RunTime2 < RunTime3)
			if (RunTime1 < RunTime3)
			{
				cout << "First place : " << Runner2 <<endl;
				cout << "Second place: " << Runner1 <<endl;
				cout << "Third place : " << Runner3 <<endl;
			}
			else
			{
				cout << "First place : " << Runner2 <<endl;
				cout << "Second place: " << Runner3 <<endl;
				cout << "Third place : " << Runner1 <<endl;
			}
		else 
			if (RunTime1 < RunTime2)
			{
				cout << "First place : " << Runner3 <<endl;
				cout << "Second place: " << Runner1 <<endl;
				cout << "Third place : " << Runner2 <<endl;
			}
			else
			{
				cout << "First place : " << Runner3 <<endl;
				cout << "Second place: " << Runner2 <<endl;
				cout << "Third place : " << Runner1 <<endl;
			}
	else
		cout << "Invalid time input! Times can not be less than zero.\n"
	         << "Please run the program again with valid time values.\n";
	return 0;
}