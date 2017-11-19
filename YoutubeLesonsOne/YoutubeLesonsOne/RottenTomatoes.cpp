/*Problem Statement:
Create a program that displays the avrage scores
from a metacritic's Merascore and Rotten tomatoes' Tomatomerer
for a particular movie. The avarage score must be displayed
or a 10 point scale. The movie title and scores will be
inputted by the user.*/
#include <iostream>
#include <string>
using namespace std;

int main()
{

	// Get the name of the movie
	string movie = "";
	cout << "what is the name of the movie: \n";
	getline(cin, movie);

	// get the metascore
	int metaScore = 0;
	int tomatScore = 0.0;

	cout << "What is the meta score rating for  " << movie << "??\n";
	cin >> metaScore;
	//get the Tomateer score

	cout << "What is the Tomatometer rating for  " << movie << "??\n";
	cin >> tomatScore;

	//Calculate the average
	double average = (metaScore + tomatScore) / 2.0;

	// Rescale average
	double rescaleAverage = average / 10;
	
	// Display the result of the calculations
	cout << movie << " has an average rating of: " << rescaleAverage<<endl<<endl;

	system("pause");
	return 0;
}