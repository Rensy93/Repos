#pragma once
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

const int CAP_TRANSAKTION = 10;


class BankAccunt
{
	

private:

	string nameOfOwner;
	string code;
	int accountNr;
	int balance;
	int nrStatment;
	int transaktion[CAP_TRANSAKTION] = {};
	

public:

	

	BankAccunt();
	BankAccunt(string nameOfOwner, string code);
	~BankAccunt();

	//string toString();

	//get
	string getNameOfOwner()const;
	int getBalance()const;
	int getAccountNr()const;

	//set
	void setNameOfOwner(string nameOfOwner);

	//code
	bool changeCode(string oldCode, string newCode);
	bool checkCode(string code)const;

	//transferstuff
	void deposit(int amount);
	bool withdraw(int amunt);
	string statementtOfAccount()const;


	//operator
	bool operator==(const BankAccunt &otherAccount)const;


};