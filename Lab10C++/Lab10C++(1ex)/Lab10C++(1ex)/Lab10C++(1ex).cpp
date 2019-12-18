#include <iostream>
#include <string>
#include "student.h"
#include "IdCard.h"
#include <Windows.h>  //Подключение русского языка
using namespace std;

int main()
{
	SetConsoleCP(1251);			//Подключение русского языка
	SetConsoleOutputCP(1251);	//Подключение русского языка
	IdCard idc(123, "Базовый");

	Student* student02 = new Student("Алексей", "Малышев", &idc);
	cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
	cout << "Category: " << student02->getIdCard().getCategory() << endl;
	return 0;
}
