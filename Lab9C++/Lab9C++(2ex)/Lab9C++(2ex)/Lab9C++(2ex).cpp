#include <iostream>
#include <math.h>
using namespace std;
class Triangle {
public:
	double storona1;double storona2;double storona3;
	Triangle(double a, double b, double c) { if (a + b < c | a + c < b | c + b < a) throw double (a), double (b), double (c);
		storona1 = a;storona2 = b;storona3 = c; }
	
};
int main()
{
	setlocale(LC_ALL, "ru"); double a, b, c; //Стороны
	cout << "Введите стороны: "; cin >> a >> b >> c;
	try {
		Triangle be = Triangle(a, b, c);
	}
	catch (double) {
		cout << "Ошибка. Стороны " << a << " " << b << " " << c << " не могут образовать треугольник" << endl;
		cout << "Введите новые стороны: "; cin >> a >> b >> c;
	}
	return 0;
}