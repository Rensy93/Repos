#pragma once
#include"Cone.h"
#include"Parral.h"

using namespace std;

class ConesAndBox 
{
private:
	Cone cones[2];
	Parral box;

public:
	ConesAndBox();
	virtual~ConesAndBox();
};