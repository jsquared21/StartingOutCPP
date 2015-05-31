/*
Geometry Calculator
Write a program that displays the following menu:

Geometry Calculator
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit

Enter your choice (1-4):

If the user enters 1, the program should ask for the radius of the circle and then display its
area. Use 3.14159 for π. If the user enters 2, the program should ask for the length and
width of the rectangle, and then display the rectangle’s area. If the user enters 3, the program
should ask for the length of the triangle’s base and its height, and then display its
area. If the user enters 4, the program should end.

	Input Validation: Display an error message if the user enters a number outside the
	range of 1 through 4 when selecting an item from the menu. Do not accept negative
	values for the circle’s radius, the rectangle’s length or width, or the triangle’s base or
	height.
----------------------------------------------------------------------------------------------------

Named constants:
double PIE = 3.14159

Variables whose values will be input:
int    Input 			   // User input
double Radius  			   // Radius of the circle
double Length 			   // Length of the rectangle
double Width 			   // Width of the rectangle
double Base  			   // Base of the triangle
double Height			   // Height of the triangle

Variable whose values will be output:
double Area               // Area of the shape

Detailed Pseudocode:
Initialize named constants and variables
Display Geometry Calculator menu
Input number greater than 0 and less than 5
Calculate and Display area
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PIE = 3.14159;

	int    Input;
	double Radius, 
		   Length,
		   Width, 
		   Base, 
		   Height,
		   Area;

	// Display Geometry Calculator menu
	cout << "Geometry Calculator\n";
    cout << "    1. Calculate the Area of a Circle\n";
    cout << "    2. Calculate the Area of a Rectangle\n";
    cout << "    3. Calculate the Area of a Triangle\n";
    cout << "    4. Quit\n\n";
    cin  >> Input;


    switch(Input)
    {
    	case 1 : cout << "Enter the radius of the circle: ";
    			 cin  >> Radius;
    			 Area = PIE * pow(Radius, 2);
    			 cout << "The area of the cirle is " << Area << endl;
    			 break;

    	case 2 : cout << "Enter the length of the rectangle: ";
    			 cin  >> Length;
    	         cout << "Enter the width of the rectangle: ";
    	         cin  >> Width;
    	         Area = Length * Width;
    	         cout << "The area of the rectangle is " << Area << endl;
    	         break;

    	case 3 : cout << "Enter the base of the triangle: ";
    			 cin  >> Base;
    			 cout << "Enter the height of the triangle: ";
    			 cin  >> Height;
    			 Area = Base * Height;
    			 cout << "The area of the triangle is " << Area << endl;
    			 break;

    	case 4 : cout << "Exiting Geometry Calculator\nGoodbye!\n";
    			 break;

    	default: cout << "Invalid Entry!\nPlease re-run the program and "
    				  << "enter a valid menu choice.\n";
    }
    return 0;
}