#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++) 
	{ 
		cout << "mas[" << i << "]=";    
		cin >> mas[i]; 
	}
	int s = 0;  
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << "Сумма всех элементов массива = " << s << "\n";
	cout << "Среднее значения элемента массива = " << s / n << "\n";

	// Задачи а и b 
	int minus = 0, plus = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] >= 0)
		{
			plus += mas[i];
		}
		else
		{
			minus += mas[i];
		}
	}
	cout << "Сумма отрицательных элементов = " << minus << "\n";
	cout << "Сумма положительных элементов = " << plus << "\n";

	//Задачи с и d
	int chet = 0, nechet = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			chet += mas[i];
		}
		else
		{
			nechet += mas[i];
		}
	}
	cout << "Сумма элементов с четными номерами = " << chet << "\n";
	cout << "Сумма элементов с нечетными номерами = " << nechet << "\n";
}

