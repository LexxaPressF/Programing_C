#include "Dot.h"
#include <math.h>
Dot::Dot()
{
	x = 0; y = 0;
}
Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
}
double Dot::dist(Dot p1, Dot p2)
{
	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}