// Date.h -- Date class specification
#ifndef DATE_H
#define DATE_H

class Date
{
	private:
		int month,
			day,
			year;
	public:
		Date()
		{
			month = 1;
			day = 1;
			year = 2001;
		}
		Date(int, int, int);
		void setDate(int, int, int);
		void validater(int, int, int);
		void IntDate(Date D);
		void MthDayYr(Date D);
		void DayMthYr(Date D);
};
#endif


