#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BinaryTree
{
private:
	class EmployeeInfo
	{
		friend class BinaryTree;
		int id;					// Employee ID Number
		string name;			// Employee Name
		EmployeeInfo *left;
		EmployeeInfo *right;
		EmployeeInfo(int id1, string name1, EmployeeInfo *left1 = NULL,
							  				EmployeeInfo *right1 = NULL)
		{
			id = id1;
			name = name1;
			left = left1;
			right = right1;
		}	
	};
	EmployeeInfo *root;
	// Helper functions
	void insert(int, string, EmployeeInfo *&);
	string search(int, EmployeeInfo*);
public:
	// Constructor
	BinaryTree(){ root = NULL; }
	void insert(int i, string n)
	{ insert(i, n, root); }
	string search(int i)
	{ return search(i, root); }
};
#endif