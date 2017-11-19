#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	int i=0;

	while (i<10)
	{
		
		cout << rand() % 51 + 50 << "\n*******\n";
		
		i++;
	}

	system("pause");
	return 0;
}