#include "Person.h"



Person::Person()
{
	this->name = "";
	this->mail = "";
}
Person::Person(string name, string mail)
{
	this->name = name;
	this->mail = mail;
}
Person::~Person(){}

Person::Person(const Person &originalobjekt)
{
	this->name = originalobjekt.name;
	this->mail = originalobjekt.mail;
}

void Person::operator=(const Person &Originalobjekt)
{
	this->name = Originalobjekt.name;
	this->mail = Originalobjekt.mail;
}

void Person::setName(const string name)
{
	 this->name=name;
}

void Person::setMail(const string mail)
{
	this->mail = mail;
}

string Person::getMail()const
{
	return this->name;
}
string Person::getName()const
{
	return this->mail;
}

string Person::toString()
{
	return "name: " + this->name + "\nMail: " + this->mail+"\n"+toStringSpecific();
}