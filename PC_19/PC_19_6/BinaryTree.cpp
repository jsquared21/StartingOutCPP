#include "BinaryTree.h"
#include <vector>
#include <iostream>
using namespace std;

//*****************************************************************************
// Copy Constructor                                                           *
//*****************************************************************************
BinaryTree::BinaryTree(const BinaryTree& original)
{
	root = copyTree(original.root);

}

//*****************************************************************************
// Make a separate copy of the Binary search tree inside a Binary object.     *
//*****************************************************************************
BinaryTree::BtreeNode *
BinaryTree::copyTree(BtreeNode *t)
{
 	if (t == NULL)
 		return NULL;
 	else
 	{
 		BtreeNode *LtailCopy = copyTree(t->left);
 		BtreeNode *RtailCopy = copyTree(t->right);
 		return new BtreeNode(t->value, LtailCopy, RtailCopy);	
 	}
}

//*****************************************************************************
// Function insert, inserts a float into a given subtree of the main binary   *
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
// Function size returns the number if items stored in the tree.              *
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
// Function height returns the number of levels in a tree.                    *
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