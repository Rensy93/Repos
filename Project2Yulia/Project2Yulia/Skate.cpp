#include"Skate.h"
#include<sstream>
#include<ctime>
#include<cstdlib>

using namespace std;

Skate::Skate(string name)
{
	this->name = name;
	this->round = 0;
}
Skate::~Skate()
{

}

void Skate::addPoints()
{
	if (round < 3)
	{
		this->points[round++] = rand() % (101 - 1) + 1;
	}
}

string Skate::getName() const
{
	return this->name;
}
int Skate::getTotal() const
{
	int tot = 0;
	for (int i = 0; i < round && points[i]!=0; i++)
	{
		tot += points[i];
	}
		
	
	return tot;
}

bool Skate::operator<(const Skate &other) const
{
	bool isOk = false;
	if (this->getTotal() < other.getTotal())
	{
		isOk = true;
	}
	return isOk;
}
bool Skate::operator==(const Skate &other) const
{
	bool isOk = false;
	if (this->name == other.name)
	{
		isOk = true;
	}
	return isOk;
}

string Skate::toString() const
{
	stringstream out;
	out << "Name  " << this->name << "\n" << "Points: \n";
	for(int i=0; i<round; i++)
	out <<i+1 << this->points[i] << "\n";

	return out.str();
}

