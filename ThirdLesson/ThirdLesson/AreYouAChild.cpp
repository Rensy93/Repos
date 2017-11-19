#include <iostream>

using namespace std;

int main()
{
	int age = 0,loop=1;
	while (loop != 0)
	{
		// user input it's age
		cout << "enter your age: ";
		cin >> age;
		//program prints you are a child
		/*
		if (age > 24)
		{
			cout << "You are old :p" << endl;
		}
		else if (age > 13)
		{
			cout << "You are a teen :p" << endl;
		}
		else
		{
			cout << "you are a child" << endl;
		}*/

		//lösning med logiska operator
		if(age > 12 && age < 25)
			cout << "You are a teen :p" << endl;

		if(age < 13)
			cout << "You are a child :p" << endl;

		if(age>24)
			cout << "You are old!! :p" << endl;

		cout << "enter 1 to continu or 0 to quit" << endl;
		cin >> loop;
	}
	cout << "byebye" << endl;
	system("pause");
	return 0;
}