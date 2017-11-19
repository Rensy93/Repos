#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

const int CAP = 20;

int main()
{
	//int nrs[CAP] = { 10,20,30,40,50 }; //En fullt initsierad array
	//int values[CAP] = { 1,2 }; //En delvis initsierad array fylls upp men 0:or
	//int ages[CAP] = {};//hella arrayn fylls med 0:or
	//int numbers[] = { 22,36 };//initsierings listan bestämer storleken på arrayn

	string words[CAP] = { "allan","kalle","stina","lasse", "kaj", "rune","siv" };
	int nrWordsd = 0, posision =-1;
	string userWord="";
	
	for (int i = 0; i < CAP; i++)
	{
		if(words[i]!="")
			nrWordsd++;
	}
	cout << "who are you looking to delete?? ";
	getline(cin, userWord);

	for (int i = 0; i < nrWordsd && posision==-1; i++)
	{
		if (words[i]==userWord)
		{
			posision = i;
		}
	}
	if (posision != -1)
	{
		cout << "What you are loking for is in location: " << posision<<endl;
		//ordning ej relevant
		//ersätt den som är död med den sista i kön
		//words[posision] = words[--nrWordsd];
		for (int i = 0; i < nrWordsd; i++)
		{
			words[posision] = words[posision + 1];
			posision++;
			nrWordsd--;

		}
		//for (int i = posision; i < nrWordsd-1; i++)
		//{
		//	words[i] = words[i + 1];
		// nrWordsd--;

		//}
	}
	else
	{
		cout << "They who dont want to be fund wasn't fund"<<endl;
	}
	for (int i = 0; i < nrWordsd; i++)
		cout << words[i] << ", ";

	cout << endl << endl;
	system("pause");
	return 0;
}