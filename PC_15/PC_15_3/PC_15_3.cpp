/*
Sequence Sum
A sequence of integers such as 1, 3, 5, 7, … can be represented by a function that takes a
nonnegative integer as parameter and returns the corresponding term of the sequence. For
example, the sequence of odd numbers just cited can be represented by the function
int odd(int k) {return 2 * k + 1;}
Write an abstract class AbstractSeq that has a pure virtual member function
virtual int fun(int k) = 0;
as a stand-in for an actual sequence, and two member functions
void printSeq(int k, int m);
int sumSeq(int k, int m)
that are passed two integer parameters k and m, where k < m. The function printSeq will
print all the terms fun(k) through fun(m) of the sequence, and likewise, the function
sumSeq will return the sum of those terms. Demonstrate your AbstractSeq class by creating
subclasses that you use to sum the terms of at least two different sequences. Determine
what kind of output best shows off the operation of these classes, and write a program that
produces that kind of output.
*/
#include <iostream>
#include "subfunctions.h"
using namespace std;

int main()
{
	LeapYr Test;
	int result;
	Test.printSeq(0, 4);
	result = Test.sumSeq(0, 4);
	cout << result << endl;

	return 0;
}