#ifndef DONLIST_H
#define DONLIST_H

class DonationList
{
private:
	int numDonations;
	double *donations;
	double **arrPtr;
	void selectSort();
public:
	DonationList();
	~DonationList();
	void show();
	void showSorted();
};
# endif