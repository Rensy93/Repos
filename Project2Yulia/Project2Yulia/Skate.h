#pragma once
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;


class Skate
{
private:
	string name;
	int points[3] = {};
	int round;

public:
	Skate(string name = "");
	~Skate();

	void addPoints();

	string getName() const;
	int getTotal() const;

	bool operator<(const Skate &other) const;
	bool operator==(const Skate &other) const;

	string toString() const;
};