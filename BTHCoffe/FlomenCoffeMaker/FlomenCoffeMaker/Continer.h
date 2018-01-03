#pragma once

#include <string>

using namespace std;

const double MAX_CAP = 20;

class Continer
{

private:
	double leftCount;

	bool isEmty();
	void refill();

public:

	Continer();
	~Continer();
	void changCounter();

};