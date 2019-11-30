#include <iostream>
#include <math.h>
using namespace std;

int ploshad(double a);
int ploshad(double a, double b, double c);

int main()
{
	setlocale(LC_ALL, "Ru");
	double p, s; // Периметр и площадь треугольника
	double a; //Стороны треугольника
	cout << "Введите периметр треугольника ";
	cin >> p; //Ввод периметра треугольника
	cout << "Введите сторону треугольника ";
	cin >> a; //Ввод периметра треугольника
	ploshad(a, a, a);
	ploshad(p);
}

int ploshad(double p)
{
	double a, s;
	a = p / 3;
	s = sqrt(p / 2 * (p / 2 - a) * (p / 2 - a) * (p / 2 - a));
	cout << ("Площадь по периметру") << endl;
	cout << s << endl;
	return 0;
}

int ploshad(double a, double b, double c)
{
	double p, s;
	p = a + b + c;
	s = sqrt(p / 2 * (p / 2 - a) * (p / 2 - b) * (p / 2 - c));
	cout << ("Площадь по сторонам") << endl;
	cout << s << endl;
	return 0;
}

