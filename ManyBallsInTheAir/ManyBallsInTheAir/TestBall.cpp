#include "Ball.h"
#include <fstream>
#include <iostream>

using namespace std;


//deklarations
void fillBalls(Ball theBalls[], int theCapasity, int nrOfBalls);
void ballsFromFile(string filename, Ball theBalls[], int theCapasity, int &nrOfBalls);
bool findBall(Ball theBalls[], double vx, int nrOfBalls);
void addBall(Ball theBalls[], int nrOfBalls);
void showAllBalls(Ball theBalls[], int theCapasity);
void removeABall(Ball theBalls[], int nrOfBalls);
double totalSpeedAtSpecifikTime(Ball theBalls[], int nrOfBalls);
void sortAllBalls(Ball theBalls[], int theCapasity, int nrOfBalls);


int main()
{
	int capasity = -1, nrOfBalls = 0;
	string fileName = "Balls.txt";
	Ball *balls = nullptr;
	Ball *tempBalls = nullptr;

	capasity = 4;

	balls = new Ball[capasity];
	fillBalls(balls, capasity, nrOfBalls);
	
	ballsFromFile(fileName, balls, capasity, nrOfBalls);

	capasity += 3;
	tempBalls = new Ball[capasity];

	for (int i = 0; i < nrOfBalls; i++)
	{

		tempBalls[i] = balls[i];

	}
	
	delete[] balls;
	
	balls = tempBalls;

	fillBalls(balls, capasity, nrOfBalls);

	//show all balls
	cout << "Showing balls" << endl;
	showAllBalls(balls, capasity);
	
	//läg till boll som finns
	cout << "Add a ball" << endl;
	addBall(balls, nrOfBalls);
	//läg till boll som inte finns
	cout << "Add a ball agin" << endl;
	addBall(balls, nrOfBalls);
	//show all balls
	cout << "Showing balls" << endl;
	showAllBalls(balls, capasity);
	//Remove a ball
	cout << "Removing Balls" << endl;
	removeABall(balls, nrOfBalls);
	//Show all balls
	cout << "Showing balls" << endl;
	showAllBalls(balls, nrOfBalls);
	//total speed of the balls
	/*double total =*/ 
	
	cout << "Total speed: "<< totalSpeedAtSpecifikTime(balls, nrOfBalls) << "m/s" << endl;
	//sort the balls by vx value
	cout << "Balls are beeing sorted" << endl;
	sortAllBalls(balls, capasity, nrOfBalls);
	//show all balls
	cout << "Showing all Balls" << endl;
	showAllBalls(balls, nrOfBalls);



	delete[] balls;

	system("pause");
	return 0;
}


//funskitions

void fillBalls(Ball theBalls[], int theCapasity, int nrOfBalls)
{

	for (int i = nrOfBalls; i < theCapasity; i++)
	{

		theBalls[i] = Ball();

	}

}

void ballsFromFile(string filename, Ball theBalls[], int theCapasity, int &nrOfBalls)
{

	ifstream in;
	in.open(filename);

	in >> nrOfBalls;

	for (int i = 0; i < theCapasity; i++)
	{
		int vx;
		in >> vx;
		theBalls[i] = Ball(vx);

	}
	in.ignore();
	in.close();

}

bool findBall(Ball theBalls[], int vx, int nrOfballs)
{
	int ballPosision = -1;

	for (int i = 0; i < nrOfballs && ballPosision == -1; i++)
	{
		if (theBalls[i].getVx() == vx)
			ballPosision = i;
	}

	return ballPosision;

}

void addBall(Ball theBalls[], int nrOfballs)
{
	int vx;
	int ballPos;
	
	cout << "Enter the balls start hoorisontal speed: ";
	cin >> vx; cin.ignore();
	cout << endl;
	
	ballPos = findBall(theBalls, vx, nrOfballs);

	if (ballPos != -1)
	{
		theBalls[nrOfballs] = Ball(vx);
		nrOfballs++;
	}
	else
	{
		cout << "This Ball alredy exist" << endl;

	}


}

void showAllBalls(Ball theBalls[], int theCapasity)
{
	int time = 0;

	cout << "Enter for how long time the ball has been flying: ";
	cin >> time; cin.ignore();

	for (int i = 0; i < theCapasity; i++)
	{

		if (theBalls[i].getVx() != 0.0)
			cout << "Ball " << i+1 << " " << theBalls[i].toString(time) << endl;

	}

}

void removeABall(Ball theBalls[], int nrOfBalls)
{
	int vx = 0;
	int ballPosision = 0;
	
	cout << "Enter the horizontal speed of the ball you want to remove: ";
	cin >> vx; cin.ignore();
	cout << endl;
	ballPosision = findBall(theBalls, vx, nrOfBalls);
	if (ballPosision != -1)
	{

		/*for (int i = ballPosision; i < nrOfBalls; i++)
		{

			theBalls[ballPosision] = theBalls[ballPosision + 1];

		}*/
		
		theBalls[ballPosision] = theBalls[nrOfBalls];

		nrOfBalls--;
	}
	else
	{

		cout << "We can't finnd this ball" << endl;

	}

}

double totalSpeedAtSpecifikTime(Ball theBalls[], int nrOfBalls)
{
	double TotalBallSpeeds = 0;
	int time = 0;

	cout << "Enter the time the balls has been flying: ";
	cin >> time; cin.ignore();
	cin.ignore();
	for (int i = 0; i < nrOfBalls; i++)
	{

		TotalBallSpeeds += theBalls[i].getV(time);

	}

	return TotalBallSpeeds;
}

void sortAllBalls(Ball theBalls[], int theCapasity, int nrOfBalls)
{

	int posOfsmalest = 0;

	for (int i = 0; i << theCapasity; i++)
	{
		posOfsmalest = i;

		for (int h = i + 1; h << theCapasity; h++)
		{

			if (theBalls[posOfsmalest] > theBalls[h])
			{

				posOfsmalest = h;

			}

			Ball tempBall = theBalls[i];
			theBalls[i] = theBalls[h];
			theBalls[h] = tempBall;
		
		}

	}

}