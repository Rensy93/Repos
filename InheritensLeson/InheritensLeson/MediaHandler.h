#pragma once
#include "Media.h"

class MediaHandler
{
private:
	static const int CAP = 20;
	Media* medias[CAP];
	int currentNrOfmedias;

public:
	MediaHandler();
	virtual ~MediaHandler();

	MediaHandler(const MediaHandler& otherObjekt);
	MediaHandler& operator=(const MediaHandler& otherObjekt);

	void addBook(string title, string author, int year);

};
