#pragma once
#include <string>

using namespace std;

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

	//Betty special
	virtual string toString() const;//viriautel medför sen bindning, dynamisk bindning
									// om inte virtual är tidig bindning, static binding 							

};