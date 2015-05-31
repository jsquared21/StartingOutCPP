/*
Employee Tree
Design an EmployeeInfo class that holds the following employee information:

	Employee ID Number: an integer
	Employee Name: a string

Implement a binary tree whose nodes hold an instance of the EmployeeInfo class. The
nodes should be sorted on the Employee ID number.
Test the binary tree by inserting nodes with the following information.
*/
#include <iostream>
#include "BinaryTree.h"
#include <string>
#include <vector>
using namespace std;

int main()
{
	BinaryTree comp;
	string result;
	int input;

	comp.insert(1021, "John Williams");
	comp.insert(1057, "Bill Witherspoon");
	comp.insert(2487, "Jennifer Twain");
	comp.insert(3769, "Sophia Lancaster");
	comp.insert(1017, "Debbie Reece");
	comp.insert(1275, "George McMullen");
	comp.insert(1899, "Ashley Smith");
	comp.insert(4218, "Josh Plemmons");

	do 
	{
		cout << "\nEnter an Employee ID Number\n";
		cout << "or enter -1 to exit program: ";
		cin >> input;

		if (input != -1)
		{
			result = comp.search(input);
			if (result == "Error")
				cout << result << ": Employee ID not found.\n";
			else
				cout << "Employee name: " <<result << endl;
		}

	} while (input != -1);
	return 0;
}