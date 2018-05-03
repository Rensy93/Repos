#include "newsPaper.h"

NewsPaper::NewsPaper(string namn, int presing)
{
	this->namn = namn;
	this->presing = presing;
}
NewsPaper::~NewsPaper(){}
NewsPaper::NewsPaper(const NewsPaper &ob)
{
	this->namn = ob.namn;
	this->presing = ob.presing;
}

NewsPaper* NewsPaper::clon() const
{
	return new NewsPaper(*this);
}
bool NewsPaper::operator==(const NewsPaper &ob) const
{
	return this->namn == ob.namn;
}
//NewsPaper& NewsPaper::operator=(const NewsPaper &ob)
//{
//	if (this != &ob)
//	{
//		this->freeMemory();
//		this->deepCopy(original);
//	}
//	return *this;
//}

string NewsPaper::getNamn() const
{
	return this->namn;
}
int NewsPaper::getPresing() const
{
	return this->presing;
}

string NewsPaper::toString() const
{
	string statment = "";

	statment += "Namn: " + this->namn + "\nPresing nr: " + to_string(this->presing);

	return statment;
}

