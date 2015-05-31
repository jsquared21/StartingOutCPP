#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void validDate(string);

int main()
{
	string date;

	cout << "date: ";
	cin >> date;
	validDate(date);

	return 0;

}

void validDate(string date)
{
	cout << "length: " << date.length() << endl;

	if (date.length() != 10)
	{
		cout << "length false\n";
	}
	
	for (int i = 0; i < date.length(); i++)
	{
		if (i == 2 || i == 5)
		{
			if (date[i] != '/')
			{
				cout << i << " / false\n";
			}
			continue;
		}

		if (!isdigit(date[i]))
		{
			cout << i << " " << date[i] << " !isdigit false\n";
		}
		
		cout << i << endl;
	}
	cout << "return true\n";
}