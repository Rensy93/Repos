#include"Skate.h"
#include<iostream>
#include<fstream>
using namespace std;

void readFile(Skate teams[], string filename, int &nrOf);
int findOne(Skate teams[], string name, int nrOf);
void addOne(Skate teams[], int &nrOf);
bool deleteOne(Skate teams[], int &nrOf);
void showAll(Skate teams[], int nrOf);
void showToptre(Skate teams[], int nrOf);
void play(Skate teams[], int nrOf);

int main()
{
	srand(time(0));
	int cap = 0;
	int nrOf = 0;
	cout << "Hur många deltagare: " << endl;
	cin >> cap; cin.ignore();

	Skate *teams = new Skate[cap];

	Skate *temp = new Skate[cap * 2];

	for (int i = 0; i < cap; i++)
	{
		temp[i] = teams[i];
	}

	delete[] teams;
	teams = temp;
	temp = nullptr;

	readFile(teams, "names.txt", nrOf);
	
	showAll(teams, nrOf);
	addOne(teams, nrOf);

	
	showAll(teams, nrOf);
	deleteOne(teams, nrOf);
	play(teams, nrOf);
	showAll(teams, nrOf);

	cout << "Efter soretring***************************" << endl;
	showToptre(teams, nrOf);
	showAll(teams, nrOf);
	for (int i = 0; i<3; i++)
	{
		cout << "place " << i + 1 << ": " << teams[i].toString() << endl;
	}
	

	delete[]teams;
	system("pause");
	return 0;
}

void readFile(Skate teams[], string filename, int &nrOf)
{
	int bla;
	Skate temp;
	string name;
	ifstream in;
	in.open(filename);

	if (in.is_open())
	{
		in >> bla; in.ignore();
		for(int i=0; i<bla; i++)
		{ 
			getline(in, name);
			temp = Skate(name);
			teams[nrOf++] = temp;
		}
	}
	in.close();
}
int findOne(Skate teams[], string name, int nrOf)
{
	int pos = -1;
	Skate temp;
	temp = Skate(name);
	for (int i = 0; i < nrOf; i++)
	{
		if (teams[i] == temp)
		{
			pos = i;
		}
	}
	return pos;
}
void addOne(Skate teams[], int &nrOf)
{
	int players = 2;
	string name;
	//cout << "Name:" << endl;
	//getline(cin, name);

	//while (name != "-")
	//{
		for (int i = 0; i < players && name != "-";)
		{
			cout << "name to add" << endl;
			getline(cin, name);
			int pos = findOne(teams, name, nrOf);

			if (pos == -1)
			{
				teams[nrOf++] = Skate(name);
				i++;
			}
			else
			{
				cout << "du finns" << endl;
			}
			
		}

	//}
}
bool deleteOne(Skate teams[], int &nrOf)
{
	bool isOk = false;
	int bort = 0;
	string name;

	cout << "Hur många ska bort: " << endl;
	cin >> bort; cin.ignore();
	//cout << "Namn: " << endl;

	
		for (int i = 0; i < bort && name != "-";)
		{
			cout << "name to delete" << endl;
			getline(cin, name);
			int pos = findOne(teams, name, nrOf);
			if (pos != -1)
			{
				teams[pos] = teams[--nrOf];
				i++;
				isOk = true;
			}
		
	}

	return isOk;
}


void showAll(Skate teams[], int nrOf)
{
	for (int i = 0; i < nrOf; i++)
	{
		cout<<teams[i].toString() << endl;
	}
}


void showToptre(Skate teams[], int nrOf)
{
	int pos = 0;
	Skate temp;
	for (int i = 0; i < nrOf; i++)
	{
		pos = i;
		for (int k = i + 1; k < nrOf; k++)
		{
			if (teams[k].getTotal() < teams[pos].getTotal())
			{
				pos = k;
			}
		}
		temp = teams[pos];
		teams[pos] = teams[i];
		teams[i] = temp;

	}
	
}

void play(Skate teams[], int nrOf)
{
	for (int i = 0; i < nrOf; i++)
	{
		teams[i].addPoints();
	}
}