#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int LENGTH = 11;
	// array of at least 10 sting objects that hold
	// people's names and phone numbers.
	string List[] = { "Becky Warren, 678-1223",
					  "Joe Looney, 586-0097",
					  "Geri Palmer, 223-8787",
					  "Lynn Presnell, 887-1212",
					  "Holly Gaddis, 223-8878",
					  "Sam Wiggins, 486-0998",
					  "Bob Kain, 586-8712",
					  "Tim Haynes, 586-7676",
					  "Warren Gaddis, 223-9037",
					  "Jean James, 678-4939",
					  "Ron Palmer, 486-2783"};

	string Name;	// Holds name or partial name to search for.

	// Ask the user to enter a name or partial name to search for in the array.
	cout << "Enter the name or partial name of the\n"
		 << "person you would like to search for: ";
	cin  >> Name;

	// Search for the string Name in the array List. Any
	// entries in the array that match Name are displayed.
	cout << "\nSearch results for name \"" << Name << "\":\n";
	for (int i = 0; i < LENGTH; i++)
	{
		if (List[i].find(Name) < List[i].length())
		{
			cout << List[i] << endl;
		}
	}

	return 0;
}