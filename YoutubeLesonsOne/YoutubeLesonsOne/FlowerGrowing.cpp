#include <iostream>
#include <string>

using namespace std;


int main() 
{
	string seedColor = "", soilMoisture = "",loop="y";
	int soilTempature = 0;


	while (loop!="n")
	{
		cout << "Is the seed red or blue?? \n";
		cin >> seedColor; cin.ignore();
		if (seedColor != "red" && seedColor != "blue")
		{
			cout << "Invalid color selected. program will terminate \n\n";
			system("pause");
			return 0;
		}
		cout << "What is the soils temprature?? \n";
		cin >> soilTempature; cin.ignore();
		
		if (seedColor == "red" && soilTempature >= 75)
		{
			cout << "Is the soil moisture dry or wet?? \n";
			cin >> soilMoisture; cin.ignore();
			if (soilMoisture != "wet" && soilMoisture != "dry")
			{
				cout << "Invalid moisture selected. program will terminate \n\n";
				system("pause");
				return 0;
			}
			if (soilMoisture == "dry")
			{
				cout << "Your seed will grow to be a beautiful Dandelion\n\n";
			}
			else
			{
				cout << "Your seed will grow to be a beautiful Sunflower\n\n";
			}
		}
		else if (seedColor == "blue" &&  soilTempature >= 60 && soilTempature <= 70)
		{
			cout << "Is the soil moisture dry or wet?? \n";
			cin >> soilMoisture; cin.ignore();
			if (soilMoisture != "wet" && soilMoisture != "dry")
			{
				cout << "Invalid moisture selected. program will terminate \n\n";
				system("pause");
				return 0;
			}
			if (soilMoisture == "dry")
			{
				cout << "Your seed will grow to be a beautiful Sunflower\n\n";
			}
			else
			{
				cout << "Your seed will grow to be a beautiful Dandelion\n\n";
			}
		}
		else
		{
			cout << "Your seed will not grow into beautiful flower but it will grow into a ugly mushroom\n\n";
		}
		cout << "do you want to create a new flower enter y for yes and n for no\n\n**********************************************\n\n";
		cin >> loop; cin.ignore();
	}
	system("pause");
	return 0;
}