#include "PezDicpenser.h"



PezDispencer::PezDispencer()
{

	this->name = "?";
	this->DispencerSize = 0;
	this->ntOfpez = 0;

}

PezDispencer::PezDispencer(string name, int DispencerSize)
{

	this->name = name;
	this->DispencerSize = DispencerSize;
	this->ntOfpez = 0;


}

PezDispencer::~PezDispencer()
{


}

string PezDispencer::getName()const
{

	return this->name;
}

int PezDispencer::getSize()const
{

	return DispencerSize;

}

void PezDispencer::addPezDicpencer(int amunt)
{

	if (freeSpace() >= amunt)
	{

		this->ntOfpez += amunt;

	}

}

int PezDispencer::freeSpace()const
{

	return this->DispencerSize - this->ntOfpez;

}

int PezDispencer::pezLeft()const
{

	return this->ntOfpez;

}

bool PezDispencer::DicpendPez()
{
	bool dispended = false;

	if (this->ntOfpez > 0)
	{
		this->ntOfpez--;
		dispended = true;
	}
		
	return dispended;
	

}

string PezDispencer::toString() const
{
	
	return "name: " + this->name + "\nSize: " + to_string(this->DispencerSize)
		+ "\nPez left: " + to_string(this->ntOfpez)+"\n";

}