#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	double p, s; // Периметр и площадь треугольника
	double a; //Стороны треугольника
	cout << "Введите периметр треугольника ";
	cin >> p; //Ввод периметра треугольника
	a = p / 3;
	s = sqrt(p / 2 * (p / 2 - a) * (p / 2 - a) * (p / 2 - a));
	cout << ("\tСторона Площадь") << endl;
	cout << "\t" << a << "\t" << s << endl;
}
