// This program tests the NumDays class by inputting and retrieving values for 
// hours and days.
#include <iostream>
#include "NumDays.h"
using namespace std;

int main()
{
	NumDays EmplA, EmplB, Cal;

	EmplA.setHours(18);
	cout << "Employee A hours worked: " << EmplA.getHours() << endl;

	EmplB.setDays(3.5);
	cout << "Employee B hours worked: " << EmplB.getHours() << endl;

	Cal = EmplB - EmplA;

	cout << "Employee B - Employee A = " << Cal.getHours() << " hours." << endl;

	Cal = EmplA + EmplB;
	
	cout << "Employee A + Employee B = " << Cal.getHours() << " hours." << endl;

	cout << "Employee A days worked: " << EmplA.getDays() << endl;

	cout << "Employee B days worked: " << EmplB.getDays() << endl;

	++EmplA;

	cout << "Increment Employee A using prefix operator: "
		 << EmplA.getHours() << endl;

	EmplB++;

	cout << "Increment Employee B using postfix operator: "
		 << EmplB.getHours() << endl;

	--EmplA;

	cout << "Decrement Employee A using prefix operator: "
		 << EmplA.getHours() << endl;

	EmplB--;

	cout << "Decrement Employee B using postfix operator: "
		 << EmplB.getHours() << endl;


	return 0;
}