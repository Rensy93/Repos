#include "SwimRun.h"
#include <cstdlib>

//kon- och deKonstroktors
SwimRun::SwimRun()
{
	this->teamName = "-";
	this->totalSwimTime = 0;
	this->totalRuntime = 0;

}
SwimRun::SwimRun(string name)
{

	this->teamName = name;
	this->totalSwimTime = 0;
	this->totalRuntime = 0;

}
SwimRun::~SwimRun() {}

//betty special
string SwimRun::toString()const
{
	string statement = "Team name: " + this->teamName
		+ " \nTotal time for swiming: " + to_string(this->totalSwimTime)
		+ " \nTotal time for runging: " + to_string(this->totalRuntime)
		+ " \nTotal time: " + to_string(this->totalTime())+"\n";

	return statement;
}

//funktioner
string SwimRun::getTeamName()const
{
	return this->teamName;
}

int SwimRun::totalTime()const
{

	return this->totalSwimTime + this->totalRuntime;

}

void SwimRun::addSwimTime()
{

	totalSwimTime += rand() % (480 - 240) + 240;

}

void SwimRun::addRunTime()
{

	totalRuntime += rand() % (660 - 360) + 360;
	
}

//operatoror
bool SwimRun::operator<(const SwimRun &otherObjekt)const
{
	return this->totalTime() < otherObjekt.totalTime();
}

bool SwimRun::operator==(const SwimRun &otherObjekt)const
{

	return this->teamName == otherObjekt.teamName;


}