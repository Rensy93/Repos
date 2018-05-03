#include"Box.h"
#include"Cone.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	srand(time(0));
	Shape* arr[5];

	arr[0] = new Cone(5.5, 9.7);
	arr[1] = new Cone(23.4, 23.2);
	arr[2] = new Box(5.8, 8.0, 7.0);
	arr[3] = new Box(5.8, 8.0, 7.0);
	arr[4] = new Box(5.8, 8.0, 7.0);


	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]->getVolym() << endl;
	}

	int nr1;
	int nr2;

	for (int i = 0; i < 5; i++)
	{
		nr1 = rand() % 4;
		nr2 = rand() % 4;
		Shape *temp = arr[nr1];
		arr[nr1] = arr[nr2];
		arr[nr2] = temp;
	}

	cout << "**********************************************************" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]->getVolym() << endl;
	}

	Cone * ptr = nullptr;
	for (int i = 0; i < 5; i++)
	{
		ptr = dynamic_cast<Cone*>(arr[i]);
		if (ptr != nullptr)
		{
			ptr->setRadie(5);
			cout <<"changed "<< ptr->getRadie() << endl;;
		}
	}


	for (int i = 0; i < 5; i++)
	{
		delete arr[i];
	}

	system("pause");
	return 0;
}
