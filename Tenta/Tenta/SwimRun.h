#pragma once
#include <string>

using namespace std;

class SwimRun
{

private:

	string teamName;
	int totalSwimTime;
	int totalRuntime;

public:

	//kon- och deKonstroktors
	SwimRun();
	SwimRun(string name);
	~SwimRun();

	//betty special
	string toString()const;

	//funktioner
	string getTeamName()const;
	int totalTime()const;

	void addSwimTime();
	void addRunTime();

	//operatoror
	bool operator<(const SwimRun &otherObjekt)const;
	bool operator==(const SwimRun &otherObjekt)const;


};