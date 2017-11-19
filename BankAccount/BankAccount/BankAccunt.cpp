#include "BankAccunt.h"
#include <ctime>
#include <cstdlib>

BankAccunt::BankAccunt()
{

	srand(time(0));

	this->nameOfOwner = "?";
	this->code = "0";
	this->accountNr = rand() % 89999 + 10000;
	this->balance = 0;
	this->nrStatment = 0;

}
BankAccunt::BankAccunt(string nameOfOwner, string code)
{

	srand(time(0));

	this->nameOfOwner = nameOfOwner;
	this->code = code;
	this->accountNr = rand() % 89999 + 10000;
	this->balance = 0;
	this->nrStatment = 0;

}
BankAccunt::~BankAccunt()
{

	

}

//string BankAccunt::toString()
//{
//
//	return "";
//
//}

//get
string BankAccunt::getNameOfOwner()const
{

	return this->nameOfOwner;

}
int BankAccunt::getBalance()const
{

	return this->balance;

}
int BankAccunt::getAccountNr()const
{

	return this->accountNr;

}

//set
void BankAccunt::setNameOfOwner(string nameOfOwner)
{

	this->nameOfOwner = nameOfOwner;

}

//code
bool BankAccunt::changeCode(string oldCode, string newCode)
{
	bool codeChange = false;

	if (this->code == oldCode)
	{

		this->code = newCode;
		codeChange = true;

	}

	return codeChange;
}
bool BankAccunt::checkCode(string code)const
{

	bool Codecheck = false;

	if (this->code == code)
	{

		Codecheck = true;

	}

	return Codecheck;

}

//transferstuff
void BankAccunt::deposit(int amount)
{

	this->balance += amount;
	if (nrStatment <= 10)
	{

		transaktion[nrStatment] = amount;
		nrStatment++;

	}
	else
	{

		this->nrStatment = 0;
		transaktion[nrStatment] = amount;
		nrStatment++;

	}


}

bool BankAccunt::withdraw(int amunt)
{

	bool complited = false;

	if (this->balance >= amunt)
	{

		this->balance -= amunt;
		complited = true;
	}

	if (nrStatment < 10)
	{

		transaktion[nrStatment] = amunt;
		nrStatment++;

	}
	else
	{

		this->nrStatment = 0;
		transaktion[nrStatment] = amunt;
		nrStatment++;

	}

	return complited;
}

string BankAccunt::statementtOfAccount()const
{
	string statement;

	for (int i = 0; i < CAP_TRANSAKTION && transaktion[i] != 0; i++)
	{

		statement += "transaktion " + to_string(i) + " " + to_string(transaktion[i]) + "\n";

	}
	
	return statement;

}

//operators 
bool BankAccunt::operator==(const BankAccunt &otherAccount)const
{

	return this->nameOfOwner == otherAccount.nameOfOwner;

}
