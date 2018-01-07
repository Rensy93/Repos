#include"Charity.h"
#include<iostream>


using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Charity ptr;
	
	
	ptr.addDonation("Miky", 100);
	ptr.addDonation("Sam", 50);
	ptr.addDonation("Amanda", 250);
	ptr.addDonation("Jack", 15);
	ptr.addDonation("Sam", 1000);
	string str1[5];
	
	ptr.showAll(str1, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << str1[i] << endl;
	}

	ptr.getQuantity();
	cout << "***************************" << endl;
	 
	cout << ptr.showAllDonation() << endl;

	ptr.deleteSome("Sam");

	string arr[5];

	ptr.showAll(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}


	
	system("pause");
	return 0;
}