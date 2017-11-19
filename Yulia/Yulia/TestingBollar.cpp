//
// Created by Yulia Lizneva on 2017-10-06.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Bollar.h"
#include <cmath>

using namespace std;

void readFile(Bollar ballArray[], int &nrOfBalls, string fileName, int capacity);
void addBall(Bollar ballArray[], int &nrOfBalls, int capacity);
void ShowAll(Bollar ballArray[], int nrOfBalls, int capacity, int time);
int findBall(Bollar ballArray[], int speedX, int nrOfBalls);
void fillBallDef(Bollar ballArray[], int nrOfBalls, int capacity);


int main()
{
	int capacity = 4;
	Bollar *ballArray = nullptr;
	ballArray = new Bollar[capacity];
	int nrOfBalls = 0;
	int time = 0;


	fillBallDef(ballArray, nrOfBalls, capacity);


	for (int i = 0; i<capacity; i++)
	{
		cout << ballArray[i].toString(time) << endl;
	}



	readFile(ballArray, nrOfBalls, "BollText.txt", capacity);
	cout << "How long the balls has been traveling in seconds: " << endl;
	cin >> time;
	cin.ignore();
	ShowAll(ballArray, nrOfBalls, capacity, time);

	capacity = capacity + 3;
	Bollar *tempBallArray = new Bollar[capacity];

	for (int i = 0; i<nrOfBalls; i++)
	{
		tempBallArray[i] = ballArray[i];

	}


	delete[] ballArray;

	ballArray = tempBallArray;

	fillBallDef(ballArray, nrOfBalls, capacity);
	//ShowAll(ballArray, nrOfBalls, capacity, time);



	addBall(ballArray, nrOfBalls, capacity);
	ShowAll(ballArray, nrOfBalls, capacity, time);

	addBall(ballArray, nrOfBalls, capacity);
	ShowAll(ballArray, nrOfBalls, capacity, time);




	delete[] ballArray;
	system("pause");
	return 0;
}



void readFile(Bollar ballArray[], int &nrOfBalls, string fileName, int capacity)
{

	int speedX = -1;
	ifstream in;

	in.open(fileName);

	if (in.is_open())
	{
		in >> nrOfBalls;
		in.ignore();
	}

	for (int i = 0; i<capacity; i++)
	{
		in >> speedX;
		in.ignore();
		ballArray[i] = Bollar(speedX);

		//nrOfBalls++;
	}
	in.close();
}

void addBall(Bollar ballArray[], int &nrOfBalls, int capacity)
{

	int speedNew = 0;


	cout << "Enter horizontal speed: " << endl;
	cin >> speedNew;
	cin.ignore();

	int temp = findBall(ballArray, speedNew, nrOfBalls);

	if (temp == -1)

	{
		ballArray[nrOfBalls] = Bollar(speedNew);
		nrOfBalls++;
		cout << "ball was added" << endl;
	}
	else
	{
		cout << "This ball is already exist" << endl;
	}


}


void ShowAll(Bollar ballArray[], int nrOfBalls, int capacity, int time)
{
	for (int i = 0; i<capacity; i++)
	{
		if (ballArray[i].getSpeedX() != -1)
		{
			cout << ballArray[i].toString(time) << " " << endl;
		}

	}


}
int findBall(Bollar ballArray[], int speedX, int nrOfBalls)
{
	int temp = -1;

	for (int i = 0; i<nrOfBalls; i++)
	{
		if (ballArray[i].getSpeedX() == speedX)
		{
			temp = i;
		}
	}
	return temp;
}


void fillBallDef(Bollar ballArray[], int nrOfBalls, int capacity)
{
	for (int i = nrOfBalls; i<capacity; i++)
	{
		ballArray[i] = Bollar();
	}

}