#include "Disc.h"

Disc::Disc()
{
	this->name = "";
	this->maxNrFiles = 5;
	this->nrOfFiles = 0;
	this->usedSpace = 0;
	this->files = new File[maxNrFiles];
}

Disc::Disc(string name)
{
	this->name = name;
	this->maxNrFiles = 5;
	this->nrOfFiles = 0;
	this->usedSpace = 0;
	this->files = new File[maxNrFiles];
}

Disc::~Disc()
{
	delete[] files;
}

bool Disc::operator==(const Disc OterDisc)const
{
	return this->name == OterDisc.name;
}

int Disc::getCapacity()const
{
	return this->CAPACITY;
}

int Disc::getNousedSpace()const
{
	return this->CAPACITY - this->usedSpace;
}

int Disc::getNrOfFiles()const
{
	return this->nrOfFiles;
}

int Disc::getMaxNrOfFiles()const
{
	return this->maxNrFiles;
}

string Disc::getName()const
{
	return this->name;
}

bool Disc::addFile(File file, int size, int playTime, string name, string type)
{
	bool complited = false;
	int filePos = -1;
	File tempFile(size, playTime, name, type);
	if (nrOfFiles >= maxNrFiles)
	{
		expandMaxNrOfFiles(files);
	}
	filePos = findFile(tempFile);
	if (file.getSize() <= this->getNousedSpace)
	{
		if (filePos == -1)
		{
			files[nrOfFiles++] = tempFile;
			complited = true;
			usedSpace += size;
		}
	}

	return complited;
}

bool Disc::removeFile(File file)
{
	bool complited = false;
	int filePos = -1;

	filePos = findFile(file);
	
	if (filePos != -1)
	{
		files[filePos] = files[--nrOfFiles];
		complited = true;
		usedSpace -= file.getSize();
	}
	return complited;
}

int Disc::findFile(const File file)
{
	int filePos = -1;
	for (int i = 0; i < nrOfFiles && filePos == -1; i++)
	{
		if (files[i] == file)
		{
			filePos = i;
		}
	}
	return filePos;
}

void Disc::expandMaxNrOfFiles(File *&files)
{
	maxNrFiles *= 2;
	File  *temp = new File[maxNrFiles];

	for (int i = 0; i < nrOfFiles; i++)
	{
		temp[i] = files[i];
	}

	delete[] files;
	files = temp;
	temp = nullptr;

}

string Disc::ShowContentList()const
{
	string statmend = "";

	for (int i = 0; i < nrOfFiles; i++)
	{
		statmend += files[i].toString() + "\n";
	}
	return statmend;
}