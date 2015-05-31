/*
Simple Binary Search Tree Class
Write a class for implementing a simple binary search tree capable of storing numbers. The
class should have member functions

	void insert(double x)
	bool search(double x)
	void inorder(vector <double> & v )

The insert function should not use recursion directly, or indirectly by calling a recursive
function. The search function should work by calling a private recursive member function

	bool search(double x, BtreeNode *t)

The inorder function is passed an initially empty vector v: it fills v with the inorder list of
numbers stored in the binary search tree. Demonstrate the operation of the class using a
suitable driver program.
*/
#include <iostream>
#include "BinaryTree.h"
#include <vector>
using namespace std;

int main()
{
	BinaryTree tree;
	vector<double> treeValues;

	tree.insert(5.2);
	tree.insert(8.6);
	tree.insert(3.1);
	tree.insert(12.9);
	tree.insert(9.7);

	if (tree.search(3))
		cout << "3 was found in tree.\n";
	else
		cout << "3 was not found in tree.\n";

	tree.inorder(treeValues);

	for (int i = 0; i < treeValues.size(); i++)
	{
		cout << treeValues[i] << "  ";
	}
	cout << endl;

	return 0;
}