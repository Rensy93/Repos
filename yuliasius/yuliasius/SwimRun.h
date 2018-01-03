#pragma once
#include<string>
#include<ctime>
#include<cstdlib>


using namespace std;


class SwimRun
{
private:
	string name;
	int runTime;
	int swimTime;

public:
	SwimRun(string name = "");
	~SwimRun();
	
	void addSwim();
	void addRun();

	string getName() const;
	string toString() const;
	int totalTid() const;

	bool operator<(const SwimRun &other) const;
	bool operator==(const SwimRun &other) const;

}; 
