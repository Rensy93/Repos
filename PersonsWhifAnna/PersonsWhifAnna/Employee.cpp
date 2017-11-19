#include "Employee.h"


Employee::Employee(string name, string mail, string Department)
	:Person(name, mail)
{
	this->department = department;
}
Employee::~Employee() {}

Employee::Employee(const Employee &originalObjekt)
	:Person(originalObjekt)
{
	this->department = originalObjekt.department;
}

void Employee::operator=(const Employee &originalObjekt)
{
	Person::operator=(originalObjekt);
	this->department = originalObjekt.department;
}
	
void Employee::setDepartment(const string department)
{
	this->department = department;
}

string Employee::getDepartment()const
{
	return this->department;
}

//string Employee::toString()
//{
//	return Person::toString() + "Department: " + department;
//}

string Employee::toStringSpecific() const
{
	return "Department: " + this->department;

}