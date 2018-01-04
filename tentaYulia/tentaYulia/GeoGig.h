#pragma once
#include<string>
#include<sstream>

using namespace std;

class GeoFig
{
private:
	int x;
	int y;
public:
	GeoFig(int x = 0, int y = 0);
	virtual~GeoFig();

	int getX() const;
	int getY() const;
	
	void setX(int xCoord);
	void setY(int yCoord);

	virtual string toStringSpec() const = 0;

	string toString() const;

};