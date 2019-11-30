#include <iostream>																//Стандартная библиотека
#include <fstream>																//Библиотека для работы с файлами
#include <windows.h>															//Библиотека для отображения данных на русском
#include <stdlib.h>																//Библиотека для сортировки

using namespace std;

int comp1(const void* a, const void* b);										//Прототип функции  для сортировки по возрастанию
int comp2(const void* a, const void* b);										//Прототип функции  для сортировки по убыванию

int main()
{
	SetConsoleCP(1251);															//Команда для отображения русского языка
	SetConsoleOutputCP(1251);													//Команда для отображения русского языка
	const int n = 5;
	int mass[n];																//Объявление массива
	for (int i = 0; i < n; i++)													//Цикл для ввода массива
	{
		cout << "Введите элемент массива: ";
		cin >> mass[i];
	}
	ofstream massivy("massivs.txt", ios_base::out | ios_base::trunc);			//Создание объекта и прявязка его к файлу
	massivy << "Исходный массив " << mass;										//Вывод названия массива в файл
	massivy << "\nВывод элементов массива:\n";
	for (int i = 0; i < n; i++)													//Цикл для вывода элементов массива в файл
	{
		massivy << i << ": " << mass[i] <<"\n";
	}
	qsort(mass, n, sizeof(int), comp1);											//Сортировка массива с помощью встроенной функции библиотеки <stdlib.h>
	massivy << "Массив " << mass << " отсортированный по возрастанию  " ;
	massivy << "\nВывод элементов массива:\n";
	for (int i = 0; i < n; i++)													//Вывод массива отсортированного первым способом 
	{
		massivy << i << ": " << mass[i] << "\n";
	}
	qsort(mass, n, sizeof(int), comp2);											//Сортировка массива с помощью встроенной функции библиотеки <stdlib.h>
	massivy << "Массив " << mass << " отсортированный по убыванию  ";
	massivy << "\nВывод элементов массива:\n";
	for (int i = 0; i < n; i++)													//Вывод массива отсортированного вторым способом
	{
		massivy << i << ": " << mass[i] << "\n";
	}
	massivy.close();

}
int comp1(const void* a, const void* b)											//функция для сортировки по возрастанию
{
	return (*(int*)a - *(int*)b);
}
int comp2(const void* a, const void* b)											//функция для сортировки по убыванию
{
	return (*(int*)b - *(int*)a);
}
