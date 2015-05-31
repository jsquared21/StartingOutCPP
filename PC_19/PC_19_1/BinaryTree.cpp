#include <iostream>
#include <vector>
#include "BinaryTree.h"
using namespace std;

//*****************************************************************************
// insert Function inserts a number into a given subtree of the main binary   *
// search tree.                                                               *
//*****************************************************************************
void BinaryTree::insert(BtreeNode * &tree, double x)
{
	// If the tree is empty, make a new node and make it 
	// the root of the tree.
	if (!tree)
	{
		tree = new BtreeNode(x);
		return;
	}
	// If num is already in tree: return.
	if (tree->value == x)
		return;

	// The tree is not empty: insert the new node into the 
	// left or right subtree.
	if (x < tree->value)
		insert(tree->left, x);
	else
		insert(tree->right, x);
}

//*****************************************************************************
// Function search determines if a value is present in the tree. If so, the   *
// function returns true. Otherwise, it returns false.                        *             
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
void BinaryTree::fillInorder(vector <double> & v, BtreeNode *tree)
{
	if (tree)
	{
		fillInorder(v, tree->left);
		v.push_back(tree->value);
		fillInorder(v, tree->right);
	}
}
//*****************************************************************************
//*****************************************************************************
//*****************************************************************************
//*****************************************************************************