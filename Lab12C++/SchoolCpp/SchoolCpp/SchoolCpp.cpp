#include <iostream>
#include "human.h"
#include "Student.h"
#include <string>
#include <vector>
#include <Windows.h>
#include "teacher.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	human id1("Leonidovich", "Pavel", "Efimov");
	cout << "ФИО человека: " << id1.get_full_name() << endl;
	vector <int> scores;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	Student id2("Andreevich", "Aleksey", "Malyshev", scores);
	cout << "ФИО студента: " << id2.get_full_name() << endl;
	cout << "Средний балл студента: " << id2.get_average_score() << endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич",teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "Количество часов: " << tch->get_work_time() <<std::endl;
		return 0;
}

