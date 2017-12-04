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

	void addBook(string title, int pubYear, string author);
	void addMovi(string title, int pubYear, int playTime, string mainActore);
	void getAllMediasAsString(string arr[], int CApOfArr) const;

	int getCurrentNr()const;

	int nrOfBooks() const;
	int nrOfMovies()  const;
	void getAllBooksAsString(string arr[], int CApOfArr);
	void getAllMoviesAsString(string arr[], int CApOfArr);
	void getAllTitlesOfAuthor(string theAuthor, string arr[], int CApOfArr, int &nrOfTitles) const;
	int longestPlayerTime() const;

};
