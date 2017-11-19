#include "SwimRun.h"
#include <iostream>
#include <fstream>
#include <ctime>

void registrateTeamsFromFile(SwimRun teams[], int &nrOfTeams, int cap, string fileName);
void presentTeamNames(SwimRun teams[], int nrOfTeams);
void expandTeams(SwimRun *&teams, int nrOfTeams, int &cap);
void leteRegistry(SwimRun teams[], int &nrOfTeams, int cap);
int findTeam(SwimRun teams[], int nrOfTeams, string name);
void removeTeam(SwimRun teams[], int &nrOfTeams);
void runing(SwimRun teams[], int nrOfTeams);
void swiming(SwimRun teams[], int nrOfTeams);
int leader(SwimRun teams[], int nrOfTeams);
void showAll(SwimRun teams[], int nrOfTeams);
void sortResults(SwimRun teams[], int nrOfTeams);
void writeToFile(SwimRun teams[], int nrOfTeams, string fileName);
void diplomas(SwimRun teams[], int nrofTeams);

int main()
{
	srand(time(0));
	int maxTeams = 0, nrOfTeams = 0, runds=0;
	string fileName = "teams.txt";

	SwimRun *teams = nullptr;

	//before
	cout << "How meny teams are there rum for: ";
	cin >> maxTeams; cin.ignore();

	teams = new SwimRun[maxTeams];

	registrateTeamsFromFile(teams, nrOfTeams, maxTeams, fileName);

	presentTeamNames(teams, nrOfTeams);

	expandTeams(teams, nrOfTeams, maxTeams);

	leteRegistry(teams, nrOfTeams, maxTeams);

	presentTeamNames(teams, nrOfTeams);

	removeTeam(teams, nrOfTeams);

	cout << "Enter how meny runds the competision are: ";
	cin >> runds; cin.ignore();

	//competision

	for (int i = 0; i < runds; i++)
	{
		int pos = -1;
		
		runing(teams, nrOfTeams);
		swiming(teams, nrOfTeams);
		
		cout << "Round" << i + 1 << endl;
		
		pos = leader(teams, nrOfTeams);
		
		cout << "Leders are: " << teams[pos].toString();
		showAll(teams, nrOfTeams);

	}

	//after

	sortResults(teams, nrOfTeams);
	cout << "Results:" << endl;
	showAll(teams, nrOfTeams);
	writeToFile(teams, nrOfTeams, "results.txt");
	diplomas(teams, nrOfTeams);

	delete[] teams;
	
	system("pause");
	return 0;
}

void registrateTeamsFromFile(SwimRun teams[], int &nrOfTeams, int cap, string fileName)
{
	string teamName ="-";
	int tempnrOfTimes = 0;
	ifstream in;


	in.open(fileName);

	in >> tempnrOfTimes;in.ignore();

	if ((nrOfTeams+tempnrOfTimes) <= cap)
	{

		for (int i = nrOfTeams; i < tempnrOfTimes+nrOfTeams; i++)
		{
			getline(in, teamName);
			teams[i] = SwimRun(teamName);

		}
	
		nrOfTeams += tempnrOfTimes;
	}
	else
	{
		cout << "thats to meny teams" << endl;
	}

	in.close();
}

void presentTeamNames(SwimRun teams[], int nrOfTeams)
{

	for (int i = 0; i < nrOfTeams && teams[i].getTeamName() != "-"; i++)
	{
		cout << "Team " << i + 1 <<": "<< teams[i].getTeamName() << endl;
	}

}

void expandTeams(SwimRun *&teams, int nrOfTeams, int &cap)
{
	//expandar genom att ska en temp array för att sen föra över till den och sen ge adresen till orginalet .

	SwimRun *temp = nullptr;
	cap += 5;
	temp = new SwimRun[cap];

	for (int i = 0; i < nrOfTeams; i++)
	{

		temp[i] = teams[i];

	}

	delete[] teams;

	teams = temp;

	temp = nullptr;


}

