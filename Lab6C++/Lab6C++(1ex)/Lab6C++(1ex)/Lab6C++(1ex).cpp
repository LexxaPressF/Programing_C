#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	double sum = 0;
	int const n = 100;
	double nums[n];
	for (int i = 0; i < n; i++)
	{
		nums[i] = (rand() % 100);
	}
	ofstream out("test", ios::out | ios::binary);	//Открытие файла на запись (также возможно записать в 2 строки
	if (!out)										//ofstream "Имя объекта"; "Имя объекта".open("Имя файла", режимы открытия);
	{												//В случаи не открытия файла
		cout << "Файл открыть невозможно\n";
		return 1;
	}
	out.write((char*)nums, sizeof(nums));			//Запись в файл через функцию write
	out.close();									//Закрытие файла	
	ifstream in("test", ios::in | ios::binary);		//Открытие файла на чтение
	if (!in)										//В случае не открытия файла
	{
		cout << "Файл открыть невозможно";
		return 1;
	}
	in.read((char*) &nums, sizeof(nums));			//Чтение файла через функцию read
	int k = sizeof(nums) / sizeof(double);			//Находим длинну массива
	for (int i = 0; i < k; i++)
	{
		sum = sum + nums[i];
		cout << nums[i] << ' ';
	}
	cout << "\nsum = " << sum << endl;				//Выводи сумму всех элементов массива
	in.close();										//Закрытие файла


}


