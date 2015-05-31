#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <vector>
using namespace std;

class BinaryTree
{
private:
	// The BtreeNode class is used to build the tree
	class BtreeNode
	{
		friend class BinaryTree;
		double value;
		BtreeNode *left;
		BtreeNode *right;
		BtreeNode(double value1, BtreeNode *left1 = NULL, BtreeNode *right1 = NULL)
		{
			value = value1;
			left = left1;
			right = right1;
		}
	};
	BtreeNode *root;		// Pointer to the root of the tree
	// Various helper functions.
	void insert(BtreeNode *&, double);
	bool search(double, BtreeNode *);
	void fillInorder(vector <double> & v, BtreeNode *);
public:
	// Constructor
	BinaryTree(){ root = NULL; }
	// Member functions.
	void insert(double x)
	{insert(root, x);}
	bool search(double x)
	{return search(x, root);}
	void inorder(vector <double> & v)
	{fillInorder(v, root);}
};
#endif