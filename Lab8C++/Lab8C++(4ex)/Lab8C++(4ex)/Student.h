#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
using namespace std;


class Student
{
public:
	//Указание прототипов функций хранящихся в Student.cpp
	Student(string, string);// Конструктор класса Student           Задание с конструктором

	void set_name(string);// Установка имени студента

	string get_name();// Получение имени студента

	void set_last_name(string);// Установка фамилии студента

	string get_last_name();// Получение фамилии студента

	void set_scores(int[]);// Установка промежуточных оценок

	void set_average_score(double);// Установка среднего балла

	double get_average_score();// Получение среднего балла

	void save();// Запись данных о студенте в файл                Задание с записью в файл
	
	~Student();// Деструктор класса Student
private:

	int scores[5];// Промежуточные оценки

	double average_score;// Средний балл

	string name;// Имя

	string last_name;// Фамилия
};


