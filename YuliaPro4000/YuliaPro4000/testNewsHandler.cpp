#include "NewsPaperhandler.h"
#include <iostream>

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	NewsPaperhandler handler(2);
	handler.addNewsPaper("Times", 124);
	handler.addNewsPaper("Fisk", 92);
	handler.addNewsPaper("Zoo", 685);
	handler.addNewsPaper("Diet", 86);
	

	string str[5];
	handler.getAll(str);
	
	for (int i = 0; i < 5; i++)
	{
		cout << str[i] << endl;
	}



	cout << "******************************************" << endl;

	string str2[5];
	handler.getAll(str2);
	handler.addNewsPaper("Times", 124);

	for (int i = 0; i < 5; i++)
	{
		cout << str2[i] << endl;
	}


	cout << "******************************************" << endl;

	handler.removeNewsPaper("Fisk");

	string str3[5];
	handler.getAll(str3);
	for (int i = 0; i < 3; i++)
	{
		cout << str3[i] << endl;
	}
	handler.removeNewsPaper("n");

	NewsPaperhandler handler2 = NewsPaperhandler(handler);

	system("pause");
	return 0;
}
