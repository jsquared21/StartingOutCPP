// TestGrader.h -- TestGrader class specification file.
#ifndef TESTGRADER_H 
#define TESTGRADER_H

#include <string>
using namespace std;

class TestGrader
{
	private:
		char answers[20];

	public:
		void setkey(string);
		void grade(char[]);
};
#endif