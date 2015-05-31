/*
Overloaded Hospital

Write a program that computes and displays the charges for a patient’s hospital
stay. First, the program should ask if the patient was admitted as an in-patient
or an out-patient. If the patient was an in-patient the following data should be
entered:

	• The number of days spent in the hospital
	• The daily rate
	• Charges for hospital services (lab tests, etc.)
	• Hospital medication charges.

If the patient was an out-patient the following data should be entered:

	• Charges for hospital services (lab tests, etc.)
	• Hospital medication charges.

The program should use two overloaded functions to calculate the total charges.
One of the functions should accept arguments for the in-patient data, while the
other function accepts arguments for out-patient data. Both functions should
return the total charges.

	Input Validation: Do not accept negative numbers for any information.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double calcData(int, double, double, double);
double calcData(double, double);

int main()
{
	char   InOut;
	int    NumOfDays;
	double DailyRate,
		   ServChges,
		   MedChges,
		   TotChges;

	cout << "This program computes and displays a patient’s hospital charges\n"
	     << "---------------------------------------------------------------\n"
	     << "Was patient admitted as an in-patient or an out-patient?\n"
	     << "Enter (I) for in-patient\nEnter (O) for out-patient\n";
	cin  >> InOut; 

	switch(InOut)
	{
		case 'i' :
		case 'I' :  do
					{
						cout << "How many days were spent in the hospital? ";
				   		cin  >> NumOfDays;

				   		if (NumOfDays < 0)
				   		{
				   			cout << "Number of days must be greater than 0.\n";
				   		}

				   	} while(NumOfDays < 0);

				   	do
				   	{
				   		cout << "What was the daily rate? ";
				   		cin  >> DailyRate;

				   		if (DailyRate < 0)
				   		{
				   			cout << "Daily rate must be greater than 0.\n";
				   		}

				   	} while(DailyRate < 0);
					

		case 'o' :
		case 'O' :  do
				    {
						cout << "Enter the charges for hospital services "
					    	 << "(lab tests, etc.): ";
				   		cin  >> ServChges;

				   		if (ServChges < 0)
				   		{
				   			cout << "Charges for hospital services must be "
				   					"greater than 0.\n";
				   		}

				    } while (ServChges < 0);
		
				    do
				    {
				    	cout << "Enter the hospital medication charges: ";
				    	cin  >> MedChges;

				    	if (MedChges < 0)
				    	{
				    		cout << "Hospital medication charges must be greater"
				    			 << " than 0.\n";
				    	}

				    } while(MedChges < 0);

	}

	cout << "\n        Patient hospital stay report\n"
		 << "----------------------------------------------------\n";
	cout << right << fixed << showpoint << setprecision(2);

	switch(InOut)
	{
		case 'i' :
		case 'I' : TotChges = calcData(NumOfDays, DailyRate, ServChges, MedChges);
				   cout << "Number of days spent in the hospital : " 
				        << setw(11) << NumOfDays << endl;
				   cout << "Daily rate                           : $"
				        << setw(10) << DailyRate << endl;
				   break;
		case 'o' :
		case 'O' : TotChges = calcData(ServChges, MedChges);
		
	}


	cout << "Charges for hospital services        : $" 
	     << setw(10) << ServChges << endl;
	cout << "Hospital medication charges          : $" 
	     << setw(10) << MedChges << endl;
	cout << "Total charges                        : $" 
	     << setw(10) << TotChges << endl;
	
}

/****************************************************************************
 *                          calcData (overloaded)                           *
 * This function accepts the arguments for in-patient data, calculates and  *
 * returns the total charges.                                               *
 ****************************************************************************/
double calcData(int NumOfDays, double DailyRate, double ServChges,
				double MedChges)
{
	return (NumOfDays * DailyRate) + calcData(ServChges, MedChges);
}

/****************************************************************************
 *                          calcData (overloaded)                           *
 * This function accepts the arguments for out-patient data, calculates and *
 * returns the total charges.                                               *
 ****************************************************************************/
double calcData(double ServChges, double MedChges)
{
	return ServChges + MedChges;
}