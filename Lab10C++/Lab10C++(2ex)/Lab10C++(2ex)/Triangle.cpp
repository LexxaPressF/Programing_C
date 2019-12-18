#include "Triangle.h"
#include <iostream>
#include <math.h>
#include "Dot.h"
using namespace std;
Triangle::Triangle(Dot a, Dot b, Dot c) {
	this->FirstPoint = a;
	this->SecondPoint = b;
	this->ThirdPoint = c;
	this->side1 = Dot::dist(this->FirstPoint, this->SecondPoint);
	this->side2 = Dot::dist(this->SecondPoint, this->ThirdPoint);
	this->side3 = Dot::dist(this->ThirdPoint, this->FirstPoint);
}
void Triangle::ShowSides() {
	cout << "----------------------" << endl;
	cout << "Первая сторона = " << side1 << endl;
	cout << "Вторая сторона = " << side2 << endl;
	cout << "Третья сторона = " << side3 << endl;
}
double Triangle::Perimetr() {
	cout << "----------------------" << endl;
	double per = 0;
	per = side1 + side2 + side3;
	cout << "Периметр треугольника = " << per << endl;
	return per;
}
double Triangle::Square() {
	cout << "----------------------" << endl;
	double p = 0;
	double sq = 0;
	p = (side1 + side2 + side3)/2;
	sq = sqrt(p*(p-side1)*(p-side2)*(p-side3));
	cout << "Площадь треугольника = " << sq << endl;
	return sq;
}
