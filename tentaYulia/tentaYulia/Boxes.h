#pragma once
#include"Parral.h"

#include <vector>
#include <string>

using namespace std;



class Boxes
{
private:
	static const int cap = 10;
	int nrOf;
	Parral *boxy[cap];
	//eller
	Parral boxy2[cap];
	


public:
	Boxes();
	virtual~Boxes();

};