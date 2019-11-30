#include <iostream>
#include <cmath>

using namespace std;
int korni(double a, double b, double c, double &x1, double &x2);

int main()
{
	setlocale(LC_ALL, "RU");
	double a, b, c, x1 = 0, x2 = 0, f;
	cout << "Введите элементы уравнения (ax^2+bx+c=0) последовательно:\n";
	cin >> a;
	cin >> b;
	cin >> c;
	f = korni(a, b, c, x1, x2);
	cout << f << "\n";
	cout << "Корни:\n";
	cout << x1 << "\n" << x2;
}

int korni(double a, double b, double c, double &x1, double &x2)
{
	setlocale(LC_ALL, "RU");
	double D; // D=b^2-4*a*c
	D = pow(b, 2) - 4 * a * c;
	if (D < 0)
	{
		return -1;
	}
	x1 = (-b + sqrt(D)) / (2 * a);
	x2 = (-b - sqrt(D)) / (2 * a);
	if (D == 0)
	{
		return 0;
	}
	else if (D > 0)
	{
		return 1;
	}
}
