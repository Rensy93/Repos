#include "TestBallHeader.h"
#include <iostream>
#include <fstream>

using namespace std;

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

	for (int i = 0; i < nrOfBalls; i++)
	{
		int vx;
		in >> vx;
		theBalls[i] = Ball(vx);

	}
	in.ignore();
	in.close();

}

int findBall(Ball theBalls[], int vx, int nrOfBalls)
{
	int ballPosision = -1;
	Ball tempBall(vx);

	for (int i = 0; i < nrOfBalls && ballPosision == -1; i++)
	{
		if (theBalls[i] == tempBall)
			ballPosision = i;
	}

	return ballPosision;

}

void addBall(Ball theBalls[], int &nrOfballs, int newSpeed)
{

	int ballPos;

	ballPos = findBall(theBalls, newSpeed, nrOfballs);

	if (ballPos == -1)
	{

		theBalls[nrOfballs] = Ball(newSpeed);
		nrOfballs++;
		cout << "ball was added" << endl;

	}
	else
	{
		cout << "This Ball alredy exist" << endl;

	}

}

void showAllBalls(Ball theBalls[], int theCapasity)
{
	int t = 0;

	cout << "Enter for how long time the ball has been flying: ";
	cin >> t; cin.ignore();

	for (int i = 0; i < theCapasity; i++)
	{

		if (theBalls[i].getVx() != 0)
		{

			cout << "Ball: " << theBalls[i].toString(t) << endl;

		}

	}

}

void removeABall(Ball theBalls[], int &nrOfBalls)
{
	int vx = 0;
	int ballPosision = 0;

	cout << "Enter the horizontal speed of the ball you want to remove: ";
	cin >> vx; cin.ignore();
	cout << endl;
	ballPosision = findBall(theBalls, vx, nrOfBalls);
	if (ballPosision != -1)
	{

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
	double totalBallSpeeds = 0;
	int t = 0;

	cout << "Enter the time the balls has been flying: ";
	cin >> t; cin.ignore();
	for (int i = 0; i < nrOfBalls; i++)
	{

		totalBallSpeeds += theBalls[i].v(t);

	}

	return totalBallSpeeds;
}

void sortAllBalls(Ball theBalls[], int theCapasity, int nrOfBalls)
{

	int posOfsmalest = 0;
	Ball tempBall(0);

	for (int i = 0; i < nrOfBalls; i++)
	{
		posOfsmalest = i;

		for (int h = i+1; h < nrOfBalls; h++)
		{

			if (theBalls[posOfsmalest] > theBalls[h])
			{

				posOfsmalest = h;

			}

		}

		tempBall = theBalls[i];
		theBalls[i] = theBalls[posOfsmalest];
		theBalls[posOfsmalest] = tempBall;

	}

}