#ifndef DIVSALES_H
#define DIVSALES_H 

class DivSales
{
private:
	static double CorpSales;    // Holds the total corporate sales for all
								// divisions for entire year.
	double Sales[4]; 			// Hold four quarters of sales figures
public:
	DivSales()					// constructor
	{
		Sales[0] = 0.0;
		Sales[1] = 0.0;
		Sales[2] = 0.0;
		Sales[3] = 0.0;
	}
	bool setQtrSales(double, double, double, double);
	double getQtrSales(int i)
	{ return Sales[i]; }
	double getCorpSales()
	{ return CorpSales; }
};
#endif