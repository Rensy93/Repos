#include"ShapeHandler.h"

void ShapeHandler::initiate(int from)
{
	for (int i = from; i < cap; i++)
	{
		this->shapes[i] = nullptr;
	}
}
void ShapeHandler::deepCopy(const ShapeHandler &original)
{
	this->cap = original.cap;
	this->nrOf = original.nrOf;
	this->shapes = new Shape*[cap];
	for (int i = 0; i < original.nrOf; i++)
	{
		this->shapes[i] = original.shapes[i]->clone();
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
	this->cap += 10;
	Shape** temp = new Shape*[cap];
	for (int i = 0; i < cap; i++)
	{
		temp[i] = this->shapes[i];
	}
	delete[] this->shapes;
	this->shapes = temp;
	temp = nullptr;
}
ShapeHandler::ShapeHandler(int cap)
{
	this->cap = cap;
	this->nrOf = nrOf;
	this->shapes = new Shape*[cap];
	this->initiate();
}
ShapeHandler::ShapeHandler()
{
	this->cap = cap;
	this->nrOf = 0;
	this->shapes = new Shape*[cap];
	this->initiate();
}

ShapeHandler::~ShapeHandler()
{
	this->freeMemory();
}

ShapeHandler& ShapeHandler::operator=(const ShapeHandler &original)
{
	if (this != &original)
	{
		this->freeMemory();
		this->deepCopy(original);
	}
	return *this;
}
ShapeHandler::ShapeHandler(const ShapeHandler &original)
{
	this->deepCopy(original);

}

void ShapeHandler::addCone(double height, double radius)
{
	if (cap == nrOf)
	{
		this->expand();
	}
	this->shapes[nrOf++] = new Cone(height, radius);
}
void ShapeHandler::addBox(double width, double length, double height)
{
	if (cap == nrOf)
	{
		this->expand();
	}
	this->shapes[nrOf++] = new Box(width, length, height);
}
bool ShapeHandler::removeBox(double height, double width, double length) 
{
	bool isOk = false;
	Box* ptr = nullptr;
	for (int i = 0; i < nrOf; i++)
	{
		ptr = dynamic_cast<Box*>(shapes[i]);
		if (ptr != nullptr && ptr->getHeight() == height && ptr->getLenght() == length && ptr->getWidth() == width)
		{
			delete this-> shapes[i];
			shapes[i] = nullptr;
			this->shapes[i] = this->shapes[--nrOf];
			isOk = true;
		}

	}
	return isOk;
}
void ShapeHandler::getAll(string strArray[], int arrayCap) const
{
	for (int i = 0; i < nrOf; i++)
	{
		strArray[i] = this->shapes[i]->toString();
	}
}

