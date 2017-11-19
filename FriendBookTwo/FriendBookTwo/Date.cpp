#include "date.h"
#include <sstream>

using namespace std;

Date::Date()
{
	this->year=0;
	this->month=0;
	this->day=0;

}
Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
Date::~Date()
{

}

int Date::getYear() const
{
	return this->year;
}
int Date::getMonth() const
{
	return this->year;
}
int Date::getDay() const
{
	return this->year;
}

bool Date::operator== (const Date& other) const
{
	return this->year == other.year 
		&& this->month == other.month 
		&& this->day == other.day;
}
bool Date::operator< (const Date& other) const
{
	bool isLessthen = false;

	if (this->year == other.year)
	{
		if (this->month == other.month)
		{
			if (this->day > other.day)
			{
				isLessthen = true;
			}
		}
		else if (this->month > other.month)
		{
			isLessthen =true;
		}
	}
	else if (this->year > other.year)
	{
		isLessthen = true;
	}
	
	return isLessthen; 
}



Date& Date::operator= (const Date& other)
{
	this->year = other.year;
	this->month = other.month;
	this->day = other.day;

	return *this;

}

string Date::toString() const
{
	stringstream out;

	out << this->year << "\t" << this->month << "\t" << this - month;
}