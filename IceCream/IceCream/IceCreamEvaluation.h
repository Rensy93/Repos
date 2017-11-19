#pragma once
#include <string>

using namespace std;


class IceCreamEvaluation
{

private:

	string name;
	int points;
	int nrOfJudgments;

public:

	//kon- & de-kunstruktors
	IceCreamEvaluation();
	IceCreamEvaluation(string name);
	~IceCreamEvaluation();

	//operators
	bool operator==(IceCreamEvaluation otherObhjekt);
	bool operator>(IceCreamEvaluation otherObhjekt);

	//get
	int getNrOfJudgments() const;
	int averagepoints() const;

	//betty special
	string toString() const;

	//points
	void addPoints(int points);

};