#include <iostream>
#include "EncryptableString.h"
using namespace std;

void EncryptableString::encrypt()
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'z')
		{
			str[i] = 'a';
		}
		else if (str[i] == 'Z')
		{
			str[i] = 'A';
		}
		else
			str[i] = (str[i] + 1);
	}

	cout << str;
}