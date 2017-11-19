#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
	int tal;

	cout << "enter a integer: ";
	cin >> tal;
	cout << "antal 1000kr = " << tal / 1000 << endl;
	tal = tal % 1000;
	cout << "antal 1000kr = " << tal / 500 << endl;
	tal = tal % 500;
	cout << "antal 100kr = " << tal / 100 << endl;
	tal = tal % 100;
	cout << "antal 50kr = " << tal / 50 << endl;
	tal = tal % 50;
	cout << "antal 20kr = " << tal / 20 << endl;
	tal = tal % 20;
	cout << "antal 10kr = " << tal / 10 << endl;
	tal = tal % 10;
	cout << "antal 5kr = " << tal / 5 << endl;
	tal = tal % 5;
	cout << "antal 1kr = " << tal / 1 << endl;
	


	system("pause");
	return 0;
}
