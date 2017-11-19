#pragma once
#include <string>
using namespace std;

class File
{
private:
	int size;
	int playTime;
	string name;
	string type;

public:

	File();
	File(int size, int playTime, string name, string type);
	~File();

	bool operator==(const File otherFile)const;

	int getSize()const;
	int getPlayeTime()const;
	string getName()const;
	string getType()const;

	string PlayeTime()const;
	string toString()const;


};