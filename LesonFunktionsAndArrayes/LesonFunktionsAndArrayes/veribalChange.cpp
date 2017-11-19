#include <iostream>

using namespace std;

//Funktions prototyp(deklaration)
void swapthem(int & x, int & y);


int main()
{

	int value1 = 11, value2=12;
	cout << "value 1 is: " << value1 << " Value 2 is: " << value2 << endl;
	cout << "hokus pokus" << endl;
	swapthem(value1, value2);
	cout << "value 1 is: " << value1 << " Value 2 is: " << value2 << endl;


	
	system("pause");
	return 0;
}

//Funktion defentioner
void swapthem(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;



}