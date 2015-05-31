#ifndef SUBFUNSTIONS_H
#define SUBFUNSTIONS_H

#include <iostream>
#include "AbstractSeq.h"
using namespace std;

class Odds:public AbstractSeq
{
public:
	virtual int fun(int k);
};

class LeapYr:public AbstractSeq
{
	virtual int fun(int k);
};
#endif