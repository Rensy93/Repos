#include"Box.h"
#include"Seq.h"
#include<iostream>

int main()
{

	Seq<Box> objekt;
	Seq<int> objekt2;


	for (int i = 0; i < 4; i++)
	{
		objekt2.addFirst(i * 10);

	}


	cout << "Elements: " << objekt2.getSize() << endl;

	objekt.addFirst(10);
	objekt.addLast(8);

	for (int i = 0; i < 3; i++)
	{
		objekt.getFisrt();
	}

	system("pause");
	return 0;
}
