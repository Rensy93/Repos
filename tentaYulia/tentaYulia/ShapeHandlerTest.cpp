#include"ShapeHandler.h"
#include<iostream>

using namespace std;

int main()
{
	ShapeHandler sh1;
	ShapeHandler sh2;

	sh1.addBox(6, 6, 6);
	sh1.addCone(5, 5);

	string strArr[2];
	sh1.getAll(strArr, 2);

	cout << "sh1 bara******************" << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << strArr[i] << endl;
	}

	//testing tildelningsoperator
	sh2.addBox(1, 1, 1);
	sh2.addBox(2, 2, 2);
	sh2.addBox(3, 3, 3);

	sh1 = sh2;
	sh2.removeBox(2, 2, 2);
	string str[3];
	sh2.getAll(str, 3);

	cout << "sh2 bara******************" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << str[i] << endl;
		
	}

	string str3[3];
	sh1.getAll(str3, 3);
	for (int i = 0; i < 3; i++)
	{
		cout << str3[i] << endl;

	}
	cout << "sh3 ******************" << endl;

	//copykonstruktor

	ShapeHandler sh3 = sh1;
	sh3.addBox(8, 8, 8);
	string str4[4];

	sh3.getAll(str4, 4);

	for (int i = 0; i < 4; i++)
	{
		cout << str4[i] << endl;
	}

	system("pause");
	return 0;
}