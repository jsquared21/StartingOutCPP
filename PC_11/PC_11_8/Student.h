#ifndef HTMLTBL_H
#define HTMLTBL_H
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Student
{
protected:
	string name;
	int score;
public:
	Student()
	{ name = " "; score = 0;}
	Student(string name, int score)
	{
		this->name = name;
		this->score = score;
	}
	string getName()
	{return name;}
	int getScore()
	{return score;}
};

class HtmlTbl : public Student
{
public:
	HtmlTbl();

	~HtmlTbl();
};

#endif