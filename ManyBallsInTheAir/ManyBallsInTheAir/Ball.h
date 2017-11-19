#pragma once

#include <string>

using namespace std;
const double g = 9.82;

class Ball
{

private:

	int vx;
	double vy, v;


public:
	//cunstruktion
	Ball();
	Ball(int vx);

	//destruktion
	~Ball();

	//operatiors
	bool operator==(const Ball &otherBall) const;
	bool operator>(const Ball &otherBall) const;

	//gets
	int getVx()const;
	double getVy(const int time)const;
	double getV(const int time)const;

	string toString(int time)const;


};
