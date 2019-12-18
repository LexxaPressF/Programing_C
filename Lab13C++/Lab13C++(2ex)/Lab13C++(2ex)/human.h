#include <string>
#include <sstream>
#pragma once

using namespace std;

class human
{
public:
	// Конструктор класса human
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// Получение ФИО человека
	virtual void getinfo()
	{
		cout << "--------------------------------------" << endl;
		cout << "Информация о человеке:" << endl << "ФИО: " 
			<< second_name << " " << name << " " << last_name << endl;
	}
private:
	string name; // имя
	string last_name; // фамилия
	string second_name; // отчество
};

