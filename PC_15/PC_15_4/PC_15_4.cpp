/*
Flexible Encryption
Write a modification of the encryption program of section 13.7 whose transform function
uses an integer key to transform the character passed to it. The function transforms the
character by adding the key to it. The key should be represented as a member of the
Encryption class, and the class should be modified so that it has a member function that
sets the encryption key. When the program runs, the main function should ask the user for
the input file, the output file, and an encryption key.
Show that with these modifications, the same program can be used for both encryption and
decryption.
*/
#include <iostream>
#include <fstream>
using namespace std;

class Encryption
{
//private:
protected:
	int key;
	ifstream inFile;
	ofstream outFile;
public:
	Encryption(char *inFileName, char *outFileName);
	~Encryption();
	// Pure virtual function.
	virtual char transform(char ch) = 0;
	void setKey(int key)
	{ this->key = key; }
	int getKey() { return key; }
	// Do the actual work.
	void encrypt();
};

//********************************************************************************
// Constructor opens the input and output file.                                  *
//********************************************************************************
Encryption::Encryption(char *inFileName, char *outFileName)
{
	inFile.open(inFileName);
	outFile.open(outFileName);
	if (!inFile)
	{
		cout << "The file " << inFileName
			 << " cannot be opened.";
		exit(1);
	}
	if(!outFile)
	{
		cout << "The file " << outFileName
			 << " cannot be opened.";
		exit(1);
	}
}

//********************************************************************************
// Destructor cloes files.                                                       *
//********************************************************************************
Encryption::~Encryption()
{
	inFile.close();
	outFile.close();
}

//********************************************************************************
// Encrypt function uses the virtual transform member function to transform      *
// individual characters.                                                        *
//********************************************************************************
void Encryption::encrypt()
{
	char ch;
	char transCh;
	inFile.get(ch);
	while (!inFile.fail())
	{
		transCh = transform(ch);
		outFile.put(transCh);
		inFile.get(ch);
	}
}

// The subclass simply overides the virtual 
// transformation function.
class SimpleEncryption: public Encryption
{
public:
	char transform(char ch)
	{
		return ch + key;
	}
	SimpleEncryption(char *inFileName, char *outFileName)
	: Encryption(inFileName, outFileName)
	{
	}
};


int main()
{
	char inFileName[80], outFileName[80];
	int k;

	// Ask the user to enter the name of the unencrypted file
	cout << "Enter name of the file to encrypt: ";
	cin  >> inFileName;
	cout << "Enter name of file to receive "
		 << "the encrypted text: ";
	cin  >> outFileName;
	SimpleEncryption obfuscate(inFileName, outFileName);

	// Ask the user to enter the encryption key
	cout << "Enter an encryption key: ";
	cin  >> k;

	obfuscate.setKey(k);
	obfuscate.encrypt();
	return 0;
}