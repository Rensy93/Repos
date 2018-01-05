#pragma once
#include "Continer.h"

const int MILKP_RICE = 5;
const int SUGAR_PRICE = 2;
const int CARBONATED_PRICE = 3;
class Drinks
{

private:
	string name;
	int basePrice;
	int price;
	//kontainers
	Continer coffeBens;
	Continer milk;
	Continer sugar;
	Continer carbonGas;
	Continer cohcletPuder;
	//Continer coffeGrounds;

public:

	Drinks(int basePrice);
	virtual~Drinks();
	int getBasePrice();
	int getPrice();
	void changeBasePrice(int newPrice);
	void addToPrice(int regementPrice);



};