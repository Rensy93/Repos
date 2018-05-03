#include "Figure.h"

Figure::Figure(double height)
{
	this->height = height;
}
Figure::~Figure()
{

}

double Figure::getHeight() const
{
	return this->height;
}

string Figure::toString() const
{
	stringstream out;
	out << "The height is " << this->height << toStringSpec() << endl;
	return out.str();
}