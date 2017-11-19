#include <iostream>
#include <string>

using namespace std;

int main()
{

	int tal1, tal2;

	cout << "enter a number" << endl;
	cin >> tal1;
	cout << "enter a secund number" << endl;
	cin >> tal2;

	cout
		<< tal1 << "*" << tal2 << " = " << tal1*tal2 << endl
		<< tal1 << "/" << tal2 << " = " << tal1/tal2 << endl
		<< tal1 << "-" << tal2 << " = " << tal1-tal2 << endl
		<< tal1 << "+" << tal2 << " = " << tal1+tal2 << endl
		<< tal1 << "%" << tal2 << " = " << tal1%tal2 << endl;
	getchar();
	getchar();
	return 0;
}