void leteRegistry(SwimRun teams[], int &nrOfTeams, int cap)
{
	string name = "";

	while (name != "-")
	{
		cout << "what is the neme of the new team: ";
		getline(cin, name);
		
		if (nrOfTeams < cap)
		{
			if (findTeam(teams, nrOfTeams, name) == -1 && name!="-")
			{
				teams[nrOfTeams] = SwimRun(name);
				nrOfTeams++;
			}
			else if(name!="-")
			{
				cout << "this team alredy exist!! " << endl;
			}
		}
		else
		{
			cout << "I can't handel moore teams pliz enter - to stop entering tems!!" << endl;
		}
	}
}

int findTeam(SwimRun teams[], int nrOfTeams, string name)
{
	int pos=-1;
	//retunerar positionen på det sökta laget.
	for (int i = 0; i < nrOfTeams && pos == -1 && name!="-"; i++)
	{
		if (teams[i] == name)
		{
			pos = i;
		}
	}
	return pos;
}

void removeTeam(SwimRun teams[], int &nrOfTeams)
{
	
	string name;

	while (name != "-" && nrOfTeams > 0)
	{
		int pos = -1;

		cout << "Enter name of team you want to remove: ";
		getline(cin, name);
		//letar upp laget
		pos = findTeam(teams, nrOfTeams, name);

		if (pos != -1)
		{
			//bytter ut laget som ska bort och ersäter den med det sista laget och minskar antalet lag  med 1
			teams[pos] = teams[--nrOfTeams];
		}
		else if(name!="-")
		{
			cout << "can't find this team :'(" << endl;
		}
	}
}

void runing(SwimRun teams[], int nrOfTeams)
{

	for (int i = 0; i < nrOfTeams; i++)
	{

		teams[i].addRunTime();

	}

}

void swiming(SwimRun teams[], int nrOfTeams)
{

	for (int i = 0; i < nrOfTeams; i++)
	{

			teams[i].addSwimTime();

	}

}

int leader(SwimRun teams[], int nrOfTeams)
{
	int pos = 0;

	for (int i = 1; i < nrOfTeams; i++)
	{

		//använder mindre än opperatorn för att finna ledaren.

		if (teams[pos] < teams[i])
		{
			pos = i;
		}

	}

	return pos;
}

void showAll(SwimRun teams[], int nrOfTeams)
{

	for (int i = 0; i < nrOfTeams; i++)
	{

		cout << teams[i].toString()<<endl;

	}

}

void sortResults(SwimRun teams[], int nrOfTeams)
{

	//sorterar från största till minsta

	SwimRun temp;
	int largest = -1;

	for (int i = 0; i < nrOfTeams; i++)
	{
		largest = i;

		for (int h = i + 1; h < nrOfTeams; h++)
		{

			if (teams[largest] < teams[h])
			{
				largest = h;
			}

		}

		temp = teams[largest];
		teams[largest] = teams[i];
		teams[i] = temp;

	}

}

//saknar swim time och run time
void writeToFile(SwimRun teams[], int nrOfTeams, string fileName)
{

	ofstream out;

	out.open(fileName);

	out << nrOfTeams;
	out << endl;

	for (int i = 0; i < nrOfTeams; i++)
	{
		int total = 0;

		out << teams[i].getTeamName();
		out << endl;
		

		out << teams[i].totalTime();
		out << endl;

	}


}

void diplomas(SwimRun teams[], int nrofTeams)
{
	//för att veta vilken tid de behöver få bättre än
	int targetTime = teams[0].totalTime() * 1.50;
		
	cout << "Winner is " << endl << teams[0].toString() << endl << endl;
	cout << "Target time = " << targetTime << endl << endl;
		
	for (int i = 1; i < nrofTeams; i++)
	{

		if (teams[i].totalTime() < targetTime)
		{

			cout << "Congratiolation you got a diploma!!" << endl
				<< teams[i].toString()<<endl<<endl;

		}

	}


}