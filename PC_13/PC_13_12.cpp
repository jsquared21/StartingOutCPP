/*
Inventory Program
Write a program that uses a structure to store the following inventory information in a file:
	Item description
	Quantity on hand
	Wholesale cost
	Retail cost
	Date added to inventory

The program should have a menu that allows the user to perform the following tasks:
	• Add new records to the file
	• Display any record in the file
	• Change any record in the file
	Input Validation: The program should not accept quantities, or wholesale or retail
	costs less than 0. The program should not accept dates that the programmer determines
	are unreasonable.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

struct Inven
{
	string Desc,		// Item description
		   Date;		// Date added to inventory
	int    Qty;			// Quantity on hand
	double WhsleCost,	// Wholesale cost
		   RetailCost;	// Retail cost
};

// Function prototype
void addRecord(Inven &, fstream &);
void displayRecord(Inven &, fstream &);
void changeRecord(Inven &, fstream &);
long byteNum(int);
void displayError();
bool validDate(string);

int main ()
{
	Inven record;// = {" ", " ", 0, 0.0, 0.0};
	int Input;

	fstream File("inventory.dat", ios::out | ios::in | ios::binary);
	if (!File)
	{
		cout << "Error opening file.\n";
		return 0;
	}

	cout << "               Inventory program menu.\n"
		 << "Choose one of the following numbers to perform a task:\n";
	cout << " 1. Add new records to the file.\n";
	cout << " 2. Display any record in the file.\n";
	cout << " 3. Change any record in the file.\n";
	cin  >> Input;

	switch (Input)
	{
		case 1 : addRecord(record, File);
				 break;
		case 2 : displayRecord(record, File);
				 break;
		case 3 : changeRecord(record, File);
	}

	File.close();
	return 0;
}

//********************************************************************************
// addRecord                                                                     *
// This function accepts an Inven structure and a fstream object as its          *
// arguments. The user is asked to input the record information that is          *
// validated and sotred in the file.                                             *
//********************************************************************************
void addRecord(Inven &record, fstream &File)
{
	File.seekp(0L, ios::end);
	cout << "Enter the following inventory information:\n";
	cout << "Item description: ";
	cin.ignore();
	getline(cin, record.Desc);
	do
	{
		cout << "Date in the format MM/DD/YYYY: ";
		cin.ignore();
		getline(cin, record.Date);

		if (validDate(record.Date) == 0)
		{
			cout << validDate(record.Date) << endl;
			cout << "Error! Invalid date format.\n";
		}

	} while (validDate(record.Date) == 0);
	do
	{
		cout << "Quantity :";
		cin  >> record.Qty;
		if (record.Qty < 0)
			displayError();
	} while (record.Qty < 0);
	do
	{
		cout << "Wholesale cost: ";
		cin  >> record.WhsleCost;
		if (record.Qty < 0)
			displayError();
	} while (record.WhsleCost < 0);
	do
	{
		cout << "Retail cost: ";
		cin  >> record.RetailCost;
		if (record.RetailCost < 0)
			displayError();
	} while (record.RetailCost < 0);
	File.write(reinterpret_cast<char *>(&record), sizeof(record));
}

//********************************************************************************
// displayRecord                                                                 *
// This function accepts an Inven structure and a fstream object as its          *
// arguments. The user is ask to input the number of the record to read and      *
// display from the file.                                                        *
//********************************************************************************
void displayRecord(Inven &record, fstream &File)
{
	int recNum;

	cout << "Enter the record number: ";
	cin  >> recNum;
	if (recNum < 1)
		recNum = 1;
	recNum--;
	File.seekg(byteNum(recNum), ios::beg);
	File.read(reinterpret_cast<char *>(&record), sizeof(record));
	cout << "Record number: " << (recNum + 1) << endl;
	cout << "Item description: ";
	cout << record.Desc << endl;
	cout << "Date : ";
	cout << record.Date << endl;
	cout << "Quantity :";
	cout << fixed << showpoint << setprecision(2);
	cout << record.Qty << endl;
	cout << "Wholesale cost: ";
	cout << record.WhsleCost << endl;
	cout << "Retail cost: ";
	cout << record.RetailCost << endl;
}

//********************************************************************************
// changeRecord                                                                  *
// This function accepts an Inven structure and a fstream object as its          *
// arguments. The user is asked to input the number of the record and the        *
// information to change in the file.                                            *
//********************************************************************************
void changeRecord(Inven &record, fstream &File)
{
	int recNum;

	cout << "Enter the record number: ";
	cin  >> recNum;
	if (recNum < 1)
		recNum = 1;
	recNum--;
	File.seekg(byteNum(recNum), ios::beg);
	File.read(reinterpret_cast<char *>(&record), sizeof(record));
	cout << "Enter the following inventory information:\n";
	cout << "Item description: ";
	cin.ignore();
	getline(cin, record.Desc);
	do
	{
		cout << "Date in the format MM/DD/YYYY: ";
		cin.ignore();
		getline(cin, record.Date);
		if (!validDate(record.Date))
		{
			cout << validDate(record.Date) << endl;
			cout << "Error! Invalid date format.\n";
		}
	} while (!validDate(record.Date));
	do
	{
		cout << "Quantity :";
		cin  >> record.Qty;
		if (record.Qty < 0)
			displayError();
	} while (record.Qty < 0);
	do
	{
		cout << "Wholesale cost: ";
		cin  >> record.WhsleCost;
		if (record.Qty < 0)
			displayError();
	} while (record.WhsleCost < 0);
	do
	{
		cout << "Retail cost: ";
		cin  >> record.RetailCost;
		if (record.RetailCost < 0)
			displayError();
	} while (record.RetailCost < 0);
	File.seekp(byteNum(recNum), ios::beg);
	File.write(reinterpret_cast<char *>(&record), sizeof(record));
}

//********************************************************************************
// byteNum                                                                       *
// This function accepts an integer as its argument. Returns the byte number in  *
// the file of the record whose number is passed as the argument.                *
//********************************************************************************
long byteNum(int recNum)
{
	return sizeof(Inven) * recNum;
}

//********************************************************************************
// diplayError                                                                   *
// This function displays an input validation error message.                     *
//********************************************************************************
void displayError()
{
	cout << "Error! number must be greater than 0.\n";
}
//********************************************************************************
// validDate                                                                     *
// This function accepts a string as its argument and test its contents for a    *
// valid date format.                                                            *
//********************************************************************************
bool validDate(string date)
{
	if ( date.length() == 9)
		date = "0" + date;

	if (date.length() != 10)
		return false;
	
	for (int i = 0; i < date.length(); i++)
	{
		if (i == 2 || i == 5)
		{
			if (date[i] != '/')
			{
				return false;
			}
			continue;
		}

		if (!isdigit(date[i]))
			return false;
	}
	return true;
}