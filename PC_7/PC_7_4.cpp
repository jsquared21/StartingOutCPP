/*
Monthly Budget
A student has established the following monthly budget:
	Housing 				500.00
	Utilities 				150.00
	Household expenses 		 65.00
	Transportation 			 50.00
	Food 					250.00
	Medical 				 30.00
	Insurance 				100.00
	Entertainment 			150.00
	Clothing 				 75.00
	Miscellaneous 			 50.00

Write a program that declares a MonthlyBudget structure with member variables to
hold each of these expense categories. The program should create two MonthlyBudget
structure variables. The first will hold the budget figures given above. The
second will be passed to a function that has the user enter the amounts actually
spent in each budget category during the past month. The program should then pass
both structure variables to a function that displays a report indicating the
amount over or under budget the student spent in each category, as well as the
amount over or under for the entire monthly budget.
*/
#include <iostream>
#include <iomanip>
using namespace std;

struct MonthlyBudget
{
	double Housing,
	       Utilities,
	       HouseholdExpense,
	       Transportation,
	       Food,
	       Medical,
	       Insurance,
	       Entertainment,
	       Clothing,
	       Miscellaneous;
};

// Function Prototypes
void getSpent(MonthlyBudget &);
void displayReport(MonthlyBudget A, MonthlyBudget B);
void displayReportHelper(double B, double S);
double total(MonthlyBudget);

//--------------------------- Main -------------------------------
int main()
{
	MonthlyBudget Budget = {500.00, 150.00, 65.00, 50.00, 250.00,
		                    30.00, 100.00, 150.00, 75.00, 50.00};
	MonthlyBudget Spent;

	getSpent(Spent);

	displayReport(Budget, Spent);

	return 0;
}

/*****************************************************************
 *                        getSpent                               *
 * This function has the user enter the amounts actually spent   *
 * in each budget category during the past month.                *
 *****************************************************************/
void getSpent(MonthlyBudget &B)
{
	cout << "During the past month:\n";
	cout << "How much was spent on Housing? ";
	cin  >> B.Housing;
	cout << "How much was spent on Utilities? ";
	cin  >> B.Utilities;
	cout << "How much was spent on Household expenses? ";
	cin  >> B.HouseholdExpense;
	cout << "How much was spent on Transportation? ";
	cin  >> B.Transportation;
	cout << "How much was spent on Food? ";
	cin  >> B.Food;
	cout << "How much was spent on Medical? ";
	cin  >> B.Medical;
	cout << "How much was spent on Insurance? ";
	cin  >> B.Insurance;
	cout << "How much was spent on Entertainment? ";
	cin  >> B.Entertainment;
	cout << "How much was spent on Clothing? ";
	cin  >> B.Clothing;
	cout << "How much was spent on Miscellaneous? ";
	cin  >> B.Miscellaneous;
}

/********************************************************************
 *                        displayReport                             *
 * This function accepts both MonthlyBudget variables as arguments. *
 * Displays a report indicating the amount over or under budget the *
 * student spent in each category and the amount over or under the  *
 * entire budget.                                                   *
 ********************************************************************/
void displayReport(MonthlyBudget B, MonthlyBudget S)
{
	double TotalBudget, TotalSpent;

	cout << "\n         Monthly budget report\n";
	cout << "------------------------------------------\n";

	cout << "Housing:            $";
	displayReportHelper(B.Housing, S.Housing);
	
	cout << "Utilities:          $";
	displayReportHelper(B.Utilities, S.Utilities);

	cout << "Household expenses: $";
	displayReportHelper(B.HouseholdExpense, S.HouseholdExpense);

	cout << "Transportation:     $";
	displayReportHelper(B.Transportation, S.Transportation);

	cout << "Food:               $";
	displayReportHelper(B.Food, S.Food);

	cout << "Medical:            $";
	displayReportHelper(B.Medical, S.Medical);

	cout << "Insurance:          $";
	displayReportHelper(B.Insurance, S.Insurance);

	cout << "Entertainment:      $";
	displayReportHelper(B.Entertainment, S.Entertainment);

	cout << "Clothing:           $";
	displayReportHelper(B.Clothing, S.Clothing);

	cout << "Miscellaneous:      $";
	displayReportHelper(B.Miscellaneous, S.Miscellaneous);

	TotalBudget = total(B);

	TotalSpent = total(S);

	cout << "Entire budget:      $";
	displayReportHelper(TotalBudget, TotalSpent);
}

/*******************************************************************
 *                     displaReportHelper                          *
 * This function accepts two MonthlyBudget member variables as     *
 * arguments and displays the amount over or under budget the      *
 * the student spent.                                              *
 *******************************************************************/
void displayReportHelper(double B, double S)
{
	cout << fixed << showpoint << setprecision(2);
	if (B > S)
	{
		cout << setw(7) << B - S;
		cout << " under.\n";
	}
	else
	{
		cout << setw(7) << S - B;
		cout << " over.\n";
	}
}

/*******************************************************************
 *                           total                                 *
 * This function accepts a MonthlyBudget structure variable as an  *
 * argument and returns the sum of it member values.               *
 *******************************************************************/
double total(MonthlyBudget B)
{
	return B.Housing + B.Utilities + B.HouseholdExpense + B.Transportation
		   + B.Food + B. Medical + B.Insurance + B.Entertainment +
		   B.Clothing + B. Miscellaneous;
}