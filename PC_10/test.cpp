#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	time_t epSes;
	tm *pCalTime; // Pointer to calendar time
	string month[] = {"January", "February", "March", "April",
					  "May", "June", "July", "August", "September",
					  "October", "November", "December"
					 };

	epSes = time(NULL);
	pCalTime = localtime(&epSes);

	cout << pCalTime->tm_mon << endl;
}