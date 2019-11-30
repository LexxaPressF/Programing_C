#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


using namespace std;

int main()
{
	SetConsoleCP(1251);												//Русифицирование консоли
	SetConsoleOutputCP(1251);
	string stroka;
	int num, i = 1;
	ofstream dz("stishok.txt", ios_base::out | ios_base::trunc);	//Создание обЪекта для работы с файлами и привязывание к нему файла
	if (!dz.is_open())												//Если файл не открыт
	{																//сообщить об этом
		cout << "Файл не может быть открыт!\n";						
	}
	cout << "Введите количество строк: ";
	cin >> num;														//Получение количеств строк с клавиатуры
	num++;															//Увеличение переменной на 1
	getline(cin, stroka);											//Получение строки с пробелами
	for (i; i < num; i++)											//Создаем цикл
	{
		cout << "Введите " <<i<< "-ую строку:" << '\n';				
		getline(cin, stroka);										//Получение строки с пробелами
		dz << stroka << '\n';										//Внесение полученной строки в файл 
		stroka = "";												//Обнуление строки
	}
	dz.close();														//Закрытие файла
}
