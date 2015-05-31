#include "BinaryTree.h"
#include <iostream>
#include <vector>
using namespace std;

//*****************************************************************************
// Copy Constructor                                                           *
//*****************************************************************************
BinaryTree::BinaryTree(const BinaryTree &original)
{
	root = copyTree(original.root);
}

//*****************************************************************************
// Create a separate copy of a Binary search tree within a Binary tree object.*
//*****************************************************************************
BinaryTree::BtreeNode *
BinaryTree::copyTree(BtreeNode *t)
{
	if (t == NULL)
		return NULL;
	else
	{
		BtreeNode *LeftCopy = copyTree(t->left);
		BtreeNode *RightCopy = copyTree(t->right);
		return new BtreeNode(t->value, LeftCopy, RightCopy);
	}
}

//*****************************************************************************
// Function insert, inserts a float into a given subtree of the main bainary  *
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
// Function inoder is passed an initially empty vector v: it fills v with the *
// inorder list of numbers stored in the binary search tree.                  *
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
// Function leafCount counts and returns the number of leaf nodes in the tree.*
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
// Function height returns the number of levels the tree contains.            *
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
// Overloaded Assignment operator                                             *
//*****************************************************************************
BinaryTree& BinaryTree::operator=(BinaryTree right)
{
	// First destroy the binary search tree in this object
	destroyTree(root);
	// Assiggn a copy of the binary search tree in other object
	root = copyTree(right.root);
}

//*****************************************************************************
// Destroy a tree by deallocating all of its nodes.                           *
//*****************************************************************************
void BinaryTree::destroyTree(BtreeNode *t)
{
	if (!t) return;
	destroyTree(t->left);
	destroyTree(t->right);
	delete t;
}
