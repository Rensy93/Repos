#include <iostream>
#include <string>

using namespace std;

int main()
{

	string invitedPerson, hostName, streetAdres,date ;
	double time;

	cout << "Enter the name of the host: ";
	getline(cin,hostName);
	cout << "What is the streetadres: ";
	getline(cin,streetAdres);
	cout << "What date is the envent: ";
	getline(cin,date);
	cout << "What time is the event: ";
	cin >> time;
	cout << "And who are you inviting to it: ";
	cin >> invitedPerson;

	cout << "\n********************************************************" <<endl<<endl;
	cout << "Hello " << invitedPerson << "!" << endl;
	cout << "You are welcome to my party at " << streetAdres << " on " << date << " Kl. " << time << endl << endl;
	cout << "mvh" << endl;
	cout << hostName << endl << endl;
	cout << "********************************************************" << endl << endl;
	
	getchar();
	getchar();
	return 0;
}