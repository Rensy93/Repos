#pragma once
#include <string>

using namespace std;

class Person
{
private:

	string name;
	string mail;


public:

	Person();
	Person(string name, string mail);
	virtual~Person();

	Person(const Person &originalobjekt);

	void operator=(const Person &Originalobjekt);

	void setName(const string name);
	void setMail(const string mail);

	string getName()const;
	string getMail()const;

	string toString();

	//pure virtual functions
	virtual string toStringSpecific() const = 0;
};