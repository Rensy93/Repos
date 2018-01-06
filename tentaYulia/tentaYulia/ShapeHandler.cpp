#include"ShapeHandler.h"

void ShapeHandler::makeCopy(const ShapeHandler &other)
{
	this->cap = other.cap;
	this->nrOf = other.nrOf;
	this->shapes = new Geom*[cap];
	for (int i = 0; i < other.nrOf; i++)
	{
		this->shapes[i] = other.shapes[i]->clone();
	}
	this->initiate(nrOf);
}
void ShapeHandler::freeMemory()
{
	for (int i = 0; i < nrOf; i++)
	{
		delete this->shapes[i];
	}
	delete[] this->shapes;
}
void ShapeHandler::expand() 
{
	cap += 10;
	Geom**temp = new Geom*[cap];
	for (int i = 0; i < cap; i++)
	{
		temp[i] = this->shapes[i];
	}
	delete[] this->shapes;
	this->shapes = temp;

}
void ShapeHandler::initiate(int from)
{
	for (int i = from; i < cap; i++)
	{
		this->shapes[i] = nullptr;
	}
}
ShapeHandler::ShapeHandler()
{
	this->cap = 10;
	this->nrOf = 0;
	shapes = new Geom*[cap];
	this->initiate();
}
ShapeHandler::~ShapeHandler()
{
	this->freeMemory();
}
ShapeHandler::ShapeHandler(int cap, int nrOf)
{
	this->cap = cap;
	this->nrOf = nrOf;
	shapes = new Geom*[this->cap];
	this->initiate();
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
ShapeHandler::ShapeHandler(const ShapeHandler &orginal)
{
	this->makeCopy(orginal);
}

void ShapeHandler::addCone(double rad, double hei)
{
	if (nrOf == cap)
	{
		this->expand();
	}
	this->shapes[nrOf++] = new Cone(rad, hei);
}
void ShapeHandler::addBox(double wid, double len, double hei)
{
	if (nrOf == cap)
	{
		this->expand();
	}
	this->shapes[nrOf++] = new Parral(wid, len, hei);
}
bool ShapeHandler::removeBox(double wid, double len, double hei)
{
	bool isOk = false;
	Parral *ptr = nullptr;
	for (int i = 0; i < nrOf && !isOk; i++)
	{
		ptr = dynamic_cast<Parral*>(this->shapes[i]);
		if (ptr != nullptr && ptr->getHight() ==hei && 
			ptr->getLenght()==len && ptr->getWight()==wid)
		{
			delete this->shapes[i];
			this->shapes[i] = this->shapes[--nrOf];
			isOk = true;
		}
		
	}
	return isOk;
}
void ShapeHandler::getAll(string arr[], int cap)
{
	for (int i = 0; i < nrOf; i++)
	{
		arr[i] = this->shapes[i]->toString();
	}
}