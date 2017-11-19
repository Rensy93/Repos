#pragma once
#include <string>
using namespace std;
const double pi = 3.1415;


class Circal
{
private:

	int radius, x ,y;


public:
	Circal();
	Circal(int raidus);
	Circal(int raidusm, int x, int y);
	~Circal();

	bool operator==(const Circal &otherCircle) const;
	bool operator!=(const Circal &otherCircle) const;


	string toString()const;

	int getRadius() const;
	int getX() const;
	int getY() const;


	void setRadius(int radius);
	
	double area()const;
	double circrumference()const;

	void move(int x, int y);



};

