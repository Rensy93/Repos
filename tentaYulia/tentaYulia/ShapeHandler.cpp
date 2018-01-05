#include"ShapeHandler.h"

void ShapeHandler::initiate(int from)
{
	for (int i = from; i < this->cap; i++)
	{
		this->shapes[i] = nullptr;
	}
}
void ShapeHandler::expand()
{
	this->cap += 5;
	Geom** temp = new Geom*[cap];
	for (int i = 0; i < nrOf; i++)
	{
		temp[i] = this->shapes[i];
	}
	delete[] this->shapes;
	this->shapes = temp;
}
void ShapeHandler::freeMemory()
{
	for (int i = 0; i < nrOf; i++)
	{
		delete this->shapes[i];
	}
	delete[] this->shapes;
}
void ShapeHandler::makeCopy(const ShapeHandler &original)
{
	this->cap = original.cap;
	this->nrOf = original.nrOf;
	this->shapes = new Geom*[cap];

	for (int i = 0; i < original.nrOf; i++)
	{
		this->shapes[i] = original.shapes[i]->clone();
	}
	this->initiate(nrOf);
}

ShapeHandler::ShapeHandler()
{
	this->cap = 10;
	this->nrOf = 0;
	shapes = new Geom*[cap];
	this->initiate();
}


ShapeHandler::ShapeHandler(int cap, int nrOf)
{
	this->cap = cap;
	this->nrOf = nrOf;
	shapes = new Geom*[this->cap];
	this->initiate();

}
ShapeHandler::~ShapeHandler()
{
	this->freeMemory();
}

ShapeHandler::ShapeHandler(const ShapeHandler &original)
{
	this->makeCopy(original);
}
ShapeHandler& ShapeHandler::operator=(const ShapeHandler &original)
{
	if (this != &original)
	{
		this->freeMemory();
		this->makeCopy(original);
	}
	return *this;
}

void ShapeHandler::addCone(double radius, int hight)
{
	if (cap == nrOf)
	{
		this->expand();
	}
	this->shapes[nrOf++] = new Cone(radius, hight);
}
void ShapeHandler::addBox(int wight, int lenght, int hight)
{
	if (cap == nrOf)
	{
		this->expand();
	}
	this->shapes[nrOf] = new Parral(wight, lenght, hight);
}
bool ShapeHandler::removeBox(int wight, int lenght, int hight)
{
	bool isOk = false;
	Parral *ptr = nullptr;
	for (int i = 0; i < nrOf && !isOk; i++)
	{
		ptr = dynamic_cast<Parral*>(shapes[i]);
		if (ptr != nullptr && ptr->getHight() == hight && ptr->getLenght() == lenght && ptr->getWight() == wight)
		{
			delete this->shapes[i];
			this->shapes[i] = this->[--nrOf];
			isOk = true;
		}
	}
	return isOk;
}
void ShapeHandler::getAll(string arr[], int capArr)
{
	for (int i = 0; i < nrOf; i++)
	{
		arr[i] = this->shapes[i]->toString(); 
	}
}