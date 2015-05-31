#include <iostream>
#include <string>
#include <cctype>
#include "TestGrader.h"
using namespace std;

int main()
{
	TestGrader Exam;

	char Test[20];

	char Ans;

	Exam.setkey("BDAACABACDBCDADCCBDA");

	cout << "Enter A, B, C or D to answer each question on the test.\n";

	for (int i = 0; i < 20; i++)
	{	
		do
		{
			cout << " " << (i + 1) << "). ";
			cin  >> Ans;

			Ans = toupper(Ans);

			if (Ans < 'A' || Ans > 'D')
			{
				cout << " Error! Invalid Input\n";
				cout << " Enter A, B, C or D as your answer.\n";
			}

		} while (Ans < 'A' || Ans > 'D');

		Test[i] = Ans;
	}

	Exam.grade(Test);

	return 0;
}