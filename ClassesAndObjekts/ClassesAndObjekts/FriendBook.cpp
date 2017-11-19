#include "Friend.h"
#include <iostream>
#include <string>
#include <fstream>

int menu();
void readFromFile(Friend friends[], string fileName, int &nrOfFriends);
void writeToFile(Friend friends[], string fileName, int nrOfFriends);
void addFriend(Friend friends[], int &nrOfFriends);
void showAll(Friend friends[], int nrOfFriends);
int findFriend(Friend friends[], string nameToFind, int nrOfFriends);
bool removeFriend(Friend friends[], int &nrOfFriends);
void showEmail(Friend friends[], int nrOfFriends);
void showAllFriendsThatIsOld(Friend friends[], int nrOfFriends);
void showAverageAge(Friend friends[], int nrOfFriends);
void sortYourFriendsInNameOrder(Friend friends[], int nrOfFriends);
void findTheYungest(Friend friends[], int nrOfFriends);

/*
Funktion som presenterar menyn 
1. Läggtil en vän
2. vissa alla väner
3. Tabort en vän
0. avsluta 
ditt val:
*/


using namespace std;
const int CAP = 15;
int main()
{
	//för svenska täcker så som åäö =)
	locale swedish("swedish");
	locale::global(swedish);

	Friend friends[CAP];
	int nrOfFriends = 0, userChoice = -1;

	readFromFile(friends, "friends.txt", nrOfFriends);
	// läs upp alla vänner från text file (friends.txt)
	//readfromFile(friends, "friends.txt", nrOfFriends);

	while (userChoice != 0)
	{
		userChoice = menu();


		switch (userChoice)
		{
		case 1:
		{
			addFriend(friends, nrOfFriends);
			break;
		}
		case 2:
		{

			showAll(friends, nrOfFriends);

			break;
		}
		case 3:
		{

			removeFriend(friends, nrOfFriends);

			break;
		}
		case 4:
		{

			showEmail(friends, nrOfFriends);

			break;
		}
		case 5:
		{
			

			//vissa alla vänner som är över viss alder
			showAllFriendsThatIsOld(friends, nrOfFriends);

			break;
		}
		case 6:
		{

			findTheYungest(friends, nrOfFriends);
			

			break;
		}
		case 7:
		{

			showAverageAge(friends, nrOfFriends);
			

			break;
		}
		case 8:
		{
			
			sortYourFriendsInNameOrder(friends, nrOfFriends);

			break;

		}
		default:
			cout << "this choice dose not exist, try agin!!" << endl;
			break;
		}
	}
	
	
	
	// spara alla vänner till en fil (friends.txt)
	writeToFile(friends, "friends.txt", nrOfFriends);

	system("pause");
	return 0;
}

int menu()
{
	int userChoice = -1;


	cout << "1. Läggtil en vän" << endl
		<< "2. vissa alla väner" << endl
		<< "3. Tabort en vän" << endl
		<< "4. sök email givet namnet" << endl
		<< "5. vissa alla vänner som är över viss alder" << endl
		<< "6. vissa yngsta vännen" << endl
		<< "7. vissa medel aldern" << endl
		<< "8. Sortera vännerna baserat på namn "<< endl
		<< "0. avsluta" << endl
		<< "Ditt val: ";

	cin >> userChoice; cin.ignore();

	return userChoice;

}

void addFriend(Friend friends[], int &nrOfFriends)
{

	string newName, newEmail;
	int newBirthYear;


	cout << "What is the name: ";
	getline(cin, newName);

	cout << "What year is " << newName << " year of birth: ";
	cin >> newBirthYear; cin.ignore();

	cout << "What is " << newName << " email: ";
	getline(cin, newEmail);

	friends[nrOfFriends] = Friend(newName, newBirthYear, newEmail);
	nrOfFriends++;

}

void showAll(Friend friends[], int nrOfFriends)
{


	for (int i = 0; i < nrOfFriends; i++)
	{

		cout << friends[i].toString() << " hej " << endl;

	}


}

