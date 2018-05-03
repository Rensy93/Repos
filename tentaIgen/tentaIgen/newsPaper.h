#pragma once
#include <string>
using namespace std;

class NewsPaper
{
private:

	string namn;
	int presing;

public:

	NewsPaper(string namn = "", int presing = 0);
	virtual ~NewsPaper();
	NewsPaper(const NewsPaper &ob);

	NewsPaper* clon() const;
	bool operator==(const NewsPaper &ob) const;
	//NewsPaper& operator=(const NewsPaper &ob);


	string getNamn() const;
	int getPresing() const;

	string toString() const;


};