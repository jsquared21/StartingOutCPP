/*
Using Files—Freezing and Boiling Points Modification

Modify the freezing and boiling points program described in Programming Challenge 20 so it
reads its input from a file instead of from the keyboard. Perform the necessary test to determine
if an error occurs when the file is opened. If an error occurs, display a message informing
the user. The following data to test your program can be found in the FrzBoil.dat file.

	-173  -38  -362   32
	 172  676  -306  212

It is important that your program read the data from the file in the same order it is written
in the file. Notice that the four freezing point values come first, followed by the four boiling
point values.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream Inputfile;
	Inputfile.open("FrzBoil.dat"); 		// Open an input file
	if(!Inputfile)
	{
		cout << "Error opening file.\n";
	}

	int Temp;
	char Freeze, Boil;

	// Ask the user to enter a temperature.
	cout << "\nThis program reads temperatures from file \"FrzBoil.dat\"\n"	   
		 << "and reports which of Ethyl alcohol, Mercury, Oxygen and\n"
		 << "Water will freeze and boil at those temperatures.\n\n";
		
	Inputfile  >> Temp;

    if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}	
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

	Inputfile  >> Temp;

	if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}	
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

	Inputfile  >> Temp;

	if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}	
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	cout << "at " << Temp << "(F).\n\n";

	Inputfile  >> Temp;

	if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}	
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";	

	Inputfile  >> Temp;
	
	if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

    Inputfile  >> Temp;
	
	if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

    Inputfile  >> Temp;
	
	if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}	
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}	
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	switch(Freeze)
	{
		case 'O' : cout << "Oxygen, ";
		case 'E' : cout << "Ethyl alcohol, ";
		case 'M' : cout << "Mercury and ";    
		case 'W' : cout << "Water will freeze. ";
	}
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

    Inputfile  >> Temp;
	
	if (Temp > 32 && Temp < 172)
		Boil = 'O';	
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';	
	else if (Temp >= 172)
		Boil = 'E';
	
	switch(Boil)
	{
		
		case 'M' : cout << "Mercury, ";
		case 'W' : cout << "Water, ";
		case 'E' : cout << "Ethyl alcohol and ";
		case 'O' : cout << "Oxygen will boil ";
	}
	cout << "at " << Temp << "(F).\n\n";

	Inputfile.close();
	cout << "File closed";
	return 0;	
}