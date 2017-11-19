#ifndef FRIENDBOOK_H
#define FRIENDBOOK_H

#include <string>
#include "friend.h"
#include <iostream>
#include <fstream>

class FriendBook
{
private:
    int nrOfFriends = 0; // The current number of friends in the friendbook
    static const int maxNrOfFriends = 10; // The maximum number of friends the friendbook can hold
    //Friend friends[maxNrOfFriends]; // The internal storage array that holds all the friend objects that have been added to the friendbook
	Friend* *friends;
	std::string owner;
	int year;

	void freeMemory();
	void makeCopy(const FriendBook &originalObject);
	void expand();

public:
    FriendBook(); // constructor
	FriendBook(string owner, int year);
	FriendBook(const FriendBook &originalObject);
    ~FriendBook(); // destructor

	// Adds a friend to the internal array based on the parameters, but only if there is room in the internal array and the friend to be added does not already exist in the friendbook
    bool addFriend(std::string name, int year, int month, int day);

	// Removes a friend specified by the parameters from the internal array if it exists in the friendbook
    bool removeFriend(std::string name, int year, int month, int day);

	// Searches through the internal array to see if a friend matching the parameters can be found and returns the index if it finds one, otherwise returns -1
    int existFriend(std::string name, int year, int month, int day) const;

	// Fills arr with the toString information of all the internally stored friends with the indicated year, but will not fill more spots than indicated by the n parameter
    void getNameAndAgeAsStringsOfFriends(std::string arr[], int n, int year) const;

	// Returns the number of friends currently in the friendbook
    int getNrOfFriends() const;

	// Get and set functions for the friendbooks owner and year
    std::string getOwner() const;
    void setOwner(std::string owner);
    int getYear() const;
    void setYear(int year);

	// Clears the friendbook
    void clear();

	// Fills arr with the toString information of all the internally stored friends, but will not fill more spots than indicated by the n parameter
    void getFriendsAsString(std::string arr[], int n);

	// Saves all the friends currently in the friendbook to a file with a given filename
    void saveOnFile(std::string filename) const;

	// Reads the file given by the filename and fills the friendbook with friends based on the data in the file
    void readFromFile(std::string filename);

	// Fills arr with the toString information of all the internally stored friends in a sorted order, but will not fill more spots than indicated by the n parameter
    // The member function require <operator for Friend
	// Should not change the internal order of the Friends
    void getFriendsAsStringsSorted(std::string arr[], int n); 

	// Returns all the information in the friendbook as a string
    std::string toString();
};

#endif
