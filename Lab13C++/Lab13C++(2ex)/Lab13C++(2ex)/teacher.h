#pragma once
#include "human.h"
#include <string>

class teacher : public human {
	
public:
	// Конструктор класса teacher
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		unsigned int work_time) : human(last_name, name, second_name) {
		this->work_time = work_time;
	};
	// Получение информации
	void getinfo()
	{
		human::getinfo();
		std::cout << "Учебные часы: " 
			<< work_time << endl;
	}
private:
	// Учебные часы
	unsigned int work_time;
};

