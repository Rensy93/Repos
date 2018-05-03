#pragma once
#include<sstream>
#include<string>
using namespace std;

class NewsPaper
{
private:
	string name;
	int nummer;

public:
	NewsPaper(string name, int nummer);
	virtual~NewsPaper();
	NewsPaper(const NewsPaper &original);

	string getName() const;
	int getNummer() const;
	NewsPaper* clone() const;
	bool operator==(const NewsPaper &other) const;

	string toString() const;


};