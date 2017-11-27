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

string Book::toString() const
{
	return Media::toString() + "By: " +this->author;
}
