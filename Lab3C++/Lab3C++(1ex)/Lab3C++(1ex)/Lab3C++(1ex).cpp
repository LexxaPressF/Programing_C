#include <iostream>
#include <string> 
#include <windows.h> 
using namespace std;

void privet(string name)
{
	cout << "Введите свое имя" << endl;
	cin >> name;
	cout << name << ", " << "здравствуйте!" << endl;
}

int main()
{
	SetConsoleOutputCP(1251);  
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
	string name;
	privet(name);
	return 0;
}





