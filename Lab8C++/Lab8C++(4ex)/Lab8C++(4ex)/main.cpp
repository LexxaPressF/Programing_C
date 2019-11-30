#include <iostream>
#include <string>
#include "student.h"
#include <Windows.h>  //Подключение русского языка
using namespace std;

int main()
{
	SetConsoleCP(1251);			//Подключение русского языка
	SetConsoleOutputCP(1251);	//Подключение русского языка
	string name, last_name;
	
	cout << "Name: ";
	getline(cin, name); // Ввод имени с клавиатуры
	
	cout << "Last name: ";
	getline(cin, last_name);// Ввод фамилии
	
	Student* student02 = new Student(name, last_name);// Передача параметров конструктору
	
	int scores[5];// Оценки
	
	int sum = 0;// Сумма всех оценок
	
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];					// Ввод промежуточных оценок
		
		sum += scores[i];					// суммирование
	}
	
	student02->set_scores(scores);// Сохраняем промежуточные оценки в объект класса Student
	
	double average_score = sum / 5.0;// Считаем средний балл
	
	student02->set_average_score(average_score);// Сохраняем средний балл в объект класса Student
	
	cout << "Average ball for " << student02->get_name() << " " << student02->get_last_name() << " is "
	<< student02->get_average_score() << endl;																// Выводим данные по студенту
	
	delete student02;// Удаление объекта student из памяти

	return 0;
}
