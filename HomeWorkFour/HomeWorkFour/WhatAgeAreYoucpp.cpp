#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
//Gör ett program för biljetthantering.Användaren ombeds skriva in
//åldern.För barn upp till 6 år måste användaren dessutom ange om barnet
//är i förälders sällskap.Programmet avgör och informerar om biljettpriset
//enligt nedan.
//Gratis upp till 6 års ålder i förälders sällskap annars 20 SEK.
//25 SEK för barn i åldrarna 7 till och med 12 år.
//35 SEK för ungdomar i åldrarna 13 till och med 18 år.
//50 SEK för vuxna från 19 år och uppåt.
//Programkörningen ska fortgå tills användaren matar in åldern - 1
//+ hur många är ni och ge det totala pricet

const int TicketsSmalChildrean = 20;
const int TicketChildren = 25;
const int TicketTeen = 35;
const int TicketAdult = 50;
int main()
{
	string perentalSupervision="";
	int TicketChildAdultCounter = 0, TicketsSmalChildreanCounter = 0;
	int TicketChildrenCounter = 0, TicketTeenCounter = 0, TicketAdultCounter = 0;
	int TotalPrice = 0, NummberOfPeople = 0, peopleCount = 0, age=0;
	

	cout << "Hello and welcome to the ticket Machine!\nHow meny are you? ";
	cin >> NummberOfPeople; cin.ignore();

	while (peopleCount < NummberOfPeople && age!=-1)
	{
		cout << "How old are person " << peopleCount+1 << "?? ";
		cin >> age; cin.ignore();

		if (age > 18)
			TicketAdultCounter++;

		else if (age > 12)
			TicketTeenCounter++;

		else if (age > 6)
			TicketChildrenCounter++;

		else if (age > 0)
		{
			cout << "Is the kid in company whif an adult?? ";
			cin >> perentalSupervision; cin.ignore();
			if (perentalSupervision != "No" && perentalSupervision != "no")
				TicketsSmalChildreanCounter++;

			else
				TicketChildAdultCounter++;

		}
		else if (age == -1)
			age = -1;

	
		peopleCount++;
	}
	cout << "______________________________________________________\n"
		<< "|                                                     |\n"
		<< "|         G503, Inc                                   |\n"
		<< "|                                                     |\n"
		<< "|  Free childe tickets:       " << TicketChildAdultCounter << "   0kr                 |\n"
		<< "|  Paying mini childs ticket: " << TicketsSmalChildreanCounter << "   " << TicketsSmalChildrean*TicketsSmalChildreanCounter << "kr                |\n"
		<< "|  Child Tickets:             " << TicketChildrenCounter << "   " << TicketChildren*TicketChildrenCounter << "kr                |\n"
		<< "|  Teen Tickets:              " << TicketTeenCounter << "   " << TicketTeen*TicketTeenCounter << "kr                |\n"
		<< "|  Adult Ticket:              " << TicketAdultCounter << "   " << TicketAdult*TicketAdultCounter << "kr                |\n"
		<< "|                                                     |\n"
		<< "|  Total Price:                   " 
		<< (TicketsSmalChildrean*TicketsSmalChildreanCounter)+(TicketChildren*TicketChildrenCounter)+(TicketTeen*TicketTeenCounter)+(TicketAdult*TicketAdultCounter)<<"kr               |\n"
		<< "|                                                     |\n"
		<< "|_____________________________________________________|"<<endl<<endl;

	system("pause");
	return 0;
}