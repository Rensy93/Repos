#include "Ball.h"
#include <cmath>

//cunstruction
Ball::Ball()
{

	this->vx = 0;

}

Ball::Ball(int vx)
{

	this->vx = vx;
	
}

//destruktion

Ball::~Ball() {}

//operatiors
bool Ball::operator==(const Ball &otherBall) const
{

	return this->vx == otherBall.vx;

}
bool Ball::operator>(const Ball &otherBall) const
{

	return this->v > otherBall.v;

}

//gets

int Ball::getVx()const
{

	return this->vx;

}
double Ball::getVy(const int time)const
{

	//this->vy = g*time;
	
	return g*time;

}
double Ball::getV(const int time)const
{

	return sqrt(pow(vx, 2) + pow(this->getVy(time), 2));

}

string Ball::toString(int time)const
{

	return "Vx = " + to_string(this->vx) + "m/s " + "Vy = " 
		+ to_string(this->getVy(time)) + "m/s " 
		+ "v = " + to_string(this->getV(time)) + " m/s";

}
