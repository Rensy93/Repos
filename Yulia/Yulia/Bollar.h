#pragma once
//
// Created by Yulia Lizneva on 2017-10-06.
//

#ifndef UNTITLED6_BOLLARUPPGIFT_H
#define UNTITLED6_BOLLARUPPGIFT_H

#include <string>
using namespace std;

const double aceleration = 9.82;
class Bollar
{

private:

	int speedX;

public:

	Bollar(double speedX);

	Bollar();

	int getSpeedX() const;
	double getSpeedY(int travelTime) const;
	double getResultant(int travelTIme) const;

	void setSpeedX(int speedX);


	bool operator==(const Bollar &otherball) const;
	bool operator >(const Bollar &otherball) const;

	string toString(int travelTime) const;










};


#endif //UNTITLED6_BOLLARUPPGIFT_H
