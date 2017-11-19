#include <iostream>

using namespace std;

const int CAP = 4;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);//kontrolerar om du har mines leeks

	int *nrsArray = nullptr;
	int capacity = 0;
	
	int values[CAP] = { 1,2,3,4 };

	cout << "How meny jersy numers is in use: ";
	cin >> capacity; cin.ignore();
	//allokera minne f�r nrsArray
	nrsArray = new int[capacity];


	cout << "mata in " << capacity << " heltal " << endl;
	for (int i = 0; i < capacity; i++)
	{
		cin >> nrsArray[i];
	}

	cout << "Du har lagt in f�ljande  heltal: ";
	for (int i = 0; i < capacity; i++)
	{
		cout << nrsArray[i] << ", ";
	}
	cout << endl << endl;

	//doubla storleken p� arrayen nrsArray
	int *temp = nullptr;
	temp = new int[2 * capacity];// dubbelt s� m�nga

	for(int i = 0; i < capacity; i++)
	{
		temp[i] = nrsArray[i];
	}

	delete[] nrsArray;// frig�r minnet f�r nrsArray
	//kopiera addresen fr�n temp till nrsArray
	nrsArray = temp;
	temp = nullptr;//st�ng bakd�rrent
	//uppdatera kapasiteten
	capacity *= 2;//dubbla capasity;
	delete[] nrsArray;
	system("pause");
	return 0;
}