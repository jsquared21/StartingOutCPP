/*
Sales Bar Chart

Write a program that asks the user to enter today’s sales rounded to the nearest $100 for
each of three stores. The program should then display a bar graph comparing each store’s
sales. Create each bar in the graph by displaying a row of asterisks. Each asterisk should
represent $100 of sales.

Here is an example of the program’s output. User input is shown in bold.

Enter today’s sales for store 1: 1000[Enter]
Enter today’s sales for store 2: 1200[Enter]
Enter today’s sales for store 3: 900[Enter]

	DAILY SALES
  (each * = $100)
Store 1: **********
Store 2: ************
Store 3: *********

	Input Validation: Do not accept sales figures less than $0.00.
*/
#include <iostream>
using namespace std;

int main()
{
	int Store1, Store2, Store3;


	// Ask user to enter days sales rounded to the nearest $100
	cout << "To generate today's Sales Bar Chart, enter the\n"
		 << "sales for each store rounded to the nearest $100.\n\n";

	do
	{
		cout << "Enter today’s sales for sotre 1: ";
		cin  >> Store1;

		if (Store1 < 0)
			cout << "Error! Sales figures must be greater than $0.00.\n";

	}while (Store1 < 0);

	do
	{
		cout << "Enter today’s sales for sotre 2: ";
		cin  >> Store2;

		if (Store2 < 0)
			cout << "Error! Sales figures must be greater than $0.00.\n";

	}while (Store2 < 0);

	do
	{
		cout << "Enter today’s sales for sotre 3: ";
		cin  >> Store3;

		if (Store3 < 0)
			cout << "Error! Sales figures must be greater than $0.00.\n";

	}while (Store3 < 0);

	Store1 /= 100;
	Store2 /= 100;
	Store3 /= 100;

	cout << "\n    DAILY SALES\n  (each * = $100)\n"
		 << "Store 1: ";

	for (int i = 0; i < Store1; ++i)
	{
		cout << "* ";
	}
	cout << "\nStore 2: ";

	for (int i = 0; i < Store2; ++i)
	{
		cout << "* ";
	}
	cout << "\nStore 3: ";

	for (int i = 0; i < Store3; ++i)
	{
		cout << "* ";
	}
	cout << endl;

	return 0;
}