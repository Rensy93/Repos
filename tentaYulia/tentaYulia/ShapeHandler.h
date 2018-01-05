#pragma once
#include"Geom.h"
#include"Cone.h"
#include"Parral.h"

class ShapeHandler
{
private:
	int cap;
	int nrOf;
	Geom* *shapes;

	//hjälp funktioner
	void initiate(int from = 0);
	void expand();
	void freeMemory();
	void makeCopy(const ShapeHandler &original);

public:
	ShapeHandler(int cap, int nrOf);
	ShapeHandler();
	~ShapeHandler();

	ShapeHandler(const ShapeHandler &original);  //copykonstruktor
	ShapeHandler& operator=(const ShapeHandler &original); //tilldelningsoperator

	void addCone(double radius, int hight);
	void addBox(int wight, int lenght, int hight);
	bool removeBox(int wight, int lenght, int hight);
	void getAll(string arr[], int capArr);



};