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
	//allokera minne för nrsArray
	nrsArray = new int[capacity];


	cout << "mata in " << capacity << " heltal " << endl;
	for (int i = 0; i < capacity; i++)
	{
		cin >> nrsArray[i];
	}

	cout << "Du har lagt in följande  heltal: ";
	for (int i = 0; i < capacity; i++)
	{
		cout << nrsArray[i] << ", ";
	}
	cout << endl << endl;

	//doubla storleken på arrayen nrsArray
	int *temp = nullptr;
	temp = new int[2 * capacity];// dubbelt så många

	for(int i = 0; i < capacity; i++)
	{
		temp[i] = nrsArray[i];
	}

	delete[] nrsArray;// frigör minnet för nrsArray
	//kopiera addresen från temp till nrsArray
	nrsArray = temp;
	temp = nullptr;//stäng bakdörrent
	//uppdatera kapasiteten
	capacity *= 2;//dubbla capasity;
	delete[] nrsArray;
	system("pause");
	return 0;
}