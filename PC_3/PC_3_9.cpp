// How Many Widgets
// This program calculates and displays the number
// of widgets stacked on a pallet.
#include <iostream>
using namespace std;

int main()
{
	const double WEIGHT_PER_WIDGET = 9.2;

	double PalletWeight,
		   FullWeight;
	int	   NumOfWidgets;

	// Input pallet and combined weight.
	cout << "How much does the pallet weigh by itself? ";
	cin  >> PalletWeight;
	cout << "How much does the pallet weigh with the widgets? ";
	cin  >> FullWeight;

	// Calculate and display the number of widgets stacked on the paet.
	NumOfWidgets = (FullWeight - PalletWeight) / WEIGHT_PER_WIDGET;
	cout << "There are " << NumOfWidgets << " widgets stacked on the pallet.\n";
	return 0;

}