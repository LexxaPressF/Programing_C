#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include "IdCard.h"
using namespace std;


class Student
{
public:

	void setIdCard(IdCard* c);										//Новый метод

	IdCard getIdCard();												//Новый метод
	
	Student(string, string, IdCard* id);// Конструктор класса Student  //Изменения в конструкторе        

	void set_name(string);// Установка имени студента

	string get_name();// Получение имени студента

	void set_last_name(string);// Установка фамилии студента

	string get_last_name();// Получение фамилии студента

	void set_scores(int[]);// Установка промежуточных оценок

	void set_average_score(double);// Установка среднего балла

	double get_average_score();// Получение среднего балла

	void save();// Запись данных о студенте в файл               

	~Student();// Деструктор класса Student
private:
	IdCard* iCard;										//Новый атрибут IdCard

	int scores[5];// Промежуточные оценки

	double average_score;// Средний балл

	string name;// Имя

	string last_name;// Фамилия
};

