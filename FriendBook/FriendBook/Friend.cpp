

#include "Friend.h"

using namespace std;


//Konstruktors
Friend::Friend()
{

	this->name = "?";
	this->bYear = 0;
	this->email = "?";

}
Friend::Friend(string name, int bYear, string email)
{

	this->name = name;
	this->bYear = bYear;
	this->email = email;

}
//Destruktor
Friend::~Friend() {}

//OvewrlodingOperators
bool Friend::operator==(const Friend &otherFriend) const
{

	return this->name == otherFriend.name
		&& this->bYear == otherFriend.bYear
		&& this->email == otherFriend.email;

}

bool Friend::operator<(const Friend &otherFriend) const
{

	return this->name < otherFriend.name;

}

//gets
string Friend::getName() const
{

	return this->name;

}

int Friend::getBYear() const
{
	return this->bYear;
}

string Friend::getEmail() const
{
	return this->email;
}

//sets
void Friend::setName(string name)
{

	this->name = name;

}

void Friend::setBYear(int bYear)
{


}

void Friend::setEmail(string email)
{


}

//bettySpecial
string Friend::toString() const
{

	return "name: " + this->name + "\n" + "Was baorn: " 
		+ to_string(this->bYear) 
		+ "\n" + "Email: " + this->email;


}



//övrigt
int Friend::age(int year)const
{

	return year - this->bYear;

}
