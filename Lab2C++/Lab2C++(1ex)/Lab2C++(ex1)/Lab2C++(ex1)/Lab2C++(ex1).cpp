#include <iostream>
using namespace std;

int main()
	{
		setlocale(LC_ALL, "Ru");
		double x; //Координаты точки
		double y;
		cout << ("\n Введите координаты ") << endl;
		cin >> x;
		cin >> y;
		if (x * x + y * y < 9 && y> 0) {           // "внутри"
			cout << ("внутри") << endl;
		}
		else if (x * x + y * y > 9 || y < 0) {      // "снаружи"
			cout << ("снаружи") << endl;
		}
		else {                                   // "на границе"
			cout << ("на границе") << endl;
		}

	}
