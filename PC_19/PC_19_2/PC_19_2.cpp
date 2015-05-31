/*
Tree Size
Modify the binary search tree created in the previous programming challenge to add a
member function

	int size()

that returns the number of items (nodes) stored in the tree. Demonstrate the correctness of
the new member function with a suitable driver program.
*/
#include <iostream>
#include <vector>
#include "BinaryTree.h"
using namespace std;

int main()
{
	BinaryTree tree;
	vector <double> vect;

	tree.insert(5.2);
	tree.insert(8.9);
	tree.insert(3.1);
	tree.insert(12.9);
	tree.insert(9.7);

	if (tree.search(3.1))
		cout << "3.1 was found in the tree.\n";
	else
		cout << "3.1 was not found in the tree.\n";

	tree.inorder(vect);
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << endl;

	cout << "Size of tree: " << tree.size() << endl;

	return 0;
}