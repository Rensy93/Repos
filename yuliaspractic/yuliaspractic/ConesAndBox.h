#pragma once
#include"Box.h"
#include"Cone.h"

class Boxes
{
private:
	static const int cap = 10;
	Box* boxes[cap];
	int nrOf;
	
public:
	Boxes();
	~Boxes();
};
