#include "SwimRun.h"
#include<sstream>


SwimRun::SwimRun(string name)
{
	this->name = name;
	this->swimTime = 0;
	this->runTime = 0;
}
SwimRun::~SwimRun()
{

}

void SwimRun::addSwim()
{
	this->swimTime += rand() % 241 + 240;
}
void SwimRun::addRun()
{

	this->runTime += rand() % (661 - 360) + 360;
}

string SwimRun::getName() const
{
	return this->name;
}
string SwimRun::toString() const
{
	stringstream out;
	out << "Team\n" << this->name<<"\n"
		<< "Swiming time: " << this->swimTime << "\n"
		<< "Running time: " << this->runTime<<"\n"
		<<"Total: "<<this->totalTid()<< endl;
	return out.str();
}
int SwimRun::totalTid() const
{
	return this->swimTime + runTime;
}
bool SwimRun::operator<(const SwimRun &other) const
{
	bool isOk = false;
	if (this->totalTid() < other.totalTid())
	{
		isOk = true;
	}
	return isOk;
}
bool SwimRun::operator==(const SwimRun &other) const
{
	bool isEqual = false;
	if (this->name == other.name)
	{
		isEqual = true;
	}
	return isEqual;
}

