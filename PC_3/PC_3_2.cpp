// This program calculates and displays the amout of income
// generated from ticket sales.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double COST_A = 15,
	       		 COST_B = 12,
	       		 COST_C =  9;

	      double TicketsSoldA,
	      		 TicketsSoldB,
	      		 TicketsSoldC,
	      		 Income;

	cout << "This program calculates income from ticket sales.\n";

	// Input tickets sold per seat class.
	cout << "Enter the number of tickets sold for Class A seats: ";
	cin  >> TicketsSoldA;
	cout << "Enter the number of tickets sold for Class B seats: ";
	cin  >> TicketsSoldB;
	cout << "Enter the number of tickets sold for Class C seats: ";
	cin  >> TicketsSoldC;

	// Calculates and displays income generated.
	Income = (TicketsSoldA * COST_A) + (TicketsSoldB * COST_B) + (TicketsSoldC * COST_C);
	cout << "Total amoumt of income generated = $";
	cout << fixed << showpoint << setprecision(2) << Income << endl;
	return 0;
}