#ifndef FRIEND_H
#define FRIEND_H

#include <string>
#include "date.h"

using namespace std;

class Friend
{
private:
    std::string name;
    Date dateOfBirth;
public:
    Friend();
    Friend(std::string name, int year, int month, int day);
    ~Friend();

	std::string getName() const;
	Date getDate() const;

    bool operator== (const Friend& other) const;

	// Based on the date of birth
    bool operator< (const Friend& other) const;

    std::string toString() const;
};

#endif
