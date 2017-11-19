#pragma once
#include <string>


using namespace std;

//prototyper
void readFromFile(string fillName, string nameArray[], int yearArray[], int theCap, int &nrOfKids);
void showAll(string nameArray[], int yearArray[], int nrKids);
void showAllWithResults(string nameArray[], int yearArray[], int resultArray[], int nrKids);
int findKidPosision(string nameArray[], string kidNames, int nrKids);
void addNewKid(string nameArray[], int yearArray[], int &nrKids);
void removKid(string nameArray[], int yearArray[], int &nrKids);
void RandomizeResults(int resultArray[], int nrKids);
int findWinner(int resultArray[], int nrKids);
void findKidsWhifAge(string nameArray[], int ageArray[], int nrKids, int serchedAge);
//template <typename T>
void sortResults(string nameArray[], int ageArray[], int resultArray[], int nrKids);
void writToFile(string fillName, string nameArray[], int yearArray[], int resultArray[], int nrKids);
void average(int resultArray[], int nrKids);