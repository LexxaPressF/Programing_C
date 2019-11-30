#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	char op;
	cout << "Сделай свой выбор, собери авто свой мечты:  ";
	cin >> op;
	switch (op)
	{
	case 'S':
		cout << "Радио играть должно\n";
		
	case 'V':
		cout << "Кондиционер хочу\n";
		
	default:
		cout << "Колеса круглые\n";
		cout << "Мощный двигатель\n";
	}
}
