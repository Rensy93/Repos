#pragma once

class Coord
{

private:

	int xPos, yPos;


public:

	Coord(int xPos = 0, int yPos = 0);
	virtual ~Coord();

	Coord* clone() const;
	int getXPos()const;
	int getYPos()const;

	void changeXPos(const int change);
	void changeYPos(const int change);
};