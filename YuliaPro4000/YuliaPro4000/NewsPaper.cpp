#include"NewsPaper.h"


NewsPaper::NewsPaper(string name, int nummer)
{
	this->name = name;
	this->nummer = nummer;
}
NewsPaper::~NewsPaper()
{

}
NewsPaper::NewsPaper(const NewsPaper &original)
{
	this->name = original.name;
	this->nummer = original.nummer;
}

string NewsPaper::getName() const
{
	return this->name;
}
int NewsPaper::getNummer() const
{
	return this-> nummer;
}
NewsPaper* NewsPaper::clone() const
{
	return new NewsPaper(*this);
}
bool NewsPaper::operator==(const NewsPaper &other) const
{
	bool isEqual = false;
	if (this->getName() == other.name && this->getNummer() == other.nummer)
	{
		isEqual = true;
	}
	return isEqual;
}

string NewsPaper::toString() const
{
	stringstream out;
	out << "The name is " << this->name << endl << "Number is " << this->nummer << endl;
	return out.str();
}