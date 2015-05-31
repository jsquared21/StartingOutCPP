/*
Triangle Display
Write a program that uses nested loops to display the triangle pattern shown below.

	+
	+++
	+++++
	+++++++
	+++++
	+++
	+
*/
#include <iostream>
using namespace std;

int main()
{
	int EndL = 1; 

	for(int Row = 1; Row <= 7; Row++)
	{
		cout << "    "; // Indent each row

		for(int L = 1; L <= EndL; L++)
		{
			cout << "+";
		}
		// Increment the number of iterations of the inner loop for every
		// iteration of the outer loop. When the outter loop iterations are
		// less than 4. If greater than 4 decrement the number of iterations
		// of the inner loop. 
		if (Row < 4)
			EndL += 2;
		else
			EndL -= 2;

		cout << endl; // Start a new row
	}
	cout << endl;
	return 0;
}