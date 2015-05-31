/*
Fat Gram Calculator

Write a program that asks for the number of calories and fat grams in a food. The program
should display the percentage of calories that come from fat. If the calories from fat are less
than 30 percent of the total calories of the food, it should also display a message indicating
the food is low in fat.

One gram of fat has 9 calories, so

	Calories from fat = fat grams * 9

The percentage of calories from fat can be calculated as

	Calories from fat ÷ total calories

	Input Validation: Make sure the number of calories is greater than 0 and the number
	of fat grams is 0 or more. Also, the number of calories from fat cannot be greater than
	the total number of calories. If that happens, display an error message indicating that
	either the calories or fat grams were incorrectly entered.//
*/
#include <iostream>
using namespace std;

int main()
{
	double PecentCalFat,
		   FatGrams,
		   CaloriesFromFat,
		   TotalCalories;

	// Ask user to input the number of calories and fat grams in a food.
	cout << "Fat Gram Calculator!\n";
	cout << "Please enter the number of calories in the food: ";
	cin  >> TotalCalories;
	cout << "Please enter the number of fat grams in the food: ";
	cin  >> FatGrams;

	// Calculate calories from fat and Percentage of calories from fat.
	CaloriesFromFat = FatGrams * 9;
	PecentCalFat = (CaloriesFromFat / TotalCalories) * 100;

	// Display the percentage of calories that come from fat.
	if (TotalCalories >= 0 && FatGrams >= 0)	
	{
		if (CaloriesFromFat < TotalCalories)
		{
			cout << "Calories that come from fat: ";
			cout << PecentCalFat << "%.\n";
			if (PecentCalFat < 30)
				cout << "This food is low in fat.\n\n";
		}
		else
			cout << "Error!\nThe calories or fat grams were incorrectly entered.\n\n";
	}
	else
		cout << "The number of calories and the number"
	         << " of fat grams must be 0 or more.\n\n";
	return 0;
}