#include"HorisontalShape.h"
#include"VerticalShape.h"
#include<iostream>
int main()
{
	int capacity = 5;
	int nrOfShapes = 0;
	Shape* * shapes = nullptr;
	
	//Skapa f�r shapes en dynamiskt allokerad array inneh�llande capacity pekare av typen Shape
	
	//Skapa i tur och ordning f�ljande 4 objekt vilka pekas ut fr�n shapes
	
	//HorisontalShape-objekt med xPos:10, yPos:10, bredd:50, h�jd:50, stegl�ngd:5
	//VerticalShape-objekt med xPos:30, yPos:30, bredd:40, h�jd:40, stegl�ngd:10
	//HorisontalShape-objekt med xPos:50, yPos:50, bredd:30, h�jd:30, stegl�ngd:8
	//VerticalShape-objekt med xPos:100, yPos:100, bredd:25, h�jd:25, stegl�ngd:6

	//F�r HorisontalShape-objektet som pekas ut av shapes[0]: �ndra r�relseriktningen
	//F�r VerticalShape-objektet som pekas ut av shapes[1]: �ndra r�relseriktningen

	//Presentera samtliga Shape-objekt
	
	//Flytta samtliga Shape-objekt

	//Presentera samtliga Shape-objekt
	
	//Kontrollera om objektet som pekas ut av shapes[0] �verlappar objektet som pekas ut av shapes[3]
	//Presentera resultatet

	//Kontrollera om objektet som pekas ut av shapes[0] �verlappar objektet som pekas ut av shapes[1] 
	//Presentera resultatet
	
	//Presentera endast riktningen f�r HorisontalShape-objekten
	//Du ska utg� fr�n att du inte p� f�rhand vet fr�n vilka positioner de pekas ut fr�n pekarna i arrayen shapes
	
	
	Shape* *shapesCopy = nullptr;

	//Skapa f�r shapesCopy en dynamiskt allokerad array inneh�llande capacity pekare av typen Shape

	//Tillse att shapesCopy pekar ut identiska objekt med de objekt som shapes pekar ut
	//Djupkopieraing ska anv�ndas!

	//Presentera samtliga Shapes-objekt som shapesCopy pekar ut
	
	//Tillse att inga minnesl�ckor finns

	system("pause");
	return 0;
}
//Ska ge f�ljande utskrift:

//Horisontal:
//Position: X: 10  Y : 10
//Direction : LEFT
//Step : 5
//Width : 50  Height : 50
//
//Vertical :
//Position : X : 30  Y : 30
//Direction : UP
//Step : 10
//Width : 40  Height : 40
//
//Horisontal :
//Position : X : 50  Y : 50
//Direction : RIGHT
//Step : 8
//Width : 30  Height : 30
//
//Vertical :
//Position : X : 100  Y : 100
//Direction : DOWN
//Step : 6
//Width : 25  Height : 25
//
//Horisontal :
//Position : X : 5  Y : 10
//Direction : LEFT
//Step : 5
//Width : 50  Height : 50
//
//Vertical :
//Position : X : 30  Y : 20
//Direction : UP
//Step : 10
//Width : 40  Height : 40
//
//Horisontal :
//Position : X : 58  Y : 50
//Direction : RIGHT
//Step : 8
//Width : 30  Height : 30
//
//Vertical :
//Position : X : 100  Y : 106
//Direction : DOWN
//Step : 6
//Width : 25  Height : 25
//
//
//�verlappar INTE varandra
//
//�verlappar varandra
//
//LEFT
//
//RIGHT
//
//Horisontal :
//Position: X: 5  Y : 10
//Direction : LEFT
//Step : 5
//Width : 50  Height : 50
//
//Vertical :
//Position : X : 30  Y : 20
//Direction : UP
//Step : 10
//Width : 40  Height : 40
//
//Horisontal :
//Position : X : 58  Y : 50
//Direction : RIGHT
//Step : 8
//Width : 30  Height : 30
//
//Vertical :
//Position : X : 100  Y : 106
//Direction : DOWN
//Step : 6
//Width : 25  Height : 25