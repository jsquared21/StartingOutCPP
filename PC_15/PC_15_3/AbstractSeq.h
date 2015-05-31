#ifndef ABSTRACTSEQ_H
#define ABSTRACTSEQ_H

#include <iostream>
using namespace std;

class AbstractSeq
{
public:
	virtual int fun(int k) = 0;
	void printSeq(int k, int m);
	int sumSeq(int k, int m);
};
#endif