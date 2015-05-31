/*
Random Number Guessing Game

Write a program that generates a random number between 1 and 100 and asks the user to
guess what the number is. If the user’s guess is higher than the random number, the
program should display "Too high. Try again." If the user’s guess is lower than the
random number, the program should display "Too low. Try again." The program
should use a loop that repeats until the user correctly guesses the random number. Then
the program should display "Congratulations. You figured out my number."
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int RandNum,
		Seed,
		Guess;

	Seed = time(0);
	srand(Seed);
	RandNum = 1 + rand() % 100; 

	// cout << RandNum << endl;

	cout << "\nI generated a random number between 1 and 100\n"
		 << "Can you guess what my number is? ";
	cin  >> Guess;

	while (Guess > RandNum)
	{
		cout << "Too high. Try again.\n";
		cin  >> Guess;
	}
	while (Guess < RandNum)
	{
		cout << "Too low. Try again.\n";
		cin  >> Guess;
	}


	cout << "Congratulations. You figured out my number.\n\n";

	return 0;
}