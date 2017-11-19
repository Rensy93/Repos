#include <iostream>


using namespace std;

int main()
{
	 //10 --> 99
	for (int i = 10; 1 < 100; i++)
		cout << "nr: " << i << endl <<endl << "*******" << endl << endl;
	
	//10 --> 0
	for (int i = 10; i >= 0; i--)
		cout << "nr: " << i << endl << endl << "*******" << endl << endl;

	system("pause");
	return 0;
}