#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
class Student
{
public:										//Список методов доступных другим функциям и объектам программы
	void set_name(string student_name)		// Установка имени студента
	{
		name = student_name;
	}
	string get_name()						// Получение имени студента
	{
		return name;
	}
	void set_last_name(string student_last_name)	// Установка фамилии студента
	{
		last_name = student_last_name;
	}
	string get_last_name()					// Получение фамилии студента
	{
		return last_name;
	}
	void set_scores(int student_scores[])	// Установка промежуточных оценок
	{
		for (int i = 0; i < 5; ++i) {
			scores[i] = student_scores[i];
		}
	}
	void set_average_score(double ball)		// Установка среднего балла
	{
		average_score = ball;
	}
	double get_average_score()				// Получение среднего балла
	{
		return average_score;
	}
private:									//список свойств, методов и параметров для использования внутри класса									
	int scores[5];							// Промежуточные оценки
	double average_score;					// Средний балл
	string name;							// Имя
	string last_name;						// Фамилия
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);						//Команды для отображения русского языка в консоли
	Student student01;						//Создание объекта класса Student
	string name, last_name;	
	int scores[5];							//Объявление переменных
	cout << "Name: ";						//Ввод имени с клавиатуры
	getline(cin, name);						//Получение введеного значения
	cout << "Last name: ";					//Ввод фамилии
	getline(cin, last_name);				//Получение введеного значения
	int sum = 0;							// Сумма всех оценок
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";	// Ввод промежуточных оценок
		cin >> scores[i];
		sum += scores[i];					// суммирование
	}
	student01.set_name(name);				// Сохранение имени и фамилии в объект класса Student
	student01.set_last_name(last_name);
	student01.set_scores(scores);			// Сохранение промежуточных оценок в объект класса Student
	double average_score = sum / 5.0;
	student01.set_average_score(average_score);// Сохранение среднего балла в объект класса Student
	//Вывод информации об объекте student01
	cout << "Average ball for " << student01.get_name() << " " << student01.get_last_name() << " is " << student01.get_average_score() << endl;
	return 0;
}

