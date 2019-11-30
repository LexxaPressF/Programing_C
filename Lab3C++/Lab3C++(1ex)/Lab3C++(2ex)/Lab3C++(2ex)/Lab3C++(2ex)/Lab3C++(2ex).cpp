#include <cmath>
#include <iostream>
#include <string> 
using namespace std;

float storony(void);
float ploshady(float a, float b, float c);

int main()
{
	setlocale(LC_ALL, "RU");									//Команда для отображения русского языка в консоли
	float A, B, C, D, E, F, G;									//Объявление переменных (сторон)
	float ploshadA, ploshadB, ploshadC, S;						//Объявление переменных (площадей треугольников и общей)
	A = storony();										//Сторона пятиугольника
	B = storony();										//Сторона пятиугольника
	C = storony();										//Сторона пятиугольника
	D = storony();										//Сторона пятиугольника
	E = storony();										//Сторона пятиугольника
	G = storony();										//Вспомагательная сторона
	F = storony();										//Вспомагательная сторона
	ploshadA = ploshady(A, G, F);
	ploshadB = ploshady(E, D, F);								//Получение площадей с помощью функций
	ploshadC = ploshady(C, B, G);
	S = ploshadA + ploshadB + ploshadC;
	cout << "Площадь всего пятиугольника = " << S;
}

 float storony(void)									//Функция, высчитывающая длинну стороны (принимает 1 аргумент)
{
	cout << "Введите координаты точек для построения сторон\n";
	float Ax, Ay, Bx, By, storona;										//Объявление локальных переменных функции
	cin >> Ax >> Ay >> Bx >> By;								//Получение значений от пользователя			
	storona = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));		//Вычисление стороны по полученным значениям
	cout << "Сторона пятиугольника = " << storona << "\n";
	return storona;												//Возвращение аргумента типа float
}

 float ploshady(float a, float b, float c)						//Функция подсчитывающая площадь треугольника (принимает 3 аргумента)
 {
	 float p, ploshad;											//Объявление локальных переменных (полупериметр и площадь треугольника)	
	 p = (a + b + c) / 2;
	 ploshad = sqrt(p * (p - a) * (p - b) * (p - c));			//Формула вычисления площади
	 cout << "Площадь равна " << ploshad << "\n";
	 return ploshad;
 }