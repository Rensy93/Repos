#include <iostream>
#include <string>

using namespace std;


int main()
{
	int nrOfDays=0;
	double pricePerDay=0.0;
	string name="";
	
	cout << "and for how meny days dose they want to rent the rume?? ";
	cin >> nrOfDays;
	cin.ignore();//ignore the return after get line 
	cout << "Enter the name of the atenents: ";
	getline(cin, name);
	cout << "and what is the price for the rum?? "<<endl;
	cin >> pricePerDay;
	cin.ignore();
	cout << name << "has reserved" << endl << "a room for " << nrOfDays << " with cost of " << pricePerDay << "$" <<
		endl << "total: " << nrOfDays*pricePerDay<<endl;
		


	system("pause");
	return 0;
}