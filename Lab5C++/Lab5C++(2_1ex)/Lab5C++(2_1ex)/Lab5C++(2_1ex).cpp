#include <iostream>
using namespace std;
void massiv(const int mas[], const int n);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int mas[], const int n, bool (*compare)(int a, int b));


int main()
{
	setlocale(LC_ALL, "RU");
	int c, vybor = 0;
	int const n = 10;
	int mas[n] = { 9,8,7,6,1,2,3,5,4,9 };
	cout << "Входные данные: " << endl;
	massiv(mas, n);
	cout << "1. Сортировать по возрастанию\n";
	cout << "2. Сортировать по убыванию\n";
	cin >> vybor;
	switch (vybor)
	{
	case 1: bubble_sort(mas, n, from_min); break;
	case 2: bubble_sort(mas, n, from_max); break;
	default: cout << "\rНеизвестная операция ";
	}
	cout << "Исходные данные: " << endl;
	massiv(mas, n);
	return 0;
}

void massiv(const int mas[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << "  ";
		cout << "\n";
	}
}

bool from_min(const int a, const int b)
{
	return a > b;
}

bool from_max(const int a, const int b)
{
	return a < b;
}

void bubble_sort(int mas[], const int n, bool (*compare)(int a, int b))
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if ((*compare)(mas[j], mas[j + 1]))
			{
				swap(mas[j], mas[j + 1]);
			}
		}
	}
}


