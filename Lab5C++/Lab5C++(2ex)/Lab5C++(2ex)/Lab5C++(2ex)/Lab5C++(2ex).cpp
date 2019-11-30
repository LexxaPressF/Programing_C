#include <iostream>
using namespace std;
void massiv(const int mas[], const int n);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int mas[], const int n, bool (*compare)(int a, int b));


int main()
{
	setlocale(LC_ALL, "RU");
	bool (*from_f[2])(int, int) = { from_min,from_max };
    int c;
	int const n = 10;
	int mas[n] = { 9,8,7,6,1,2,3,5,4,9 };
	cout << "Входные данные: " << endl;
	massiv(mas, n);
	int vybor = 0;
	cout << "1. Сортировать по возрастанию\n";       
	cout << "2. Сортировать по убыванию\n";  
	cin >> vybor; 
	bubble_sort(mas, n, (from_f[vybor - 1]));
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






//cout << "Введите кол-во элементов массива, n = ";
//delete[] mas;
//int *mas = new int[n];
//cout << "Введите элементы массива" << endl;
//for (int i = 0; i < n; i++)
//{
	//cin >> c;
	//mas[i] = c;
//}