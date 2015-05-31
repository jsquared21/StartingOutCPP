/*
Tree Copy Constructor
Design and implement a copy constructor for the binary search tree created in the preceding
programming challenges. Use a driver program to demonstrate correctness.
*/
#include "BinaryTree.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	BinaryTree tree;
	vector <double> vect;
	vector <double> vect2;

	tree.insert(5);
	tree.insert(3);
	tree.insert(8);
	tree.insert(12);
	tree.insert(9);

	if (tree.search(12.9))
		cout << "12.9 was found in the tree.\n";
	else
		cout << "12.9 was not found in the tree.\n";

	cout << "Vect size: " << tree.size() << endl;
	cout << "Vect leaf count: " << tree.leafCount() << endl;
	cout << "Vect tree height: " << tree.height() << endl;

	BinaryTree tree2(tree);

	tree2.inorder(vect2);
	for (int i = 0; i < vect2.size(); i++)
		cout << vect2[i] << " ";
	cout << endl;

	tree.inorder(vect);
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << endl;
	return 0;
}