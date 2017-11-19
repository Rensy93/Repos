#include "Coffee.h"



//konstruktores

//done
Coffee::Coffee()
{
	this->brand = "?";
	this->type = "?";
	this->storePrice = 0;
	this->costmoerPrice = 0;

}
//done
Coffee::Coffee(string brand, string type, int storePrice, int costmoerPrice)
{
	this->brand = brand;
	this->type = type;
	this->storePrice = storePrice;
	this->costmoerPrice = costmoerPrice;

}
Coffee::Coffee(string brand, string type)
{
	this->brand = brand;
	this->type = type;
	this->storePrice = 0;
	this->costmoerPrice = 0;

}

Coffee::~Coffee()
{



}

//operators

//done
bool Coffee::operator<(const Coffee &otherCoffeeType) const
{
	//baserad på marginalen

	return this->priceMarginal() < otherCoffeeType.priceMarginal();

}
//done
bool Coffee::operator==(const Coffee &otherCoffeeType) const
{

	//baserad på varumärke och typ
	return this->brand == otherCoffeeType.brand && this->type == otherCoffeeType.type;
}
//get

//done
string Coffee::getBrand() const
{
	return this->brand;
}

//done
string Coffee::getType() const
{
	return this->type;
}

//done
int Coffee::getStorePrice() const
{
	return this->storePrice;
}

//done
int Coffee::GetCostmerPrice() const
{
	return this->costmoerPrice;
}

//other
int Coffee::priceMarginal() const
{
	return this->costmoerPrice - this->storePrice;
}

//done
void Coffee::upDatePriceByProcent(double rase)
{
	rase = rase / 100;
	rase += 1;
		
	this->costmoerPrice = this->costmoerPrice*rase;
}

//Betty special

//done
string Coffee::toString() const
{

	string coffeeInforation = "";

	coffeeInforation = "Brand: " + this->brand + " Type: " + this->type
		+ " store price: " + to_string(this->storePrice) + "$ " 
		+ "costomerPrice: " + to_string(this->costmoerPrice) + "$";

	return coffeeInforation;
}