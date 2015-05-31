// Stats.h -- Stats specification file.
#ifndef STATS_H
#define STATS_H
class Stats
{
	private:
		double Data[30];
		int size;

	public:
		// Default constructor sets size value to 0;
		Stats()
		{ size = 0; }

		// Inline member functions
		double getStats(int m)
		{	return Data[m]; }

		// Member function prototypes
		bool storeValue(double value);

		double total();

		double average();

		int lowest();

		int highest();

};
#endif