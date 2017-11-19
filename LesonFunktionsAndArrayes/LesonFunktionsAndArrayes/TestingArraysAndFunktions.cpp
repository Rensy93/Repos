#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Funktion som fuller en array med tal
void filArrayWhiteRandomNumber(int theArray[], int theCap);//endas addresen till arrayen (0000fff00) så att man har en tillfälig bak väg in :P
void printArrayWhiteRandomNumber(int theArray[], int theCap);
int howMenyEvenNumber(int theAray[], int theCap);
int totalSumOfAnArray(int theArray[], int theCap);
int findTheNumber(int theArray[], int theCap, int serchedNr);
//int findTheSmalestNr(int theArray[], int TheCap);
int findTheSmalestNr(int theArray[], int TheCap, int startPos);
void userFiledArray(int theArray[], int theCap, int fromPos);
const int CAP = 10;
const int CAP_BIGGER = 15;
int main()
{
	srand(time(0));
	int nrsOne[CAP] = {};
	int nrsTwo[CAP] = {};
	int nrsThree[CAP] = {};
	int nrsFour[CAP_BIGGER] = {};

	//Fylll de tree arrayerna med slumpade tal inom [10...99]
	filArrayWhiteRandomNumber(nrsOne, CAP);
	filArrayWhiteRandomNumber(nrsTwo, CAP);
	filArrayWhiteRandomNumber(nrsThree, CAP);
	filArrayWhiteRandomNumber(nrsFour, CAP_BIGGER);

	//skriv utt skiten
	printArrayWhiteRandomNumber(nrsOne, CAP);
	printArrayWhiteRandomNumber(nrsTwo, CAP);
	printArrayWhiteRandomNumber(nrsThree, CAP);
	printArrayWhiteRandomNumber(nrsFour, CAP_BIGGER);
	

	//antal jämna Heltal
	int sum = 0;
	int sumTotal = 0;
	sum = howMenyEvenNumber(nrsOne, CAP);
	cout << "the was " << sum << " even number in aray 1" << endl;
	sum = howMenyEvenNumber(nrsTwo, CAP);
	cout << "the was " << sum << " even number in aray 2" << endl;
	sum = howMenyEvenNumber(nrsThree, CAP);
	cout << "the was " << sum << " even number in aray 3" << endl;
	sum = howMenyEvenNumber(nrsFour, CAP_BIGGER);
	cout << "the was " << sum << " even number in aray 4" << endl;

	//Summera jämna heltal

	sumTotal=totalSumOfAnArray(nrsOne, CAP);
	cout << "sum total in array 1 was " << sum << endl;
	sumTotal = totalSumOfAnArray(nrsTwo, CAP);
	cout << "sum total in array 2 was " << sum << endl;
	sumTotal = totalSumOfAnArray(nrsThree, CAP);
	cout << "sum total in array 3 was " << sum << endl;
	sumTotal = totalSumOfAnArray(nrsFour, CAP_BIGGER);
	cout << "sum total in array 4 was " << sum << endl;

	//Finnd a specifick number;
	int serchedNr=0, posision=0;
	//array one
	cout << "What number are you looking for in array one?? ";
	cin >> serchedNr; cin.ignore();
	posision=findTheNumber(nrsOne, CAP, serchedNr);
	if (posision != -1) 
	{
		cout << "the number were found at posision: " << posision << " in array one" << endl;
	}
	else
	{
		cout << "your number dose not exist in array one"<<endl;
	}
	//Array two
	cout << "What number are you looking for in array two?? ";
	cin >> serchedNr; cin.ignore();
	posision = findTheNumber(nrsTwo, CAP, serchedNr);
	if (posision != -1)
	{
		cout << "the number were found at posision: " << posision << " in array two" << endl;
	}
	else
	{
		cout << "your number dose not exist in array two" << endl;
	}
	//array three
	cout << "What number are you looking for in array one?? ";
	cin >> serchedNr; cin.ignore();
	posision = findTheNumber(nrsThree, CAP, serchedNr);
	if (posision != -1)
	{
		cout << "the number were found at posision: " << posision << " in array three" << endl;
	}
	else
	{
		cout << "your number dose not exist in array three" << endl;
	}
	//array four
	cout << "What number are you looking for in array one?? ";
	cin >> serchedNr; cin.ignore();
	posision = findTheNumber(nrsFour, CAP_BIGGER, serchedNr);
	if (posision != -1)
	{
		cout << "the number were found at posision: " << posision << " in array four"<< endl;
	}
	else
	{
		cout << "your number dose not exist in array four: " << endl;
	}

	system("pause");
	return 0;
}

void filArrayWhiteRandomNumber(int theArray[], int theCap)
{
	
	for (int i = 0; i < theCap; i++)
	{
		theArray[i] = rand() % 90 + 10;
	}

}
void printArrayWhiteRandomNumber(int theArray[], int theCap)
{
	for (int i = 0; i < theCap; i++)
		cout << theArray[i]<<" ";

	cout << endl;
}
int howMenyEvenNumber(int theAray[], int theCap)
{
	int counter = 0;
	for (int i = 0; i < theCap; i++)
	{
		if (theAray[i] % 2 == 0)
			counter++;

	}

	return counter;
}
int totalSumOfAnArray(int theArray[], int theCap)
{
	int sumTotal = 0;

	for (int i = 0; i < theCap; i++)
		sumTotal += theArray[i];

	return sumTotal;
}
int findTheNumber(int theArray[], int theCap, int serchedNr)
{
	int posision = -1;

	for (int i = 0; i < theCap; i++)
	{
		if (serchedNr == theArray[i])
			posision = i;
	}

	return posision;
}
//int findTheSmalestNr(int theArray[], int TheCap)
//{
//	int smallestNummber = theArray[0];
//	int posisionOfSmallest = 0;
//	for (int i = 1; i < TheCap; i++)
//	{
//		if (smallestNummber > theArray[i])
//		{
//			posisionOfSmallest = i;
//			smallestNummber = theArray[i];
//		}
//	}
//
//	return posisionOfSmallest;
//}

int findTheSmalestNr(int theArray[], int TheCap, int startPos)
{

	int posisionOfSmallest = 0;
	for (int i = startPos+1; i < TheCap; i++)
	{

		if (theArray[posisionOfSmallest] > theArray[i])
		{
		
			posisionOfSmallest = i;
			
		}

	}

	return posisionOfSmallest;
}

void userFiledArray(int theArray[], int theCap, int&fromPos)
/*
	& i en parameterlista (dvs datatyp & namn) innebär att den formella parametra blir ett alias till den aktuella parametern.
	konsekvensen blir att en ändring av innehållet via den formella parametern innebär att förändringen är gjord på/i den aktuella parametern.

*/ 
{

	int nrsToAdd;

	cout << "How men numbers? ";

	cin >> nrsToAdd; cin.ignore;

	for (int i = fromPos; i < fromPos + nrsToAdd && i >= theCap; i++)
	{
		cin >> theArray[i];
	}

	fromPos += nrsToAdd;
	//return fromPos + nrsToAdd;
}