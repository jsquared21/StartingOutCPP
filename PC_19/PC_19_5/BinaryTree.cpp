#include "BinaryTree.h"
#include <vector>
#include <iostream>
using namespace std;

//*****************************************************************************
// Insert function inserts a float into a given subtree of the main binary    *
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
	else if (x < t->value)
		insert(x, t->left);
	else
		insert(x, t->right);
}

//*****************************************************************************
// Function search determines if a value is present in the tree. If so, the   *
// function returns true. Otherwise, it returns false.                        *
//*****************************************************************************
bool BinaryTree::search(double x, BtreeNode *t)
{
	if (t)
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
// Function inorder is passed an initially empty vector v: it fills v with    *
// the inorder list of numbers stored in the binary search tree.              *
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
		size(t->right);
		count++;
	}
	return count;
}

//*****************************************************************************
// Function leafCount counts and returns the number of leaf nodes in the tree *
//*****************************************************************************
int BinaryTree::leafCount(BtreeNode *t)
{
	if (t)
	{
		if (t->left == NULL && t->right == NULL)
			count++;
		leafCount(t->left);
		leafCount(t->right);
	}
	return count;
}

//*****************************************************************************
// Function height counts and returns the number of levels in the tree.       *
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

//*****************************************************************************
//*****************************************************************************
int BinaryTree::getwidth(BtreeNode *t)
{
	count = 0;
}
//*****************************************************************************
// Function width returns the tees largest number of nodes at the same level. *
//*****************************************************************************
int BinaryTree::width(BtreeNode *t)
{
	int W;
	if (t)
	{
		W = getwidth(t);
		if (W > maxWidth)
			maxWidth = W;
		W = 0;
		count = 0;
		width(t->left); 
		width(t->right);
	}
	return maxWidth;
}
