#pragma once
#include "Person.h"

class Employee :public Person
{
private:
	string department;

public:

	Employee(string name = "", string mail = "", string department="");
	virtual~Employee();

	Employee(const Employee &originalObjekt);

	void operator=(const Employee &originalObjekt);
	void setDepartment(const string department);

	string getDepartment()const;
	//string toString();

	virtual string toStringSpecific() const;

};