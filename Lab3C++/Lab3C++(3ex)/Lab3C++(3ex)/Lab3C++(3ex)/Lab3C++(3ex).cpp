#include <iostream>
#include <string> 
#include <Windows.h>

using namespace std;

void privet(string name);
void privet(string name, int k);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
	string name;
	int k;
	
	cout << "Введите Ваше любимое число" << endl; 
	cin >> k;
	cout << "Введите свое имя" << endl;
	cin >> name;
	privet(name);
	privet(name, k);
	return 0;
}

void privet(string name)
{
	cout << name << ", " << "здравствуйте!" << endl;
}

void privet(string name, int k)
{
	cout << name << " " << ", еще раз" <<" "<< "здравствуйте! " << "Вы ввели " << k << endl;
}


