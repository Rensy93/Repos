#pragma once
#include"Rect.h"

using namespace std;

class MotionRect : public Rect
{

public:
	MotionRect(int x, int y, int hight, int wight);
	virtual~MotionRect();

	void changeX();
	void changeY();
	string toStringMot() const;

};