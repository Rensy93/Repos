#include "Book.h"
#include  "Movi.h"
#include <iostream>
using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Media *mPtr = new Movi("Qt heros", 2017,247,"Qt kids");
	Book *bPtr = new Book("c++", 2016, "gaddis");
	Movi *moPtr = new Movi("Qt masters", 2017, 247, "Qt kids");

	//ET = &

	cout << mPtr->toString() << endl;
	cout << bPtr->toString() << endl;
	cout << moPtr->toString() << endl;

	Media *mediaPtr = new Book("Et", -3000, "&");

	cout << mediaPtr->toString() << endl;

	delete mediaPtr;
	delete moPtr;
	delete bPtr;
	delete mPtr;
	system("pause");
	return 0;
}