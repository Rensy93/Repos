#include "BankAccunt.h"
#include <iostream>
#include <vector>

using namespace std;

//prototypes
int menu();
int findAccount(vector <BankAccunt> &bankAccounts, string name);

void creatAnAccount(vector <BankAccunt> &bankAccounts);
void deposit( vector <BankAccunt> &bankAccounts, string name);
void withdraw( vector <BankAccunt> &bankAccounts, string name);
void showAccountStatement(vector <BankAccunt> &bankAccounts, string name);
void changeCode(vector <BankAccunt> &bankAccounts, string name);

int main()
{

	locale swedish("swedish");
	locale::global(swedish);
	
	int userChoice=-1;

	vector <BankAccunt>	bankAccounts;
	while (userChoice != 0)
	{

		userChoice=menu();

		switch (userChoice)
		{

		case 1:
		{
			//1. Skapa ett nytt konto
			creatAnAccount(bankAccounts);

			break;
		}
		case 2:
		{
			//2. Göra insättningar på kontot
			string name;

			cout << "har is the Name oof the account holder ";
			getline(cin, name);

			deposit(bankAccounts, name);

			break;
		}
		case 3:
		{
			//3. Göra uttag från ett konto
			string name;
			
			cout << "har is the Name oof the account holder ";
			getline(cin, name);

			withdraw(bankAccounts, name);

			break;
		}
		case 4:
		{
			//4. Visa kontoutdrag för ett konto
			
			string name;
			
			cout << "har is the Name oof the account holder ";
			getline(cin, name);

			showAccountStatement(bankAccounts, name);

			break;
		}
		case 5:
		{
			//5. Ändra koden för ett konto
			string name;

			cout << "har is the Name oof the account holder ";
			getline(cin, name);

			changeCode(bankAccounts, name);

			break;
		}
		default:
		{
			
			break;
		
		}

		}


	}

	system("pause");
	return 0;
}


//deklarations
int menu()
{
	int userChoice;

	cout << "1. Skapa ett nytt konto" << endl
		<< "2. Göra insättningar på kontot" << endl
		<< "3. Göra uttag från ett konto" << endl
		<< "4. Visa kontoutdrag för ett konto" << endl
		<< "5. Ändra koden för ett konto" << endl
		<< "0. Avsluta" << endl
		<< "Your Choice: ";

	cin >> userChoice; cin.ignore();

	return userChoice;

}

int findAccount(vector <BankAccunt> &bankAccounts, string name)
{
	//BankAccunt tempAccount(name, "0");
	int pos = -1;

	for (int i = 0; i < bankAccounts.size() && pos ==-1; i++)
	{

		//if (bankAccounts[i]==tempAccount)
		if(bankAccounts[i].getNameOfOwner() == name)
		{

			pos = i;

		}

	}

	return pos;
}

//sparas inte i vektorn
void creatAnAccount(vector <BankAccunt> &bankAccounts)
{

	string name;
	string code;
	
	cout << "har is the Name oof the account holder ";
	getline(cin, name);
	cout << "what du you want your 4 charakter code to be: ";
	getline(cin, code);

	//BankAccunt temp(name, code);
	bankAccounts.push_back(BankAccunt(name, code));
	//bankAccounts.push_back(temp);
	
	cout << bankAccounts[0].getNameOfOwner();

	cout << "new account was added" << endl;

}

void deposit(vector <BankAccunt> &bankAccounts, string name)
{

	int amunt = 0, pos = -1;

	pos = findAccount(bankAccounts, name);

	cout << "how mtuch do you want to deposit: ";
	cin >> amunt; cin.ignore();

	bankAccounts[pos].deposit(amunt);

}

void withdraw(vector <BankAccunt> &bankAccounts, string name)
{
	bool actionWasComplited = false;

	int amunt = 0, pos = -1;

	pos = findAccount(bankAccounts, name);

	cout << "how mtuch do you want to deposit: ";
	cin >> amunt; cin.ignore();

	actionWasComplited = bankAccounts[pos].withdraw(amunt);

	if (actionWasComplited)
	{

		cout << "Complited"<<endl;

	}
	else
	{

		cout << "not complited" << endl;
	
	}

}

void showAccountStatement(vector <BankAccunt> &bankAccounts, string name) 
{

	string statement = "";
	int pos = -1;

	pos = findAccount(bankAccounts, name);
	
	statement = bankAccounts[pos].statementtOfAccount();

	cout << statement;

}

void changeCode(vector <BankAccunt> &bankAccounts, string name)
{

	bool actionWasComplited = false;
	string oldCode, newCode;
	int pos = -1;

	pos = findAccount(bankAccounts, name);

	cout << name << " Enter your old code: ";
	getline(cin, oldCode);

	cout << name << " Enter your new code: ";
	getline(cin, newCode);

	actionWasComplited = bankAccounts[pos].changeCode(oldCode, newCode);

	if (actionWasComplited)
	{

		cout << "Complited" << endl;

	}
	else
	{

		cout << "not complited" << endl;

	}

}