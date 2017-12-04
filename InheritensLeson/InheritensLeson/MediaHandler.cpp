#include "MediaHandler.h"
#include "Book.h"
#include "Movi.h"

MediaHandler::MediaHandler()
{

	for (int i = 0; i < CAP; i++)
	{
		this->medias[i] = nullptr;
	}
	this->currentNrOfmedias = 0;
}
MediaHandler::~MediaHandler()
{
	for (int i = 0; i < this->currentNrOfmedias; i++)
	{
		delete this->medias[i];
	}

}

MediaHandler::MediaHandler(const MediaHandler& otherObjekt)
{
	Book* bookPtr = nullptr;
	Movi* moviPtr = nullptr;
	this->currentNrOfmedias = otherObjekt.currentNrOfmedias;
	for (int i = 0; i < this->currentNrOfmedias; i++)
	{
		bookPtr = dynamic_cast<Book*>(otherObjekt.medias[i]);
		if (bookPtr != nullptr)
		{
			this->medias[i] = otherObjekt.medias[i]; //värdelöst med ytlighet :P
			this->medias[i] = new Book(*bookPtr);
		}
		else
		{
			moviPtr = dynamic_cast<Movi*>(otherObjekt.medias[i]);
			this->medias[i] = new Movi(*moviPtr);
		}
	}

}
MediaHandler& MediaHandler::operator=(const MediaHandler& otherObjekt);

void MediaHandler::addBook(string title, string author, int year);