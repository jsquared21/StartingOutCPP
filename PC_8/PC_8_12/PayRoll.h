// PayRoll.h -- PayRoll specification file.
#ifndef PAYROLL_H
#define PAYROLL_H

class PayRoll
{
	private:
		double Rate, 		// Holds employee's hourly pay rate.
			   Hrs;		    // Holds number of hours worked.
	public:
		void setRate(double r)
		{ 	Rate = r; }

		void setHrs(double h)
		{ Hrs = h; }

		double getGross()
		{ return Rate * Hrs; }

};
#endif