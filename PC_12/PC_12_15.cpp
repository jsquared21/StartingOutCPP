/*
Digit Sums of Squares and Cubes
If you add up all the digits in 468, you get 4 + 6 + 8 = 18. The square and cube of 468 are
219024 and 102503232, respectively. Interestingly, if you add up the digits of the square
or cube, you get 18 again. Are there other integers that share this property? Write a program
that lists all positive integers k less than 1000 such that the three numbers k, k2, and
k3 have digits that add up to the same number.
*/
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int sumDigits(int);

int main()
{
	int k2, k3;


	cout << "List of all positive integers k less than 1000 such that the three\n"
		 << "numbers k, k2, and k3 have digits that add up to the same number:\n";
	for (int k = 0; k < 1000; k++)
	{
		k2 = pow(k, 2);
		k3 = pow(k, 3);
		if (sumDigits(k) == sumDigits(k2) &&
			sumDigits(k2) == sumDigits(k3))
			cout << k << " ";
	}

	cout << endl;
	return 0;
}

int sumDigits(int Digit)
{
	ostringstream ostr;
	int num, Sum = 0;
	string temp;
	ostr << Digit;
	string Str = ostr.str();
	for (int i = 0; i < Str.length(); i++)
	{
		temp = Str[i];
		istringstream istr(temp);
		istr >> num;
		Sum += num;
	}
	return Sum;
}