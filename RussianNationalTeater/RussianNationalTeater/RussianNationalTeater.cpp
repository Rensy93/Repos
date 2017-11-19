//Created by Rasmus Flomén 2017-09-07

#include <iostream>
#include <string>

using namespace std;

//Prototypes
void title();
int menu();
void initiateArray(string theArray[], int capOfArray);
void showArray(string theArray[], int capOfArray, int nrOfSeatsPerRow);
int nrOfReservedSeats(string theArray[], int capOfArray);
void BookTicket(string theArray[], int capOfArray);
void printTicket(string thaArrayOne[], string theArrayTwo[], int capOfArrayOne, int capOfArrayTwo);

//Constants
const int CAP_PARQUET = 24;
const int ROW_PARQUET = 6;
const int CAP_BALCONY = 16;
const int ROW_BALCONY = 4;


int main()
{

	//för svenska täcker så som åäö =)
	locale swedish("swedish");
	locale::global(swedish);

	//Variabler
	string parquet[CAP_PARQUET];
	string balcony[CAP_BALCONY];
	string playerSeatChoice = "";
	int playerChoice = 0;
	int parquetCount = 0;
	int balconyCount = 0;

	//Förberedelser
	title();
	initiateArray(parquet, CAP_PARQUET);
	initiateArray(balcony, CAP_BALCONY);
	
	

	while (playerChoice != 5)
	{

		playerChoice = menu();

		switch (playerChoice)
		{

		case 1:
		{

			//Presentera en översikt avseende bokningar
			showArray(parquet, CAP_PARQUET, ROW_PARQUET);
			showArray(balcony, CAP_BALCONY, ROW_BALCONY);
			break;

		}
		case 2:
		{

			//Boka en plats för en person
			cout << "What typ of ticket do you want parket or Balkoni (P/B): ";
			
			cin >> playerSeatChoice; cin.ignore();

			if (playerSeatChoice == "P" || playerSeatChoice == "p")
				BookTicket(parquet, CAP_PARQUET);

			else if (playerSeatChoice == "b" || playerSeatChoice == "B")
				BookTicket(balcony, CAP_BALCONY);
			
			break;

		}
		case 3:
		{

			//skriva ut en biljett för en person
			printTicket(parquet, balcony, CAP_PARQUET, CAP_BALCONY);

			break;

		}
		case 4:
		{

			//Skriva ut antalet bokningar i respektive kategori

			parquetCount = nrOfReservedSeats(parquet, CAP_PARQUET);
			balconyCount = nrOfReservedSeats(balcony, CAP_BALCONY);

			cout << "Parket: " << parquetCount << endl
				<< "balcony: " << balconyCount << endl << endl
				<< "Total reserved tickets: " << parquetCount + balconyCount<<endl;

			break;

		}
		default:
			if(playerChoice != 5)
				cout << "I don't understand what you are trying to do!!" << endl;
			
			break;
		}
	}

	system("pause");
	return 0;
}

//Funktion
void title()
{

	cout << "******************************************" << endl;
	cout << "*     Welcome to the  National Teater    *" << endl
		<<  "*  ©2017 G503, Inc. All rights reserved  *" << endl;
	cout << "******************************************" << endl << endl;

}

int menu()
{
	int playerChoice = 0;

	cout << "1. Show an overweie of reserved tickets" << endl
		<< "2. book a ticket" << endl
		<< "3. Print out a ticket" << endl
		<< "4. Print out a number of booking in both categorys" << endl
		<< "5. Quit" << endl
		<< "Your choice: ";

	cin >> playerChoice; cin.ignore();

	cout << endl << endl;

	return playerChoice;
}

void initiateArray(string theArray[], int capOfArray)
{

	for (int i = 0; i < capOfArray ; i++)
		theArray[i] = "Emty";
	
}

void showArray(string theArray[], int capOfArray, int nrOfSeatsPerRow)
{
	int count = 0;

	//nrOfrows = 4;
	if (capOfArray > 16)
		cout << "Parket:" << endl;

	else
		cout << "Balconi:" << endl;
	
	for (int i = 0; i < capOfArray/nrOfSeatsPerRow; i++)
	{

		for (int row = 0; row < nrOfSeatsPerRow; row++)
		{
			cout << theArray[count] << " ";
			count++;
		}
		cout << endl;

	}

	cout << endl << endl;
}

void BookTicket(string theArray[], int capOfArray)
{
	string name = "";
	int seatNr = 0;

	cout << "what's your name?? ";
	
	getline(cin, name);

	cout << "What seat number do you want between 0" 
		<< capOfArray << " : ";

	cin >> seatNr; cin.ignore();

	if (theArray[seatNr] == "Emty")
	{

		theArray[seatNr] = name;
		cout << "Booking is completed" << endl;
	
	}

	else
		cout << "Sorry you were to late someone stole that seat from you!!" << endl;

}

int nrOfReservedSeats(string theArray[], int capOfArray)
{
	int parquetCounter = 0;
	int BalconyCounter = 0;

		for (int i = 0; i < capOfArray; i++)
		{

			if (theArray[i] != "Emty")
				parquetCounter++;

		}

		return parquetCounter;

		for (int i = 0; i < capOfArray; i++)
		{

			if (theArray[i] != "Emty")
				BalconyCounter++;

		}

		return BalconyCounter;

}

void printTicket(string thaArrayOne[], string theArrayTwo[], int capOfArrayOne, int capOfArrayTwo)
{
	string name = "";
	string category = "";
	int pos = 0;
	bool ticketFound = false;


	cout << "Whos ticket are you looking for: ";
	getline(cin, name);

	for (int i = 0; i < capOfArrayOne && !ticketFound; i++)
	{
	
		if (thaArrayOne[i] == name)
		{
		
			ticketFound = true;
			category = "parquet";
			pos = i;

		}

	}
	
	for (int i = 0; i < capOfArrayTwo && !ticketFound; i++)
	{
		
		if (theArrayTwo[i] == name)
		{
	
			ticketFound = true;
			category = "Balcony";
			pos = i;

		}

	}

	if (ticketFound)
	{
		cout << "########################" << endl
			<< "Ticket" << endl << endl
			<< "category: " << category << endl
			<< "Name: " << name << endl
			<< "place: " << pos << endl << endl
			<< "########################" << endl;
	}
	else
	{
		cout << "there was no ticket in this persons name." << endl;
	}

}