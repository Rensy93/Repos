#include "Student.h"


Student::Student(string name, string mail, int regNr)
	:Person(name, mail)
{
	this->regNr = regNr;
}
Student::~Student(){}

Student::Student(const Student &originalObjekt)
	:Person(originalObjekt)
{
	this->regNr = regNr;
}

void Student::operator=(const Student &originalObjekt)
{
	Person::operator=(originalObjekt);
	this->regNr = originalObjekt.regNr;
}

void Student::setRegNr(const int regNr)
{
	this->regNr = regNr;
}

int Student::getRegNr()const
{
	return this->regNr;
}

//string Student::toString()
//{
//	return Person::toString() + "\nReg Nummer: " 
//		+ to_string(this->regNr);
//
//}

string Student::toStringSpecific() const
{
	return "Reg Nummer: " + to_string(this->regNr);

}