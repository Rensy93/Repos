#include "friend.h"


Friend::Friend()
	:dateOfBirth()
{
	this->name="?";

}
Friend::Friend(std::string name, int year, int month, int day)
	:dateOfBirth(year, month, day) 
{

	this->name = name;
	//this->dateOfBirth=Date(year, month, day);
	
}
Friend::~Friend(){}

string Friend::getName() const
{
	return this->name;
}
Date Friend::getDate() const
{
	return this->dateOfBirth;
}

bool Friend::operator== (const Friend& other) const
{

	return this->name == other.name && this->dateOfBirth == other.dateOfBirth;

}

// Based on the date of birth
bool Friend::operator< (const Friend& other) const
{
	return this->dateOfBirth < other.dateOfBirth;
}

string Friend::toString() const
{
	string statment = "Name: "+this->name+" date: " + this->dateOfBirth.toString();
	
	return statment;
}