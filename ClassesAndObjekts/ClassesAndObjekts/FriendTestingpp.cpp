#include <iostream>
#include <string>
#include "Friend.h"

using namespace std;

int main()
{
	/*string newName, newEmail;
	int newBirthYear;*/


	// Här skapar/bygger konstruktorn mitt objekt
	Friend favouriteFriend("Johanna", 1996, "johanna@panda.se");

	{

		Friend friended("Yulia Lizneva", 1992, "yulia@wtf.ru");
	}
	//destruerring av objekt följer lagen om las sist in först ut

	/*cout << "What is the name: ";
	getline(cin, newName);

	cout << "What year is "<<newName<<" year of birth: ";
	cin >> newBirthYear; cin.ignore();

	cout << "What is "<<newName<<" email: ";
	getline(cin, newEmail);

	Friend aFriend(newName, newBirthYear, newEmail);

	cout << "Name of your friend is: " << endl;

	cout << favouriteFriend.getName() << endl
		<< aFriend.getName() << endl;

	if(favouriteFriend.getName() == aFriend.getName())
	{
		cout << "it's the same name" << endl;
	}
	else
	{
		cout << "it's a diffrent name" << endl;
	}

	cout << "chanche name of your best friend: ";
	getline(cin, newName);

	favouriteFriend.setName(newName);

	cout << "It's new name is " << favouriteFriend.getName() << endl;

	cout << favouriteFriend.getName()
		 << " is " << favouriteFriend.age(2017) << " years old." <<endl;

	cout << aFriend.getName()
		<< " is " << aFriend.age(2017) << " years old." << endl;

	cout << favouriteFriend.toString() << endl;*/

	system("pause");
	return 0;
}