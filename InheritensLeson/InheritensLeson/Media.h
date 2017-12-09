#pragma once
#include <string>

using namespace std;


//�r en abstract klass d� den inh�ller mins en  rent viruell funktion
//Det g�r inte att skapa objekt av denna klassen. 
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
	//virtual string toString() const;//viriautel medf�r sen bindning, dynamisk bindning
									// om inte virtual �r tidig bindning, static binding 							

	string toString()const;//no shadow prests on this one :P
	virtual string toStringSpecifik()const = 0; //a pure virtual needs to be difiend in childclasses

};