//Class defination
#include <iostream>
#include <string>

#include "Friend.h"

using namespace std;

//Friand = Class
// :: scope-operatorn
// Friend(parameterlista) konstruktorn i classen
Friend::Friend()
{
	this->name = "?";
	this->birthYear = -1;
	this->email = "?";
}

Friend::Friend(string name, int birthYear, string email)
{

	// this->name är objektets name
	this->name = name;
	this->birthYear = birthYear;
	this->email = email;

}

Friend::~Friend()
{

	//cout << "destruering av " << this->name << " was complited :D" << endl;

}


bool Friend::operator<(const Friend &otherFriend) const
{

	return this->name < otherFriend.name;

}

bool Friend::operator==(const Friend &otherFriend) const
{
	bool isEqual = false;

	if (this->name == otherFriend.getName()	&& this->birthYear == otherFriend.getBirthYear() && this->email == otherFriend.getEmail())
	{

		isEqual = true;

	}

	return isEqual;

		/*return this->name == otherFriend.name
			&& this->setBirthYear == otherFriend.name
			&& this->email == otherFriend.email;*/
}

bool Friend::operator<=(const int nr) const
{

	return this->age(2017) <= nr;

}

bool Friend::operator>=(const int nr) const
{

	return this->age(2017) >= nr;

}
//operatoror

string Friend::getName() const
{
	return this->name;
}

int Friend::getBirthYear() const
{
	return this->birthYear;
}

string Friend::getEmail() const
{
	return this->email;
}

void Friend::setName(string newName)
{

	this->name = newName;

}
void Friend::setBirthYear(int newBirthYear)
{

	this->birthYear = newBirthYear;

}
void Friend::setEmail(string newEmail)
{

	this->email = newEmail;

}

int Friend::age(int year) const
{
	return year - this->birthYear;
}

string Friend::toString() const
{
	/*string info;

	info = "name: ";
	info += this->name;
	info +=*/

	return "name: " + this->name + "\n" + "Was born: " 
			+ to_string(this->birthYear) + "\n"
			+ "Email: " + this->email;

}

