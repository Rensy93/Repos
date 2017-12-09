#include "Book.h"


Book::Book()
	:Media()
{
	this->author = "?";
}
Book::Book(string title, int pubYear, string author)
	: Media(title, pubYear)
{
	this->author = author;
}
Book::~Book(){}

string Book::getAuthor() const
{
	return this->author;
}
void Book::setAuthor(const string Author)
{
	this->author = author;
}

string Book::toStringSpecifik() const
{
	return "By: " +this->author;
}

Book::Book(const Book &otherObjekt)
	:Media(otherObjekt)
{
	this->author = otherObjekt.author;
}
Book* Book::clone() const
{
	return new Book(*this);
}