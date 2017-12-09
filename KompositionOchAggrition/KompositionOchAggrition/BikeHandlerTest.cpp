#include "BikeHandler.h"


void test(BikeHandler bh);

int main()
{

	BikeHandler bikehand(4);
	bikehand.addBike("yellow", "monark", 7);
	test(bikehand);

	system("pause");
	return 0;
}






void test(BikeHandler bh)
{
	bh.addBike("red", "cresent", 12);
}