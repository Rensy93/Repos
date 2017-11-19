#pragma once
#include "File.h"

class Disc
{
private:
	static const int CAPACITY = 5;
	File *files = nullptr;
	string name;
	int usedSpace;
	int nrOfFiles;
	int maxNrFiles;

public:
	Disc();
	Disc(string name);
	~Disc();

	bool operator==(const Disc OterDisc)const;
	
	int getCapacity() const;
	int getNousedSpace()const;
	int getNrOfFiles()const;
	int getMaxNrOfFiles()const;
	string getName()const;

	bool Disc::addFile(File file, int size, int playTime, string name, string type);
	bool removeFile(File file);
	int findFile(const File file);
	void expandMaxNrOfFiles(File *&files);

	string ShowContentList()const;


};
