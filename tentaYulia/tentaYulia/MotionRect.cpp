#include"MotionRect.h"
#include<ctime>
#include<cstdlib>

using namespace std;



MotionRect::MotionRect(int x, int y, int hight, int wight)
	:Rect(x, y, hight, wight)
{

}
MotionRect::~MotionRect()
{

}

void MotionRect::changeX() 
{
	this->setX(rand() % 5 -4);
}
void MotionRect::changeY()
{
	this->setX(rand() % 4  - 3);
}
string MotionRect::toStringMot() const 
{
	stringstream out;
	out << "New x-coord " << this->getX() << " New y-coord " << this->getY() << endl;
	return out.str();
}