#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
	int startHour, startMinute, startSecunds, finishHour, finishMinute, finishSecund ,hour, minute, secundOne,secondTwo,secunds;
	
	
	cout << "enter starting hour" << endl;
	cin >> startHour;
	cout << "enter starting minute" << endl;
	cin >> startMinute;
	cout << "enter starting secund" << endl;
	cin >> startSecunds;
	secundOne = startSecunds + (startMinute * 60) + (startHour * 60 * 60);
	
	cout << "enter finishing hour" << endl;
	cin >> finishHour;
	cout << "enter finishing minute" << endl;
	cin >> finishMinute;
	cout << "enter finishing secund" << endl;
	cin >> finishSecund;
	secondTwo = finishSecund + (finishMinute * 60) + (finishHour * 60 * 60);
	cout << "the run started " << startHour <<":" << startMinute << "."
		<< startSecunds << " and ended at " 
		<< finishHour << ":" << finishMinute << "." << finishSecund << endl<<endl;
	
	secunds = secondTwo - secundOne;
	hour = secunds / 3600;
	secunds %= 3600;
	minute = secunds / 60;
	secunds %= 60;

	cout <<"The time was: "<< hour << " hour " << minute << " minute " << secunds << " secunds"<<endl<<endl;

	system("pause");
	return 0;
}
