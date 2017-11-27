#include "Media.h"


Media::Media()
{
	this->title = "?";
	this->pubYear = 0;
}
Media::Media(string title, int pubYear)
{
	this->title = title;
	this->pubYear = pubYear;
}

Media::~Media(){}

string Media::getTitle() const
{
	return this->title;
}

int Media::getPubYear() const
{
	return this->pubYear;
}

void Media::setTitle(const string title)
{
	this->title = title;
}
void Media::setPubYear(const int pubYear)
{
	this->pubYear = pubYear;
}

string Media::toString() const
{
	return this->title + " was published: "+to_string(pubYear);
}
