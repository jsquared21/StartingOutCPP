#include "BinaryTree.h"
#include <iostream>
#include <vector>
using namespace std;

//*****************************************************************************
// Function insert. Inserts a float into a given subtree of the main binary   *
// search tree.                                                               *
//*****************************************************************************
void BinaryTree::insert(double x, BtreeNode *&tree)
{
	// If the tree is empty, make a new node and make it 
	// the root of the tree.
	if (!tree)
	{
		tree = new BtreeNode(x);
	}
	// If num is already in tree: return.
	if (tree->value == x)
		return;

	// The tree is not empty: insert the new node into the 
	// left or right subtree.
	if (x < tree->value)
		insert(x, tree->left);
	else
		insert(x, tree->right);
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
void BinaryTree::inorder(vector <double> & v, BtreeNode *&t)
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
int BinaryTree::size(BtreeNode *&t)
{
	if (t)
	{	
		size(t->left);
		count++;
		size(t->right);								
	}
	return count;
}