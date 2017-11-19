#include  <iostream>
#include "Friend.h"
#include <string>

using namespace std;

int main()
{
	string name;

	Friend afriend; //Anropar difalt konstruktorn
	Friend favouriteFriend("Johanna", 1996, "johanna@panda.se");

	/*cout << "enter a new name";
	
	getline(cin, name);
	afriend.setName(name);

	if (favouriteFriend.getName() == afriend.getName())
	{

		cout << "samma namn"<<endl;

	}*/

	cout << " namn ";
	getline(cin, name);
	
	int birthYear;
	cout << " br ";
	cin >> birthYear;
	
	string email;;
	cout << " E-post ";
	getline(cin, email);

	Friend someFriend(name, birthYear, email);

	//favouriteFriend.operator==(someFriend);

	if (favouriteFriend == someFriend)
	{

		cout << "they are the same";
	}

	if (favouriteFriend<someFriend)
	{

		cout << "är mindre än some friend" << endl;
	}
	


	system("pause");
	return 0;
}
