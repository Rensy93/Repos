#pragma once
#include"Shape.h"
#include"Box.h"
#include "Cone.h"


class ShapeHandler
{
private:
	int cap;
	int nrOf;
	Shape** shapes;

	void initiate(int from = 0);
	void deepCopy(const ShapeHandler &original);
	void freeMemory();
	void expand();

public:
	ShapeHandler(int cap);
	ShapeHandler();

	virtual~ShapeHandler();

	ShapeHandler& operator=(const ShapeHandler &original);
	ShapeHandler(const ShapeHandler &original);

	void addCone(double height, double radius);
	void addBox(double  height, double width, double length);
	bool removeBox(double width, double length, double height);
	void getAll(string strArray[], int arrayCap) const;


};