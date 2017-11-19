#pragma once

#include <string>
using namespace std;

class Coffee
{

private:

	string brand;
	string type;
	int storePrice;
	int costmoerPrice;




public:

	//konstruktores
	Coffee();
	Coffee(string brand, string type,int storePrice, int costmoerPrice);
	Coffee(string brand, string type);
	~Coffee();

	//operators
	bool operator<(const Coffee &otherCoffeeType) const;
	bool operator==(const Coffee &otherCoffeeType) const;

	//get
	string getBrand() const;
	string getType() const;
	int getStorePrice() const;
	int GetCostmerPrice() const;

	//other
	int priceMarginal() const;
	void upDatePriceByProcent(double rase);

	//Betty special
	string toString() const;

};