#ifndef DATE_H
#define DATE_H

#include <string>

class Date
{
private:
    int year;
    int month;
    int day;
public:
    Date();
    Date(int year, int month, int day);
    ~Date();

	int getYear() const;
	int getMonth() const;
	int getDay() const;

    bool operator== (const Date& other) const;
    bool operator< (const Date& other) const;
    Date& operator= (const Date& other);

    std::string toString() const;
};

#endif
