//
// Created by Yulia Lizneva on 2017-12-10.
//

#include"HorisontalShape.h"
#include"VerticalShape.h"
#include<iostream>
int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    int capacity = 5;
    int nrOfShapes = 0;
    Shape* * shapes = nullptr;


    //Skapa för shapes en dynamiskt allokerad array innehÂllande capacity pekare av typen Shape
    shapes = new Shape*[capacity];


    //Skapa i tur och ordning fˆljande 4 objekt vilka pekas ut frÂn shapes

    //HorisontalShape-objekt med xPos:10, yPos:10, bredd:50, hˆjd:50, stegl‰ngd:5
    shapes[nrOfShapes++] = new HorisontalShape(10, 10, 50, 50, 5);

    //VerticalShape-objekt med xPos:30, yPos:30, bredd:40, hˆjd:40, stegl‰ngd:10
    shapes[nrOfShapes++]= new VerticalShape(30, 30, 40, 40, 10);

    //HorisontalShape-objekt med xPos:50, yPos:50, bredd:30, hˆjd:30, stegl‰ngd:8
    shapes[nrOfShapes++]= new HorisontalShape(50, 50, 30, 30, 8);

    //VerticalShape-objekt med xPos:100, yPos:100, bredd:25, hˆjd:25, stegl‰ngd:6
    shapes[nrOfShapes++] = new VerticalShape(100, 100, 25, 25, 6);

    //Fˆr HorisontalShape-objektet som pekas ut av shapes[0]: ‰ndra rˆrelseriktningen
    shapes[0]->changeDirection();

    //Fˆr VerticalShape-objektet som pekas ut av shapes[1]: ‰ndra rˆrelseriktningen
    shapes[1]->changeDirection();
    //Presentera samtliga Shape-objekt
    for(int i=0; i<nrOfShapes; i++)
    {
        cout<<shapes[i]->toString();
    }


    //Flytta samtliga Shape-objekt
    for(int i=0; i<nrOfShapes; i++)
    {
        shapes[i]->move();
    }


    //Presentera samtliga Shape-objekt
    for(int i=0; i<nrOfShapes; i++)
    {
        cout<<shapes[i]->toString();
    }

    //Kontrollera om objektet som pekas ut av shapes[0] ˆverlappar objektet som pekas ut av shapes[3]
    //Presentera resultatet
    if(shapes[0]->intersectsWith(*shapes[3]))
    {
        cout<<"Crossing each other."<<endl;
    }
    else
    {
        cout<<"Are not crossing each other."<<endl;
    }




    //Kontrollera om objektet som pekas ut av shapes[0] ˆverlappar objektet som pekas ut av shapes[1]
    //Presentera resultatet
    if(shapes[0]->intersectsWith(*shapes[1]))
    {
        cout<<"Crossing each other."<<endl;
    }
    else
    {
        cout<<"Are not crossing each other."<<endl;
    }
    //Presentera endast riktningen fˆr HorisontalShape-objekten
    for(int i=0; i<nrOfShapes; i++)
    {
       if(dynamic_cast<HorisontalShape*>(shapes[i]) != nullptr)
       {
           cout<<shapes[i]->startString()<<shapes[i]->getDirectionAsString();
       }
    }


    //Du ska utgÂ frÂn att du inte pÂ fˆrhand vet frÂn vilka positioner de pekas ut frÂn pekarna i arrayen shapes


    Shape* *shapesCopy = nullptr;

    //Skapa fˆr shapesCopy en dynamiskt allokerad array innehÂllande capacity pekare av typen Shape
    shapesCopy = new Shape*[capacity];

    //Tillse att shapesCopy pekar ut identiska objekt med de objekt som shapes pekar ut
    //Djupkopieraing ska anv‰ndas!
    for(int i=0; i<nrOfShapes; i++)
    {
        shapesCopy[i]= shapes[i]->clone();
    }

    //Presentera samtliga Shapes-objekt som shapesCopy pekar ut
    for(int i=0; i<nrOfShapes; i++)
    {
        cout<<shapesCopy[i]->toString();
    }

    //Tillse att inga minnesl‰ckor finns
    /*for(int i=0; i<capacity; i++)*/
	for (int i = 0; i<nrOfShapes; i++)
    {
        delete shapes[i];
        delete shapesCopy[i];
    }
	delete[] shapesCopy;
	delete[] shapes;
	system("pause");
    return 0;
}
//Ska ge fˆljande utskrift:

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
//÷verlappar INTE varandra
//
//÷verlappar varandra
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