// IntRange class specification file
#ifndef INTRANGE_H
#define INTRANGE_H

class IntRange
{
	private:
		int input,		// User input
			lower,		// Loweset valid integer
			upper;		// Highest valid integer

	public:
		IntRange();
		int getInt();
		int getLower()
		{ return lower; }
		int getUpper()
		{ return upper; }
} ;
#endif