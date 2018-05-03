#pragma once
#include"Geom.h"
#include"Cone.h"
#include"Parral.h"

class ShapeHandler
{
private:
	int cap;
	int nrOf;
	Geom** shapes;

	//hjälp funktioner
	void makeCopy(const ShapeHandler &other);
	void freeMemory();
	void expand();
	void initiate(int from =0);

public:
	ShapeHandler();
	~ShapeHandler();
	ShapeHandler(int cap, int nrOf);

	ShapeHandler& operator=(const ShapeHandler &original);
	ShapeHandler(const ShapeHandler &orginal);

	void addCone(double rad, double hei);
	void addBox(double wid, double len, double hei);
	bool removeBox(double wid, double len, double hei);
	void getAll(string arr[], int cap);
	

};