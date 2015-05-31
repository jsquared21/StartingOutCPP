#include "BinaryTree.h"
#include <iostream>
#include <vector>
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
	if (x == t->value)
		return;
	if (x < t->value)
		insert(x, t->left);
	else
		insert(x, t->right);
}

//*****************************************************************************
// Function search determines if a value is a member of the tree. If it is    *
// the function returns true. Otherwise, it returns false.                    *
//*****************************************************************************
bool BinaryTree::search(double x, BtreeNode *t)
{
	while (t)
	{
		if (x == t->value)
			return true;
		else if (x < t->value)
			return search(x, t->left);
		else
			return search(x, t->right);
	}
	return false;
}

//*****************************************************************************
// Function inorder
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
// Function leafCount counts and returns the number of leaf nodes in the tree.*
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

//*****************************************************************************
// Function height computes and returns the height of the tree.               *
//*****************************************************************************
int BinaryTree::height(BtreeNode *t)
{	
	if (!t) return 0;
	L = height(t->left);
	R = height(t->right);
	if (L > R)
		return L + 1;
	else
		return R + 1;
}