#include "Movi.h"

Movi::Movi()
	:Media()
{
	this->playTime = 0;
	this->MainActor ="?";
}
Movi::Movi(string title, int pubYear, int playTime, string mainActore)
	:Media(title, pubYear)
{
	this->playTime = playTime;
	this->MainActor = mainActore;
}
Movi::~Movi(){}

int Movi::getPlayTime()const
{
	return this->playTime;
}


string Movi::getMainActhor()const
{
	return this->MainActor;
}

void Movi::setPlaytime(const int playTime)
{
	this->playTime = playTime;
}

void Movi::setMainActor(const string mainActor)
{
	this->MainActor = mainActor;
}


string Movi::toStringSpecifik() const
{
	return " And has a play time of: " 
		+ to_string(this->playTime) + "ft."+MainActor;
}

Movi* Movi::clone() const
{
	return new Movi(*this);
}
