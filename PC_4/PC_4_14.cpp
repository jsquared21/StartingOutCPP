/*
Body Mass Index

Write a program that calculates and displays a person’s body mass index (BMI). The BMI
is often used to determine whether a person with a sedentary lifestyle is overweight or
underweight for his or her height. A person’s BMI is calculated with the following formula:

	BMI = weight × 703/height^2

where weight is measured in pounds and height is measured in inches. The program should
display a message indicating whether the person has optimal weight, is underweight, or is
overweight. A sedentary person’s weight is considered to be optimal if his or her BMI is
between 18.5 and 25. If the BMI is less than 18.5, the person is considered to be underweight.
If the BMI value is greater than 25, the person is considered to be overweight.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double Weight,
		   Height,
		   BMI;

	// Ask user to input height and weight
	cout << "Welcome to the Body Mass Index Calculator!\n";
	cout << "Please enter your weight in pounds: ";
	cin  >> Weight;
	cout << "Please enter your height in inches: ";
	cin  >> Height;

	// Calculate body mass index
	BMI = Weight * (703 / pow(Height, 2));

	// Display body mass index
	cout << "Your BMI is " << BMI << endl;
	if (BMI >= 18.5 && BMI <= 25)
		cout << "You are of optimal weight.\n";
	else if (BMI >= 25)
		cout << "You are overweight.\n";
	else
		cout << "You are underweight.\n";
	return 0;
}