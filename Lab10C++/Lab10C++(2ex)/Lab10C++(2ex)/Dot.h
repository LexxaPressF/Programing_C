#pragma once
class Dot
{
private:
	double x;
	double y;
public:
	Dot();
	Dot(double x, double y);
	static double dist(Dot p1, Dot p2);
};

