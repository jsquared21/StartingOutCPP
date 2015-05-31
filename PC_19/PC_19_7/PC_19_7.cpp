/*
Tree Assignment Operator
Design and implement an overloaded assignment operator for the binary search tree created
in the preceding programming challenges.
*/
#include "BinaryTree.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	BinaryTree tree, tree2;
	vector <double> vect1, vect2, vect3;
	tree.insert(5);
	tree.insert(3);
	tree.insert(8);
	tree.insert(12);
	tree.insert(9);

	tree2.insert(12.4);
	tree2.insert(7.1);
	tree2.insert(22.8);
	tree2.insert(3.9);
	tree2.insert(18.7);

	cout << "The items in vect1 are:\n";
	tree.inorder(vect1);
	for (int i = 0; i < vect1.size(); i++)
		cout << vect1[i] << " ";
	cout << endl;

	cout << "The items in vect2 are:\n";
	tree2.inorder(vect2);
	for (int i = 0; i < vect2.size(); i++)
		cout << vect2[i] << " ";
	cout << endl;

	// Use the assignment operator
	tree = tree2;
	cout << "The items in vect1 are:\n";
	tree.inorder(vect3);
	for (int i = 0; i < vect3.size(); i++)
		cout << vect3[i] << " ";
	cout << endl;


	return 0;
}