bool removeFriend(Friend friends[], int &nrOfFriends)
{

	string name = "?";
	bool didRemove = false;
	int pos = -1;
	
	cout << "what friend do you whant to remove: ";
	getline(cin, name);

	pos = findFriend(friends, name, nrOfFriends);

	if (pos != -1)
	{
		friends[pos] = friends[--nrOfFriends];
		nrOfFriends--;
		didRemove = false;
	}



	return didRemove;

}

int findFriend(Friend friends[], string nameToFind, int nrOfFriends)
{
	int pos = -1;

	for (int i = 0; i < nrOfFriends&&pos != -1; i++)
	{

		if (nameToFind == friends[i].getName())
		{

			pos = i;
			cout << friends[i].toString() << endl << " was deleted" << endl;

		}

	}

	return pos;
}
//done?
void readFromFile(Friend friends[], string fileName, int &nrOfFriends)
{
	string name = "?", email = "?", bf = "0";
	//int bf = 0;

	ifstream in;

	//kolla om fillen är open
	in.open(fileName);
	if (in.is_open())
	{
		in >> nrOfFriends; in.ignore();
		for (int i = 0; i < nrOfFriends; i++)
		{

			getline(in, name);
			in >> bf; in.ignore();
			getline(in, email);


			friends[i] = Friend(name, atoi(bf.c_str()), email);

		}
	}

	in.close();
}

void writeToFile(Friend friends[], string fileName, int nrOfFriends)
{
	//string name = "?", email = "?"/*, bf = "0"*/;
	//int bf = 0;
	ofstream out;
	out.open(fileName);
	out << nrOfFriends;
	out << endl;

	for (int i = 0; i < nrOfFriends; i++)
	{
		/*name = friends[i].getName();
		bf = friends[i].getBirthYear();
		email = friends[i].getEmail();
		
		
		out << name;
		out << endl;
		out << bf;
		out << endl;
		out << email;
		out << endl;*/

		out << friends[i].getName() << endl
			<< friends[i].getBirthYear() << endl
			<< friends[i].getEmail() << endl;

	}

	out.close();
}

void showEmail(Friend friends[], int nrOfFriends)
{

	Friend name();
	string NewName = "0";
	int personPos = -1;
	cout << "Enter the name of the person that you want to get the email for ";
	getline(cin, NewName);
	name().setName(NewName);

	for (int i = 0; i < nrOfFriends && personPos == -1; i++)
	{

		if (friends[i] == name())
		{

			personPos = i;
		
		}

	}

	cout << friends[personPos].getName() << "email is " << friends[personPos].getEmail() << endl;

}

void showAllFriendsThatIsOld(Friend friends[], int nrOfFriends)
{
	int minAge = 0;

	cout << "what age are you looking for?? ";
	cin >> minAge; cin.ignore();

	for (int i = 0; i < nrOfFriends; i++)
	{

		if (friends[i].age(2017) >= minAge)
		{
			cout << friends[i].toString() << endl;
		}

	}

}

void showAverageAge(Friend friends[], int nrOfFriends)
{
	double totalAge = 0;

	for (int i = 0; i < nrOfFriends; i++)
	{

		totalAge += friends[i].age(2017);

	}
	totalAge /= nrOfFriends;

	cout << "average age is: " << totalAge << " years old" << endl;

}

void findTheYungest(Friend friends[], int nrOfFriends)
{
	int posOfYungest = 0;

	for (int i = 1; i < nrOfFriends; i++)
	{

		if (friends[i].getBirthYear() <= friends[posOfYungest].getBirthYear())
			posOfYungest = i;

	}

	cout << "Your yungest friend are " << friends[posOfYungest].getName()<<endl;
}

void sortYourFriendsInNameOrder(Friend friends[], int nrOfFriends)
{
	//använd < operatorn för Friend-objekt 
	//ex vis friends[i] < friend[pos]
	int posOfSmalest = -1;
	Friend tempFriend();

	for (int i = 0; i < nrOfFriends; i++)
	{

		posOfSmalest = i;

		for (int h = i+1; h < nrOfFriends; h++)
		{

			if (friends[h]<friends[posOfSmalest])
			{

				posOfSmalest = h;

			}
			tempFriend() = friends[i];
			friends[i] = friends[posOfSmalest];
			friends[posOfSmalest] = tempFriend();


		}

	}

}