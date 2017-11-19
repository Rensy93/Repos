#pragma once
#include "Person.h"

class Student :public Person
{
private:
	int regNr;

public:

	Student(string name = "", string mail = "", int regNr = 0);
	virtual~Student();

	Student(const Student &originalObjekt);

	void operator=(const Student &originalObjekt);

	void setRegNr(const int regNr);

	int getRegNr()const;

	//string toString();

	virtual string toStringSpecific() const;
};