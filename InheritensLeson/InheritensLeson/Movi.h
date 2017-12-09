#pragma once
#include "Media.h"

class Movi :public Media
{
private:

	int playTime;
	string MainActor;

public:

	Movi();
	Movi(string title, int pubYear, int playTime, string mainActore);
	~Movi();

	int getPlayTime()const;
	string getMainActhor()const;

	void setPlaytime(const int playTime);
	void setMainActor(const string mainActor);

	//Betty Special
	//överskugning
	//string toString() const;
	string toStringSpecifik() const;
	Movi* Movi::clone() const;
};