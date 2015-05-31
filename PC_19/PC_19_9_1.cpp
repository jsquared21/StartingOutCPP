/*
Cousins
Building on Program 19-5, write a function that takes a pointer to a Person object and
produces a list of that person’s cousins.
*/
// This program uses a generalization of binary tree to Build
// genealogy trees.
#include <vector>
#include <string>
#include <iostream>
using namespace std;
enum Gender{male, female};

// Person class represents a person participating in a genealogy.
class Person
{
	string name;
	Gender gender;
	vector<Person *> parents;
	vector<Person *> children;
	vector<Person *> cousins;
	void addParent(Person *p){ parents.push_back(p); }
public:
	Person (string name, Gender g)
	{
		this->name = name;
		gender = g;
	}
	Person *addChild(string name, Gender g);
	Person *addChild(Person *p);

	friend ostream &operator << (ostream &out, Person p);

	// Member functions for getting various Person info
	string getName(){ return name; };
	Gender getGender(){ return gender; };
	int getNumChildren(){ return children.size(); }
	int getNumParents(){ return parents.size(); }
	//int getNumCousins(){ return cousins.size(); }
	Person *getChild(int k);
	Person *getParent(int k);
	void getCousins(Person *);
};

//*****************************************************************************
// Create a child with specified name and gender, and set one of the parents  *
// to be this person. Add the new child to the list of children for this      *
// person.                                                                    *
//*****************************************************************************
Person *Person::addChild(string name, Gender g)
{
	Person *child = new Person(name, g);
	child->addParent(this);		// I am a parent of this child
	children.push_back(child);	// This is one of my children
	return child;
}

//*****************************************************************************
// Add a child to the list of children for this person.                       *
//*****************************************************************************
Person *Person::addChild(Person* child)
{
	child->addParent(this);		// I am a parent of this child
	children.push_back(child);	// This is one of my children
	return child;
}

//*****************************************************************************
// Return a pointer to the specified parent                                   *
//*****************************************************************************
Person *Person::getParent(int k)
{
	if (k < 0 || k >= parents.size())
	{
		cout << "Error indexing parents vector." << endl;
		exit(1);
	}
	return parents[k];
}

//*****************************************************************************
// Return a pointer to the specified child                                    *
//*****************************************************************************
Person *Person::getChild(int k)
{
	if (k < 0 || k >= children.size())
	{
		cout << "Error indexing parents vector." << endl;
		exit(1);
	}
	return children[k];
}

//*****************************************************************************
// Takes a pointer to a Person object and produces a list of that person's    *
// cousins.                                                                   *
//*****************************************************************************
void Person::getCousins(Person *p)
{
	for (unsigned int Pr = 0; Pr < p->parents.size(); Pr++)
	{ 	// Get parents
		Person * Parent = p->parents[Pr];

		for (unsigned int GP = 0; GP < Parent->parents.size(); GP++)
		{	// Get Grandparents
			Person * GrandParent = Parent->parents[GP];

			for (unsigned int AU = 0; AU < GrandParent->children.size(); AU++)
			{	// Get Aunts and Uncles
				Person * AuntUncle = GrandParent->children[AU];
				for (unsigned int n = 0; n < AuntUncle->children.size(); n++)
				{	// Get Nieces and Nephews
					
				}
			}
		}
	}
}

//*****************************************************************************
// Overloaded stream output operator                                          *
//*****************************************************************************
ostream & operator<<(ostream & out, Person p)
{
	out << "<person name = " << p.name << ">" << '\n';
	if (p.parents.size() > 0)
		out << " <parents>" << ' ';
	for (int k = 0; k < p.parents.size(); k++)
	{
		out << " " << p.parents[k]->name << ' ';
	}
	if (p.parents.size() > 0)
		out << " </perents>" << "\n";
	for (int k = 0; k < p.children.size(); k++)
	{
		out << " " << p.children[k]->name << ' ';
	}
	if (p.children.size() > 0)
		out << " </children>" << "\n";
	out << "</person>" << "\n";
	return out;
}



int main(int argc, char** argv)
{
	// Here are the people
	Person adam("Adam", male);
	Person eve("Eve", female);
	Person joan("Joan", female);
	Person mark("Mark", male);
	Person bob("Bob", male);

	// Adam and Eve are parents of Abel and Jen
	Person *pAbel = eve.addChild(new Person("Abel", male));
	Person *pJen = eve.addChild(new Person("Jen", female));
	adam.addChild(pAbel);
	adam.addChild(pJen);

	// Abel and Joan are parents of Missy
	Person *pMissy = joan.addChild("Missy", female);
	pAbel->addChild(pMissy);

	// Mark and Jen are parents of John
	Person *pJohn = mark.addChild("John", male);
	pJen->addChild(pJohn);

	// Mark and Jen are parents of Ann
	Person *pAnn = mark.addChild("Ann", female);
	pJen->addChild(pAnn);

	// Output all the people
	cout << "Here are all the people:\n\n";
	cout << adam << eve;
	cout << *pAbel << joan;
	cout << *pMissy << "\n";

	// Print parents of Missy
	cout << "Missy's parents are: " << endl;
	for (unsigned int k = 0; k < pMissy->getNumParents(); k++)
	{
		Person * p = pMissy->getParent(k);
		switch(p->getGender())
		{
			case female : cout << "\tMother: "; break;
			case male: cout << "\tFather: "; break;
		}
		cout << p->getName() << endl;
	}

	cout << "Tom's cousins are: " << endl;
	NN = pMissy->getCousins(pMissy);
	Person * NN = AuntUncle->children[n];
	if (NN != p)
	{
		switch(NN->gender)
		{
			case female : cout << "\tNiece: "; break;
			case male : cout << "\tNephew: "; break;
		}
		cout << NN->name << endl;
	}

	return 0;
}
