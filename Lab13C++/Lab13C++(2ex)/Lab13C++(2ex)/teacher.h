#pragma once
#include "human.h"
#include <string>

class teacher : public human {
	
public:
	// ����������� ������ teacher
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		unsigned int work_time) : human(last_name, name, second_name) {
		this->work_time = work_time;
	};
	// ��������� ����������
	void getinfo()
	{
		human::getinfo();
		std::cout << "������� ����: " 
			<< work_time << endl;
	}
private:
	// ������� ����
	unsigned int work_time;
};

