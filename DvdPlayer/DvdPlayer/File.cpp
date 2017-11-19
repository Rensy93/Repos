#include "File.h"

File::File()
{
	this->size = 0;
	this->playTime = 0;
	this->name = "";
	this->type = "";

}

File::File(int size, int playTime, string name, string type)
{
	this->size = size;
	this->playTime = playTime;
	this->name = name;
	this->type = type;
}

File::~File(){}

bool File::operator==(const File otherFile)const
{
	return this->name == otherFile.name
		&& this->size == otherFile.size
		&& this->type == otherFile.type
		&& this->playTime == otherFile.playTime;
}

int File::getSize()const
{
	return this->size;
}

int File::getPlayeTime()const
{
	return this->playTime;
}

string File::PlayeTime()const//as string in min änd sec
{
	string statment = "";
	
	statment = to_string(this->playTime / 60) + " : " + to_string(this->playTime % 60);
	return statment;
}

string File::getName()const
{
	return this->name;
}

string File::getType()const
{
	return this->type;
}

string File::toString()const
{
	string statment = "";

	statment = "name: " + this->name + "\nType: " + this->type
		+ "\nPlay Time: " + to_string(this->playTime / 60) + " : "
		+ to_string(this->playTime % 60)
		+ "\nSize: " + to_string(this->size);

	return statment;

}
