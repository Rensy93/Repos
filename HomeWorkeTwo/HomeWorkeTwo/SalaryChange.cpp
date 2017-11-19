#include <iostream>

using namespace std;

const int START_SALARY = 15000;

int main()
{
	//cout << "new salary: " << 15000.0*1.075 
	//	<< "kr\nRetrosalary for the last 6 munth is: " 
	//	<< (15000.0*0.075)*6.0 << "kr\n\n";
	int month = 0;
	double raise = 0.0;
	cout << "How much is the rase (1 = 100%)\n";
	cin >> raise; cin.ignore();
	cout << "How meny months back pay? \n";
	cin >> month; cin.ignore();
	cout << "New salary is: " << START_SALARY + START_SALARY*raise << "kr and " << START_SALARY*raise << "kr in backpay\n\n";
	system("pause");
	return 0;
}