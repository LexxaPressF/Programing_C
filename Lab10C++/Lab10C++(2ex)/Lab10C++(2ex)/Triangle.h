#pragma once
#include "Dot.h"
class Triangle
{
private:
	Dot FirstPoint;
	Dot SecondPoint;
	Dot ThirdPoint;
	double side1;
	double side2;
	double side3;
public:
	Triangle();
	Triangle(Dot a, Dot b, Dot c);
	void ShowSides();
	double Perimetr();
	double Square();
};

