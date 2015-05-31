/*
Modify the binary search tree you created in the preceding programming challenges to add
a member function
int leafCount()
that counts and returns the number of leaf nodes in the tree. Demonstrate that the function
works correctly in a suitable driver program.
*/
#include <iostream>
#include <vector>
#include "BinaryTree.h"
using namespace std;

int main()
{
	BinaryTree tree;
	vector <double> vect;

	tree.insert(12);
	tree.insert(7);
	tree.insert(9);
	tree.insert(10);
	tree.insert(22);
	tree.insert(22);
	tree.insert(24);
	tree.insert(30);
	tree.insert(18);
	tree.insert(3);
	tree.insert(14);
	tree.insert(20);

	tree.inorder(vect);
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << endl;

	if (tree.search(3.1))
		cout << "3.1 was found in the tree.\n";
	else
		cout << "3.1 was not found in the tree.\n";

	cout << "Size of vect: " << tree.size() << endl;
	cout << "Leaf count of vect: " << tree.leafCount() << endl;

	return 0;
}