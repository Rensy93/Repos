#include"ConesAndBox.h"

Boxes::Boxes()
{
	this->nrOf = 0;
	for (int i = 0; i < cap; i++)
	{
		this->boxes[i] = nullptr;
	}
}
Boxes::~Boxes()
{
	for (int i = 0; i < cap; i++)
	{
		delete this->boxes[i];
	}
}