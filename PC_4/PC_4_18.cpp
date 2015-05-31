/*
Spectral Analysis
If a scientist knows the wavelength of an electromagnetic wave she can determine
what type of radiation it is. Write a program that asks for the wavelength in
meters of an electromagnetic wave and then displays what that wave is according
to the following chart. (For example, a wave with a wavelength of 1E-10 meters
would be an X-ray.)
*/

#include <iostream>
using namespace std;

int main()
{
	double Wavelength,
		   WaveType;

	// Ask user to input wavelength in meters.
	cout << "This program determines the an electromagnetic wave type.\n";
	cout << "Enter the wavelength in meters of an electromagnetic wave: ";
	cin  >> Wavelength;

	// Determine and display the wavelength's type according to the chart.
	cout << "A " << Wavelength << " meter wavelength "
		 << "electromagnetic\nwave is of the ";
	if(Wavelength <= 1E-11)
		cout << "gamma ray radiation type.\n";
	else if (Wavelength <= 1E-8)
		cout << "X-ray radiation type.\n";
	else if (Wavelength <= 4E-7)
		cout << "ultaviolet radiation type.\n";
	else if (Wavelength <= 7E-7)
		cout << "visible light radiation type.\n";
	else if (Wavelength <= 1E-3)
		cout << "Infrared radiation type.\n";
	else if (Wavelength <= 1E-2)
		cout << "Microwaves radiation type.\n";
	else
		cout << "radio wave radiation type\n";
	return 0;
}