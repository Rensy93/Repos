#include "IceCreamEvaluation.h"

//kon- & de-kunstruktors
IceCreamEvaluation::IceCreamEvaluation()
{
	this->name = "";
	this->points = 0;
	this->averagepoints = 0;
}
IceCreamEvaluation::IceCreamEvaluation(string name)
{
	this->name = name;
	this->points = 0;
	this->nrOfJudgments = 0;
}
IceCreamEvaluation::~IceCreamEvaluation()
{

	this->name = "";
	this->points = 0;
	this->nrOfJudgments = 0;

}

//operators
bool IceCreamEvaluation::operator==(IceCreamEvaluation otherObhjekt)
{

	return this->name == otherObhjekt.name;

}


bool IceCreamEvaluation::operator>(IceCreamEvaluation otherObhjekt)
{

	return this->averagepoints() > otherObhjekt.averagepoints();

}

//get
int IceCreamEvaluation::getNrOfJudgments()const
{
	return nrOfJudgments;
}

int IceCreamEvaluation::averagepoints()const
{

	return points / nrOfJudgments;

}

//betty special
string IceCreamEvaluation::toString()const
{
	string statment;

	statment = "Name " + this->name + " number of jugments: " 
		+ to_string(this->nrOfJudgments)
		+ " Average points " + to_string(averagepoints());

	return statment;

}

//points
void IceCreamEvaluation::addPoints(int NewPoint)
{


	this->points += NewPoint;


}






