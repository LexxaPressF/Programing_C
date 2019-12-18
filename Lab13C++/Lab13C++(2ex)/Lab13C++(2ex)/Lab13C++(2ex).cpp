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
	vector <int> scores;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	human id1("Leonidovich", "Pavel", "Efimov");
	Student id2("Andreevich", "Aleksey", "Malyshev", scores);
	unsigned int teacher_work_time = 40;
	teacher id3("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	id1.getinfo();
	id2.getinfo();
	id3.getinfo();

	return 0;
}
