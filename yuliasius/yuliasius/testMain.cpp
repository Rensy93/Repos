#include "SwimRun.h"
#include<iostream>

#include<fstream>

using namespace std;

void readTxt(SwimRun teamArr[], string filename, int &nrOf);
void showAll(SwimRun teamArr[], int nrOf);
void addOne(SwimRun teamArr[], int &nrOf);
bool findOne(SwimRun teamArr[], string name, int nrOf);
void deleteOne(SwimRun teamArr[], int &nrOf);
void sort(SwimRun teamArr[], int nrOf);
void running(SwimRun teamArr[], int nrOf);
void swiming(SwimRun teamArr[], int nrOf);
void writetoFile(SwimRun teamArr[], string filename, int nrOf);
void showBestOne(SwimRun teamArr[], int nrOf);
void diploma(SwimRun teamArr[], int nrOf);



int main()
{
	int nrOf = 0;
	int cap = 0;
	int rounds = 0;
	cout << "How many teams: " << endl;
	cin >> cap; cin.ignore();
	SwimRun *teamArr = new SwimRun[cap];

	readTxt(teamArr, "name.txt", nrOf);
	showAll(teamArr, nrOf);

	cap += 5;
	SwimRun *temp = new SwimRun[cap];

	for (int i = 0; i < nrOf; i++)
	{
		temp[i] = teamArr[i];

	}
	delete[] teamArr;
	teamArr = temp;
	temp = nullptr;


	addOne(teamArr, nrOf);
	showAll(teamArr, nrOf);
	deleteOne(teamArr, nrOf);
	showAll(teamArr, nrOf);

	cout << "How many rounds: " << endl;
	cin >> rounds;

	for (int i = 0; i < rounds; i++)
	{
		running(teamArr, nrOf);
		swiming(teamArr, nrOf);
		
	}
	showAll(teamArr, nrOf);
	for (int i = 0; i < nrOf; i++)
	{
		cout << teamArr[i].totalTid() << endl;
	}

	cout << "Efter sortering*******************************************" << endl;
	sort(teamArr, nrOf);
	

	cout << "the best one is" << endl;
	//writetoFile(teamArr, "name.txt", nrOf);
	showBestOne(teamArr, nrOf);
	diploma(teamArr, nrOf);

	system("pause");
	return 0;
}



void readTxt(SwimRun teamArr[], string filename, int &nrOf)
{
	string name;
	int bla = 0;
	ifstream in;
	in.open(filename);
	SwimRun aTeam;
	
	if (in.is_open())
	{
		in >> bla; in.ignore();
		for (int i = 0; i < bla; i++)
		{
			getline(in, name);
			aTeam = SwimRun(name);
			teamArr[nrOf++] = aTeam;
		}
	}
	in.close();
}

void showAll(SwimRun teamArr[], int nrOf)
{
	cout << "Teams:" << endl;
	for (int i = 0; i < nrOf; i++)
	{
		cout<<teamArr[i].getName() << endl;
	}
}

void addOne(SwimRun teamArr[], int &nrOf)
{
	string name = "+";
	cout << "Name: " << endl;
	getline(cin, name);

	while (name != "-")
	{
		if (!findOne(teamArr, name, nrOf))
		{
			teamArr[nrOf++] = SwimRun(name);
		}
		cout << "Enter another name or - in the order to finish" << endl;
		getline(cin, name);
	}

}
bool findOne(SwimRun teamArr[], string name, int nrOf)
{
	bool isFound = false;
	SwimRun temp;
	temp = SwimRun(name);
	for (int i = 0; i < nrOf; i++)
	{
		if (teamArr[i] == temp)
		{
			isFound = true;
		}
	}
	return isFound;
}

void deleteOne(SwimRun teamArr[], int &nrOf)
{
	string name = "";
	SwimRun temp;
	int pos = -1;
	cout << "Name to delete: " << endl;
	getline(cin, name);
	temp = SwimRun(name);

	while (name != "-")
	{
		for (int i = 0; i < nrOf; i++)
		{
			
			if (teamArr[i] == temp)
			{
				pos = i;
			}
			
		}
		if (pos != -1)
		{
			teamArr[pos] = teamArr[--nrOf];

		}
		
		cout << "Deleted. Enter another name to delete or - " << endl;
		getline(cin, name);
		temp = SwimRun(name);
		
	}

}


void sort(SwimRun teamArr[], int nrOf)
{
	int pos = -1;
	SwimRun temp;
	for (int i = 0; i < nrOf; i++)
	{
		pos = i;

		for (int h = i+1; h < nrOf; h++)
		{
			if(teamArr[h]<teamArr[pos])
			pos = h;
		}

	
		temp = teamArr[pos];
		teamArr[pos] = teamArr[i];
		teamArr[i] = temp;
		cout << teamArr[i].toString() << endl;
	}

}


void running(SwimRun teamArr[], int nrOf)
{
	for(int i = 0; i < nrOf; i++)
	{
		teamArr[i].addRun();
	}
}
void swiming(SwimRun teamArr[], int nrOf)
{
	for (int i = 0; i < nrOf; i++)
	{
		teamArr[i].addSwim();
	}
}


void writetoFile(SwimRun teamArr[], string filename, int nrOf)
{
	ofstream out;
	out.open(filename);

	out << nrOf;
	for (int i = 0; i < nrOf; i++)
	{
		out << teamArr[i].toString() << endl;
	}
	out.close();
}

void showBestOne(SwimRun teamArr[], int nrOf)
{
	int pos = 0;
	for (int i = 1; i < nrOf; i++)
	{
		if (teamArr[pos].totalTid() < teamArr[i].totalTid())
		{
			pos = i;
		}
	}

	cout << teamArr[pos].toString() << endl;
}

void diploma(SwimRun teamArr[], int nrOf)
{
	int pos = 0;
	cout << "Teams which will get diploma are: \n";
	for (int i = 0; i < nrOf; i++)
	{
		if (teamArr[i].totalTid() < teamArr[pos].totalTid()*1.1)
		{
			 cout<< teamArr[i].toString() << endl;
		}
	}
}