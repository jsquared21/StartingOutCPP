// Tips.h -- Tips specification file
#ifndef TIPS_H
#define TIPS_H

class Tips
{
	private:
		double taxRate;
	public:
		Tips()
		{	taxRate = .065; }
		Tips(double);
		double computeTip(double, double);
};
#endif