#pragma once

#include <string>
using namespace std;
//Klasdeklaration
class Friend
{
	
private: //private inne bär att det som hamnar här är inte åtkomligt untan för objektet.
	
	//this varibals is cald members varibals witch every objekt hars its own values.
	string name;
	int birthYear;
	string email;

public: // accesible out side objekt
	//konstruktor, the part that createt the objeck and it's name is alwayes the same as the class
	Friend();
	Friend(string name, int birtYear, string email);
	
	~Friend(); // destruktor ~ <-tilde


	//operatoröverlagring
	bool operator==(const Friend &otherFriend) const;
	bool operator<(const Friend &otherFriend) const;
	bool operator<=(const int nr) const;
	bool operator>=(const int nr) const;

	//operators



	//gets
	string getName() const;//const gör att det inte kan ändra inne hålet 
	int getBirthYear() const;
	string getEmail() const;
	
	//sets
	void setName(string newName);
	void setBirthYear(int newBirthYear);
	void setEmail(string newEmail);


	//betty special
	string toString()const;

	//övrigt
	int age(int year)const;
	

};
