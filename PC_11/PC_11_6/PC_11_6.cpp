#include <iostream>
#include "EncryptableString.h"
using namespace std;

int main()
{
	string input;


	cout << "Enter a string and this program will encrypt it: ";
	cin  >> input;

	EncryptableString test = input;

	test.encrypt();
	cout << endl;

	return 0;
}