#pragma once
#include "human.h"
#include <string>
#include <vector>
class Student : public human {
public:
	// ����������� ������ Student
	Student(std::string last_name, std::string name, std::string second_name, std::vector<int> scores) : human(last_name, name, second_name)
	{
		this->scores = scores;
	};
	// ��������� �������� ����� ��������
	void getinfo()
	{
		human::getinfo();
		// ����� ���� ������ ��������
		unsigned int sum_scores = 0;
		for (unsigned int i = 0; i < this->scores.size(); ++i) 
		{
			sum_scores += this->scores[i];
		}
		float average_score = sum_scores/ this->scores.size();
		cout << "������� ���� ��������: " << average_score 
			<< endl;
	}
private:
	// ������ ��������
	std::vector<int> scores;
};
