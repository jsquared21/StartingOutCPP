// Angle Calculator
// This program calculates and displays the sine, cosine and tangent of an angle.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double Angle,
		   Sin,
		   Cos,
		   Tan;

	// Input angle in radians.
	cout << "To calculates the sine, cosine and tangent of\n";
	cout << "an angle please enter the angle in radians: ";
	cin  >> Angle;

	Sin = sin(Angle),
	Cos = cos(Angle),
	Tan = tan(Angle);

	// Display the sine, cosine and tangent of the angle.
	cout << fixed << showpoint << setprecision(4);
	cout << "Angle  : " << setw(7) << Angle << endl;
	cout << "Sine   : " << setw(7) << Sin << endl;
	cout << "Cosine : " << setw(7) << Cos << endl;
	cout << "Tangent: " << setw(7) << Tan << endl;
	return 0;
}