#include <iostream>
#include <windows.h>

using namespace std;

struct Distance												//Объявление структуры
{
	int feet;												//Объявление компонентов структуры
	double inches;
};

Distance AddDist(const Distance& d1, const Distance& d2)			//Объявление функции c константными ссылками в качестве аргументов
{
	Distance d;														//Объявление элемента структуры внутри функции
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	while (d.inches >= 12.0)										//Цикл для увеличения числа футов при переполнении дюймов 
	{																//(был изменен на while для корректной работы)
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}

Distance InputDist()								//Объявление функции возращающей результатом элемент структуры (позволяет вводить элементы структуры)
{
	Distance d;										//Объявление элемента структуры внутри функции
	cout << "\nВведите число футов: ";
	cin >> d.feet;
	cout << "Введите число дюймов: ";
	cin >> d.inches;
	while (d.inches >= 12.0)						//Цикл для увеличения числа футов при переполнении дюймов
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}

void ShowDist(const Distance &d)					//Объявление функции c константной ссылкой в качестве аргументов
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}



int main()
{
	setlocale(LC_ALL, "RU");						//Команда для отображения руского языка
	Distance d1 = InputDist();						//Объявление элемента структуры через функцию ввода
	Distance d2 = { 1, 6.25 };						//Объявление элемента структуры через заданые через запятую значения
	Distance d3 = AddDist(d1, d2);					//Объявление элемента структуры через функцию сложения двух элементов структуры
	ShowDist(d1);
	ShowDist(d2);									//Внешня функция вывода значений элемента
	ShowDist(d3);
}


