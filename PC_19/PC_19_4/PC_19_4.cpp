/*
Tree Height
Modify the binary search tree created in the preceding programming challenges by adding
a member function that computes and returns the height of the tree.

	int height()

The height of the tree is the number of levels it contains. For example, the tree shown in
Figure 19-10 has three levels. Demonstrate the function with a suitable driver program.
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


	tree.inorder(vect);
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << endl;
	return 0;
}