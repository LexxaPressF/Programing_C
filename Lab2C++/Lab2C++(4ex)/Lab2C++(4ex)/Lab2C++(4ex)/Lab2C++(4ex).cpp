#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int i, amount, x, y, bal;
	float x1, y1;
	bal = 0; // Количество баллов
	x = 10; // Координаты центра мишени по x
	y = 10; // Координаты центра мишени по y
	amount = 5; //Количество попыток
	for (i = 1; i <= amount; i++)
	{
		cout << "СТРЕЛЯЙТЕ!\n";
		cin >> x1; // Координаты выстрела по x
		cin >> y1; // Координаты выстрела по y
		if ((pow((x1 - x), 2) + pow((y1 - y), 2)) <= 1)
		{
			bal += 10;
			cout << "+10 баллов\n";
		}
		else if ((1 < (pow((x1 - x), 2) + pow((y1 - y), 2)) and ((pow((x1 - x), 2) + pow((y1 - y), 2)) <= 4)))
		{
			bal += 5;
			cout << "+5 баллов\n";
		}
		else if ((4 < (pow((x1 - x), 2) + pow((y1 - y), 2)) and ((pow((x1 - x), 2) + pow((y1 - y), 2)) <= 9)))
		{
			bal += 1;
			cout << "+1 балл\n";
		}
		else
		{
			cout << "Вы промазали\n";
		}
	}
	cout << "Вы набрали " << bal << endl;
	if (bal >= 40)
	{
		cout << "Вы Соколиный глаз?";
	}
	else if ((bal >= 20) and (bal < 40))
	{
		cout << "Неплохой результат";
	}
	else
	{
		cout << "Вы целились?";
	}
}


