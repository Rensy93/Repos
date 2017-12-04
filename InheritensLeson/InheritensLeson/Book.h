#pragma once

#include "Media.h"

class Book : public Media
{

private:
	string author;

public:
	Book(const Book &otherObjekt);
	Book();
	Book(string title, int pubYear, string author);
	~Book();

	string getAuthor() const;
	void setAuthor(const string Author);

	//betty Special
	string toStringSpecifik() const;
	Media* Book::clone() const

};