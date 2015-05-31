// TestGrader.cpp -- TestGrader implementation file.

#include <iostream>
#include <string>
#include <cctype>
#include "TestGrader.h"
using namespace std;

/*******************************************************
 *                      setKey                         *
 * This member function receives a 20-character string *
 * and copies its information into the answers array.  *
 *******************************************************/
void TestGrader::setkey(string str)
{
	for (int i = 0; i < 20; i++)
	{
		answers[i] = str[i];
	}
}

/*******************************************************
 *                       grade                         *
 * The grade function receives a 20-character array    *
 * holding the test taker's answers and compares each  *
 * of their answers to the correct one. The function   *
 * then calculates and displays the results.           *
 *******************************************************/
void TestGrader::grade(char taker[])
{
	int correct = 0;

	for (int i = 0; i < 20; i++)
	{

		if (toupper(taker[i]) == answers[i])
			correct++;
	}

	cout << "\n   Applicant Test Results\n";
	cout << "---------------------------\n";
	cout << "Pass / Fail: ";

	if(correct >= 15)
		cout << "Passed.\n";
	else
		cout << "Failed.\n";

	cout << "Total number of correctly answered questions: " << correct << endl;
	cout << "Total number of incorrectly answered questions: "
		 << (20 - correct) << endl;

	cout << "Question numbers for all incorrectly answered questions:\n";
	for (int i = 0; i < 20; ++i)
	{
		if (toupper(taker[i]) != answers[i])
		{
			cout << (i + 1) << " ";
		}
	}
		cout << endl;
}