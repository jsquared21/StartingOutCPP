/*
Tree Width
Modify the binary search tree created in the preceding programming challenges by adding
a member function that computes the width of the tree.

	int width()

The width of a tree is the largest number of nodes at the same level. Demonstrate correctness
in a suitable driver program.
*/
#include <iostream>
#include <vector>
#include "BinaryTree.h"
using namespace std;

int main()
{
	BinaryTree tree;
	vector <double> vect;

	tree.insert(5);
	tree.insert(3);
	//tree.insert(4);
	//tree.insert(2);
	tree.insert(8);
	tree.insert(12);
	tree.insert(9);

	//if (tree.search(12.9))
	//	cout << "12.9 was found in the tree.\n";
	//else
	//	cout << "12.9 was not found in the tree.\n";
//
	//cout << "Tree size: " << tree.size() << endl;
	//cout << "Tree leaf count: " << tree.leafCount() << endl;
	//cout << "Tree height: " << tree.height() << endl;
	cout << "Tree width: " << tree.width() << endl;

	tree.inorder(vect);
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << endl;
	return 0;
}