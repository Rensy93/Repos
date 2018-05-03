#include "Box.h"
#include "Cone.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	Figure* arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = nullptr;
	}

	arr[0] = new Cone(1.5, 6.5);
	arr[1] = new Cone(6.4, 7.5);
	arr[2] = new Box(5.6, 7.3, 7.3);
	arr[3] = new Box(2.3, 4.5, 2.2);

	int nr1;
	int nr2;
	for (int i = 0; i < 5; i++)
	{
		nr1 = rand() % 4;
		nr2 = rand() % 4;
		Figure* temp = arr[nr1];
		arr[nr1] = arr[nr2];
		arr[nr2] = temp;

	}

	for (int i = 0; i < 4; i++)
	{
		Cone* ptr = nullptr;
		ptr = dynamic_cast<Cone*>(arr[i]);

		if (ptr != nullptr)
		{
			ptr->setRadie(5);
			cout << ptr->getRadie() << endl;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		Cone* ptr = nullptr;
		ptr = dynamic_cast<Cone*>(arr[i]);
		if (ptr != nullptr)
		{
			cout << ptr->getVol() << endl;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		delete arr[i];
	}
	system("pause");
	return 0;

}
