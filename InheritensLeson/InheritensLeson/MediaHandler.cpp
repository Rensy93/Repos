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
		//bookPtr = dynamic_cast<Book*>(otherObjekt.medias[i]);
		//if (bookPtr != nullptr)
		//{
		//	this->medias[i] = otherObjekt.medias[i]; //värdelöst med ytlighet :P
		//	this->medias[i] = new Book(*bookPtr);
		//}
		//else
		//{
		//	moviPtr = dynamic_cast<Movi*>(otherObjekt.medias[i]);
		//	this->medias[i] = new Movi(*moviPtr);
		//}

		//Pro Lösning
		this->medias[i] = otherObjekt.medias[i]->clone();
	}

}
MediaHandler& MediaHandler::operator=(const MediaHandler& otherObjekt)
{
	Book* bookPtr = nullptr;
	Movi* moviPtr = nullptr;
	this->currentNrOfmedias = otherObjekt.currentNrOfmedias;
	if (this != &otherObjekt)
	{
		for (int i = 0; i < currentNrOfmedias; i++)
		{
			delete this->medias[i];
		}
		//kopiera från otherObjekt
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
	return *this;
}

void MediaHandler::addBook(string title, int pubYear, string author)
{

	this->medias[currentNrOfmedias++] = Book(title,pubYear, author);
}

void MediaHandler::getAllMoviesAsString(string arr[], int CApOfArr)
{
	int counter = 0;
	for (int i = 0; i < this->currentNrOfmedias; i++)
	{
		if (dynamic_cast<Movi*>(this->medias[i]) != nullptr)
		{
			arr[counter++] = this->medias[i]->toString();
		}
	}
}
void MediaHandler::getAllMoviesAsString(string arr[], int CApOfArr)
{
	for (int i = 0; i < this->currentNrOfmedias; i++)
	{
		
			arr[i] = this->medias[i]->toString();
		
	}
}
void MediaHandler::getAllTitlesOfAuthor(string theAuthor, string arr[], int CApOfArr, int &nrOfTitles) const
{
	int counter = 0;
	Book* bookPtr = nullptr;
	for (int i = 0; i < this->currentNrOfmedias; i++)
	{
		bookPtr = dynamic_cast<Book*>(this->medias[i]);
		if (bookPtr != nullptr)
		{
			if (bookPtr->getTitle==theAuthor)
				arr[counter++] = bookPtr->getAuthor();
		}
	}
}
