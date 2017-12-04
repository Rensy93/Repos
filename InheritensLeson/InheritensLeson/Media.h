#pragma once
#include <string>

using namespace std;


//är en abstract klass då den inhåller mins en  rent viruell funktion
//Det går inte att skapa objekt av denna klassen. 
class Media
{
private:

	string title ="";
	int pubYear=0;

public:

	Media();
	Media(string title, int pubYear);
	virtual ~Media();

	string getTitle() const;
	int getPubYear() const;

	void setTitle(const string title);
	void setPubYear(const int pubYear);

	virtual Media* clone() const = 0;//skapa en kopia och retunera

	//Betty special
	//virtual string toString() const;//viriautel medför sen bindning, dynamisk bindning
									// om inte virtual är tidig bindning, static binding 							

	string toString()const;//no shadow prests on this one :P
	virtual string toStringSpecifik()const = 0; //a pure virtual needs to be difiend in childclasses

};