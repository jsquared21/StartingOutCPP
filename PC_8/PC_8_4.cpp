/*
Monkey Business

A local zoo wants to keep track of how many pounds of food each of its three
monkeys eats each day during a typical week. Write a program that stores this
information in a twodimensional 3 × 7 array, where each row represents a different
monkey and each column represents a different day of the week. The program should
first have the user input the data for each monkey. Then it should create a report
that includes the following information:

	• Average amount of food eaten per day by the whole family of monkeys.
	• The least amount of food eaten during the week by any one monkey.
	• The greatest amount of food eaten during the week by any one monkey.

		Input Validation: Do not accept negative numbers for pounds of food eaten.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Create a two-dimensional 3x7 array.
	const int mkys = 3;
	const int days = 7;
	int food[mkys][days];
	double pounds, least, most, sum = 0;
	

	// Ask user to input data for each monkey
	cout << "Input how many pounds of food each monkey ate each day.\n";
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{
			do
			{

				cout << "Monkey #" << (row + 1) << " on day #" << (col + 1)
					 << " ate: ";
				cin  >> pounds;

				if (pounds < 0)
				{
					cout << "Error! Number of pounds must be greater than 0.\n";
				}

			} while (pounds < 0);

			food[row][col] = pounds;


			// Get total food eaten per day by the whole family of monkeys.
			sum += pounds;
		}
		cout << endl;							// make blank space
	}

	// Get least and greatest amount of food eaten by any one monkey.
	least = most = food[0][0];
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{
			
			if (food[row][col] < least)
			{ 
				least = food[row][col];
			}
			if (food[row][col] > most)
			{ 
				most = food[row][col];
			}
		}
	}

	cout << "\n             Monkey Weekly Food Report\n"
		 << "             by the whole family of monkeys\n"
		 << "----------------------------------------------------\n";
	cout << fixed << showpoint << setprecision(1);
	cout << "Average amount of food eaten per day : "
		 << sum / 21.0 << " pounds.\n";
	cout << "Least amount of food eaten: " << least << " pounds.\n";
	cout << "Greatest amount of food eaten: " << most << " pounds.\n";

	return 0;
}
