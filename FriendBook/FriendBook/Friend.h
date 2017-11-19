#pragma once

#include <string>

using namespace std;

class Friend
{

private:

	string name;
	int bYear;
	string email;


public:

	//konstruktors and destruktors
	Friend();
	Friend(string name, int bYear, string email);
	~Friend();

	//overlodingOperators
	bool Friend::operator==(const Friend &otherFriend) const;
	bool operator<(const Friend &otherFriend) const;

	//gets and sets
	string getName() const;
	int getBYear() const;
	string getEmail()const;

	void setName(string name);
	void setBYear(int bYear);
	void setEmail(string email);

	//betty special
	string toString()const;

	//övrigt
	int age(int year)const;

};