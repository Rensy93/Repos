#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	int birthYear, age;
	
	cout << "What is your first and last name??"<<endl;
	getline(cin,name);
	cout << "What year was you borne??" << endl;
	cin >> birthYear;
	cout << "Hello " << name << "!!" << endl << "You are " << 2017 - birthYear << " years old";

	getchar();
	getchar();
	return 0;
}