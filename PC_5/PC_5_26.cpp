/*
Using Files—Student Line Up

Modify the Student Line Up program described in Programming Challenge 13 so that it
gets the names from a data file. Names should be read in until there is no more data to
read. Data to test your program can be found in the LineUp.dat file.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string Name,								// Name of student
		   Front,								// Front of line
		   End;									// End of line

	ifstream InputFile;							// Define ifstream object

	cout << "\nThis program reports which student would be at the front of\n"
		 << "the line and which one would be at the end of the line.\n"
		 << "When lined up in single file according to their first name.\n";

	InputFile.open("LineUp.dat"); 				// To open file
	if (!InputFile)								// Check for errors
		cout << "Error openning file!\n";
	else
	{
		InputFile >> Name;						// Read first name
		Front = End = Name;						

		while (!InputFile.eof()) 				// Read till end of file
		{ // To sort students by name
			if (Name > End)
				End = Name;
			if (Name < Front)
				Front = Name;
	
			InputFile >> Name; 					// Read next student
		}
	}
	
	// Display the student at the front of the line
	// and which is at the back of the line.
	cout << endl << Front << " is at the front of the line."
		 << End << " is at the end of the line.\n";

	InputFile.close();							// Close file
	return 0;
}