#include <iostream>
#include "Dot.h"
#include "Triangle.h"
#include "Windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double Perimetr, Square;
	Dot a;
	Dot b = Dot(0, 5);
	Dot c = Dot(5, 0);
	Triangle abc = Triangle(a,b,c);		
	abc.ShowSides();
	Perimetr = abc.Perimetr();
	Square = abc.Square();
}
