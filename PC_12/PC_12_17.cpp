/*
User Name
Write a program that queries its environment, determines the user’s login name, and then
greets the user by name. For example, if the login name of the user is gcm, then the program
prints
	Hello, gcm
when it is executed.
*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	extern char **environ;
	char *strPtr;
	string user, welcome = "Hello, ";


	int k = 0;
	while (environ[k] != 0)
	{
		strPtr = strstr(environ[k], "USER");
		if (strPtr != NULL)
			break;
		k++;
	}

	if (strPtr != NULL)
		user = environ[k];

	user.erase(0,5);

	cout << welcome + user << endl;

	return 0;
}