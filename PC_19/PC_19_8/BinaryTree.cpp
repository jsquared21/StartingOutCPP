#include <iostream>
#include <string>
#include <vector>
#include "BinaryTree.h"
using namespace std;

//*****************************************************************************
// Function insert inserts an employee's information in the binary tree.      *
//*****************************************************************************
void BinaryTree::insert(int i, string n, EmployeeInfo *&t)
{
	if (!t)
	{
		t = new EmployeeInfo(i, n);
		return;
	}
	if (i == t->id)
		return;
	else if (i < t->id)
		insert(i, n, t->left);
	else
		insert(i, n, t->right);
}

//*****************************************************************************
// Function search searches the tree for the number. If found the function    *
// returns the employee's name. Otherwise, returns an error message.          *
//*****************************************************************************
string BinaryTree::search(int i, EmployeeInfo *e)
{
	if (e)
	{
		if (i == e->id)
			return e->name;
		else if (i < e->id)
			return search(i, e->left);
		else
			return search(i, e->right);
	}
	return "Error";
}
