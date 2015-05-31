#include <iostream> 	// needed for cout
#include "donlist.h"
using namespace std;

//*********************************************************
// Constructor.                                           *
// The argument passed to num indicates the number of     *
// elements in array passed to gifts. The gifts array     *
// holds teh list of donation values. The constructor     *
// allocates the donations and arrPtr arrays. The gifts   *
// array is copied to the donations array. The elements   *
// of the arrPtr array are made to point to the elements  *
// of the donations array, and then sorted in ascending   *
// order by teh selectSort function.                      *
//*********************************************************
DonationList::DonationList()
{
	int num;

	cout << "How many donations were received? ";
	cin  >> num;

	numDonations = num;
	
	// Allocate an array of doubles.
	donations = new double[num];
	// Allocate an array of pointers-to-doubles.
	arrPtr = new double*[num];
	// Initialize the arrays.
	cout << "Input each of the " << numDonations << " donations.\n";
	for (int count = 0; count < numDonations; count++)
	{
		cout << "Donation #" << (count + 1) << ": ";
		cin	 >> donations[count];
		arrPtr[count] = &donations[count];
	}
	// Now, sort the array of pointers.
	selectSort();
	
}

//**********************************************************
// Destructor frees the memory allocated by the constructor*
//**********************************************************
DonationList::~DonationList()
{
	if (numDonations > 0)
	{
		delete [] donations;
		donations = 0;
		delete [] arrPtr;
		arrPtr = 0;
	}
}

//***********************************************************
// The selecSort function performs a selection sort on the  *
// arrPtr array of pointers. The array is sorted on the     *
// values its elements point to.                            *
//***********************************************************
void DonationList::selectSort()
{
	int minIndex;
	double *minElem;

	for (int scan = 0; scan < (numDonations - 1); scan++)
	{
		minIndex = scan;
		minElem = arrPtr[scan];
		for (int index = scan + 1; index < numDonations; index++)
		{
			if (*(arrPtr[index]) > *minElem)
			{
				minElem = arrPtr[index];
				minIndex = index;
			}
		}
		arrPtr[minIndex] = arrPtr[scan];
		arrPtr[scan] = minElem;
	}
}

//*******************************************************
// The show function uses cout to display the donations *
// array in sequential order.                           *
//*******************************************************
void DonationList::show()
{
	for(int count = 0; count < numDonations; count++)
		cout << donations[count] << " ";
	cout << endl;
}

//*********************************************************
// The showSorted function uses cout to display the values*
// pointed to by the elements of the arrPtr array. Since  *
// arrPtr is sorted, this function displays the elements  *
// of the donsations array in ascending order.            *
//*********************************************************
void DonationList::showSorted()
{
	for (int count = 0; count < numDonations; count++)
		cout << *(arrPtr[count]) << " ";
	cout << endl;
}