#include <iostream>
#include <string>
#include <vector>
#include "HtmlTbl.h"
using namespace std;

int main()
{
	vector<HtmlTbl> Class;
	int Stud, grade;
	string name;

	cout << "How many student grade are there? ";
	cin  >> Stud;

	for (int i = 0; i < Stud; i++)
	{
		cout << "Student " << (i + 1) << endl;
		cout << " Name : ";
		cin  >> name;
		cout << " Grade: ";
		cin  >> grade;

		HtmlTbl Data(name, grade);
		Class.push_back(Data);
	}

	return 0;
}