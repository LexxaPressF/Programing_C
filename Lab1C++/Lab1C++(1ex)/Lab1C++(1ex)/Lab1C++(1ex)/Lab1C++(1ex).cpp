#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int x; /* объявления переменных*/     
	int a, b; 
	cout << "\nВведите a и b:\n";    
	cin >> a;    // ввод с клавиатуры значения a  
	cin >> b;    // ввод с клавиатуры значения b  
	x = a / b;   // вычисление значения x  
	cout << "\nx = " << x << endl;  //вывод результата на экран 

	return 0;
}

