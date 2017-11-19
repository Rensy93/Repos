#pragma once
#include "Ball.h"

void fillBalls(Ball theBalls[], int theCapasity, int nrOfBalls);
void ballsFromFile(string filename, Ball theBalls[], int theCapasity, int &nrOfBalls);
void fillBalls(Ball theBalls[], int theCapasity, int nrOfBalls);
void addBall(Ball theBalls[], int &nrOfBalls, int newSpeed);
void showAllBalls(Ball theBalls[], int theCapasity);
void removeABall(Ball theBalls[], int &nrOfBalls);
double totalSpeedAtSpecifikTime(Ball theBalls[], int nrOfBalls);
void sortAllBalls(Ball theBalls[], int theCapasity, int nrOfBalls);