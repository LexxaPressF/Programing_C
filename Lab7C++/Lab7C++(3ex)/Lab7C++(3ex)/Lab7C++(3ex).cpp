#include <iostream>
#include <windows.h>

using namespace std;

struct Distance												
{
	int feet;												
	double inches;
};

Distance AddDist(const Distance& d1, const Distance& d2)			
{
	Distance d;														
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	while (d.inches >= 12.0)										
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}

Distance InputDist()							
{
	Distance d;										
	cout << "\nВведите число футов: ";
	cin >> d.feet;
	cout << "Введите число дюймов: ";
	cin >> d.inches;
	while (d.inches >= 12.0)						
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}

void ShowDist(const Distance& d)					
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}

//Структура и методы взяты из прошлой программы

int main()
{
	setlocale(LC_ALL, "RU");
	Distance sum;											//Объявление переменной 					
	sum.feet = 0;											//(сумма всех элементов массива)
	sum.inches = 0;
	int n;
	cout << "Введите размер массива расстояний ";
	cin >> n;
	Distance *masDist = new Distance[n];					//Выделение места под массив расстояний
	for (int i = 0; i < n; i++)
	{
		masDist[i] = InputDist();							//Ввод элементов массива
	}
	for (int i = 0; i < n; i++)
	{
		ShowDist(masDist[i]);							//Вывод элементов массива
		sum = AddDist(sum, masDist[i]);
	}
	ShowDist(sum);
	delete[] masDist;										//Освобождение места программы
}
