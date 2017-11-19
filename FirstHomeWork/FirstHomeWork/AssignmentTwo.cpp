#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName, lastName;

	cout << "Enter your first name"<<endl;
	cin >> firstName;
	cout << "Enter your last name"<<endl;
	cin >> lastName;
	cout << "hallo there " << firstName << " " << lastName << " och välkommen till programmet";

	getchar();
	getchar();
	return 0;
}