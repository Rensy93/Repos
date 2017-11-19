#include "friendBook.h"


using namespace std;

void FriendBook::freeMemory()
{

	for (int i = 0; i < this->nrOfFriends; i++)
	{

		if (this->friends[i] != nullptr)
			delete this->friends[i];
	
	}

	delete[] this->friends;

}

void FriendBook::expand()
{
	this->maxNrOfFriends += 10;
	Friend* *temp = new Friend*[this->maxNrOfFriends];

	for (int i = 0; i < this->nrOfFriends; i++)
	{

		temp[i] = this->friends[i];
	}

	delete[] this->friends;
	this->friends = temp;
	temp = nullptr;


}

void FriendBook::makeCopy(const FriendBook &originalObject)
{

	this->maxNrOfFriends = originalObject.maxNrOfFriends;
	this->nrOfFriends = originalObject.nrOfFriends;

	this->friends = new Friend*[originalObject.maxNrOfFriends];
 
	for (int i = 0; i < originalObject.nrOfFriends; i++)
	{
		this->friends[i] = new Friend(*originalObject.friends[i]);
	}

	//initiet()
}

FriendBook::FriendBook() // constructor
{
	this->owner = "?";
	this->year = 0;
}

//annas konstruktor variant
//FriendBook::FriendBook(int capasity) // constructor
//{
//	this->nrOfFriends = 0;
//	this->maxNrOfFriends = capasity;
//	this->friends = new Friend*[this->maxNrOfFriends];
//	this->owner = "?";
//	this->year = 0;
//}

//copykonstruktor
//FriendBook::FriendBook(const FriendBook &originalObjekt)
//{
//	this->makeCopy(originalObjekt);
//}

// = med anna
//FriendBook& FriendBook::operator=(const FriendBook &originaleObject)
//{
//	if (this != &originaleObject)
//	{
//		this->freeMemory();
//		this->makeCopy(originaleObject);
//	}
//
//	return *this;
//}

FriendBook::FriendBook(string owner, int year) // constructor
{
	this->owner = owner;
	this->year = year;
}
FriendBook::~FriendBook() // destructor
{
	freeMemory();
	this->nrOfFriends = 0;
}
// Adds a friend to the internal array based on the parameters, but only if there is room in the internal array and the friend to be added does not already exist in the friendbook
bool FriendBook::addFriend(std::string name, int year, int month, int day)
{
	bool completed = false;
	int pos = existFriend(name, year, month, day);
	
	if (pos != -1)
	{
		friends[pos] = Friend(name, year, month, day);
		nrOfFriends++;
		completed = true;
	}
	else
	{
		cout << "this friend dose alredy exist!!" << endl;
	}
	return completed;
}

//Annas add
bool FriendBook::addFriend(std::string name, int year, int month, int day)
{
	bool added = false;

	if (existFriend(name, year, month, day) == -1)
	{
		if (this->nrOfFriends == this->maxNrOfFriends)
		{
			this->expand();
		}

		this->friends[nrOfFriends++] = new Friend(name, year, month, day);
		added = true;
	}

	return added
}

// Removes a friend specified by the parameters from the internal array if it exists in the friendbook
bool FriendBook::removeFriend(std::string name, int year, int month, int day)
{
	bool completed = false;
	int pos = existFriend(name, year, month, day);

	if (pos != -1)
	{
		friends[pos] = friends[nrOfFriends];
		nrOfFriends--;
		completed = true;
	}
	else
	{
		cout << "this friend dose not exist!!" << endl;
	}

	return completed;

}

// Searches through the internal array to see if a friend matching the parameters can be found and returns the index if it finds one, otherwise returns -1
int FriendBook::existFriend(std::string name, int year, int month, int day) const
{
	int pos = -1;
	Friend tempFriend(name, year, month, day);
	for (int i = 0; i < maxNrOfFriends && pos == -1; i++)
	{
		if (tempFriend == friends[i])
		{
			pos = i;
		}
	}
	return pos;
}

// Fills arr with the toString information of all the internally stored friends with the indicated year, but will not fill more spots than indicated by the n parameter
void FriendBook::getNameAndAgeAsStringsOfFriends(string arr[], int n, int year) const
{
	int c = 0;
	for (int i = 0; i < nrOfFriends && i<n; i++)
	{
		if (friends[i].getDate().getYear() == year)
		{
			arr[c] = friends[i].toString();
			c++;
		}

	}
}


// Returns the number of friends currently in the friendbook
int FriendBook::getNrOfFriends() const
{
	return this->nrOfFriends;
}

// Get and set functions for the friendbooks owner and year
string FriendBook::getOwner() const
{
	return this->owner;
}
void FriendBook::setOwner(std::string owner)
{
	this->owner = owner;
}
int FriendBook::getYear() const
{
	return this->year;
}
void FriendBook::setYear(int year)
{
	this->year = year;
}

// Clears the friendbook
void FriendBook::clear()
{
	nrOfFriends = 0;
}

// Fills arr with the toString information of all the internally stored friends, but will not fill more spots than indicated by the n parameter
void FriendBook::getFriendsAsString(std::string arr[], int n)
{

}

// Saves all the friends currently in the friendbook to a file with a given filename
void FriendBook::saveOnFile(string filename) const
{
	ofstream out;
	out.open(filename);

	out << nrOfFriends;
	out << endl;
		
	for (int i = 0; i < nrOfFriends; i++)
	{
		out << friends[i].toString();
		out << endl;
	}

	out.close();

}

// Reads the file given by the filename and fills the friendbook with friends based on the data in the file
void FriendBook::readFromFile(std::string filename)
{
	ifstream in;
	in.open(filename);

	in >> nrOfFriends; in.ignore();

	for (int i = 0; i < nrOfFriends; i++)
	{
		getline(in ,friends[i].toString());
		
	}

	in.close();
}

// Fills arr with the toString information of all the internally stored friends in a sorted order, but will not fill more spots than indicated by the n parameter
// The member function require <operator for Friend
// Should not change the internal order of the Friends
void FriendBook::getFriendsAsStringsSorted(string arr[], int n)
{



}

// Returns all the information in the friendbook as a string
string FriendBook::toString()
{

}