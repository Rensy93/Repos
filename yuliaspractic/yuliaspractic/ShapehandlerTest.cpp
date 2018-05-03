#include"ShapeHandler.h"
#include<iostream>

using namespace std;

int main()
{
	ShapeHandler objekt(3);

	objekt.addBox(8.0, 9.0, 7.3);
	objekt.addBox(28.0, 79.0, 7.7);
	objekt.addBox(2.0, 3.0, 78.3);
	objekt.addCone(3.6, 2.9);
	objekt.addCone(2.5, 7.9);


	string str[5];

	objekt.getAll(str, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << str[i] << endl;
	}
	cout << "*****************************************" << endl;



	objekt.removeBox(8.0, 9.0, 7.3);

	string str2[5];

	objekt.getAll(str2, 5);

	for (int i = 0; i < 5; i++) 
	{
		//cout << str2[i] << endl;
	}


	ShapeHandler objekt2 = objekt;

	string str3[5];

	objekt.getAll(str3, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << str3[i] << endl;
	}


	cout << "*****************************************" << endl;
	ShapeHandler objekt3(3);

	objekt3.addCone(8.9, 9.2);
	objekt3.addCone(8.9, 9.2);
	objekt3.addCone(8.9, 9.2);

	objekt3 = objekt;


	string str4[10];

	objekt.getAll(str4,10);

	for (int i = 0; i < 10; i++)
	{
		cout << str4[i] << endl;
	}

	system("pause");
	return 0;
}
