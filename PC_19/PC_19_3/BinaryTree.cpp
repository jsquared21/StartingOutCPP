#include <iostream>
#include <vector>
#include "BinaryTree.h"
using namespace std;

//*****************************************************************************
// Function insert inserts a float into a given subtree of the main binary    *
// search tree.                                                               *
//*****************************************************************************
void BinaryTree::insert(double x, BtreeNode *&t)
{
	if (!t)
	{
		t = new BtreeNode(x);
		return;
	}
	if (t->value == x)
		return;
	if (x < t->value)
		insert(x, t->left);
	else
		insert(x, t->right);
}

//*****************************************************************************
// Function search determines if a value is present in the tree. If so, the   *
// function return true. Otherwise, if returns false.                         *
//*****************************************************************************
bool BinaryTree::search(double x, BtreeNode *t)
{
	while (t)
	{
		if (t->value == x)
			return true;
		else if (x < t->value)
			return search(x, t->left);
		else
			return search(x, t->right);
	}
	return false;
}

//*****************************************************************************
// Function inorder is passed an initially empty vector v: it fills v with    *
// the inorder list of number stored in the binary search tree.               *
//*****************************************************************************
void BinaryTree::inorder(vector <double> &v, BtreeNode *t)
{
	if (t)
	{
		inorder(v, t->left);
		v.push_back(t->value);
		inorder(v, t->right);
	}
}

//*****************************************************************************
// Function size returns the number of items stored in the tree.              *
//*****************************************************************************
int BinaryTree::size(BtreeNode *t)
{
	if (t)
	{
		size(t->left);
		count++;
		size(t->right);
	}
	return count;
}

//*****************************************************************************
// Function leafCount count and returns the number of leaf nodes in the tree. *
//*****************************************************************************
int BinaryTree::leafCount(BtreeNode *t)
{
	if (t)
	{
		leafCount(t->left);
		leafCount(t->right);
		if (t->left == NULL && t->right == NULL)
			count++;
	}
	return count;
}

