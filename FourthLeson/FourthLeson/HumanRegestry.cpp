#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*
int main()
{
	string nameTemp = "a";
	string name[100];
	string nameYonngest = "a";
	int ageTotal = 0;
	int ageAverig = 0;
	int age[100];
	int count = 0;

	while (nameTemp != "")
	{
		cout << "enter name of the first person?? ";
		getline(cin, name[count]);
		nameTemp = name[count];


		cout << "What is the persons age?? ";
		cin >> age[count];

		count++;
	}
	
	for (int i = 0; i < count; i++)
	{
		ageTotal += age[i];
	}
	ageAverig = ageTotal / count;

	cout << "the average age is "<< ageAverig << " years. " << nameYonngest << " is yonngets" << endl << endl;
	system("pause");
	return 0;
}*/

int main()
{
	string name = "o", nameYonngest = "i";
	int age = 0, ageYongest=0, ageTotal=0, count=1,ageAverag=0;
	cout << "enter a neme: " << endl;
	getline(cin, name);
	nameYonngest = name;
	cout << "enter the persons age: " << endl;
	cin >> age; cin.ignore();
	ageYongest = age;
	ageTotal += age;
	

	while (name != "")
	{
		cout << "enter a neme: " << endl;
		getline(cin, name);
		if (name != "")
		{
			cout << "enter the persons age: " << endl;
			cin >> age; cin.ignore();
			ageTotal += age;
		
			if (age < ageYongest)//== ??
			{
				nameYonngest = name;
				ageYongest = age;
				
			}
			count++;
		}
	}
	cout << "the average age is " << (double)ageTotal / count << " years. " 
		 << nameYonngest << " is yonngets" << endl << endl; // (double) to forse floot integer
	
	system("pause");
	return 0;
}