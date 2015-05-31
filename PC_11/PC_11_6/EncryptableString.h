#ifndef ENCRYPTABLESTRING_H
#define ENCRYPTABLESTRING_H
using namespace std;

class EncryptableString : public string
{
	string str;
public:
	EncryptableString() : string()
	{}
	EncryptableString(string str) : string(str)
	{ this->str = str; }
	void encrypt();
};
#endif