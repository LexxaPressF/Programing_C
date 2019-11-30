#include <iostream>
#include <Windows.h>
using namespace std;


class Distance
{
private:
	int feet;
	float inches;
	const float MTF;
public:

	//Конструкторы
	Distance() : feet(0), inches(0.0), MTF(3.280833F) {}	// конструктор по умолчанию
	
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) {}	// конструктор с тремя параметрами

	Distance(float meters) : MTF(3.280833F)		//Конструктор для перевода из вещественного типа в объект класса
	{
		float fltfeet = MTF * meters; // перевод в футы
		feet = int(fltfeet); // число полных футов
		inches = 12 * (fltfeet - feet); // остаток - это дюймы
	}
	//Конструкторы

	//Функции
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}

	void getdist()		// Функция задания значений экземпляра 
	{
		
		cout << "\nВведите число футов : ";
		cin >> feet;
		cout << "\nВведите число дюймов : ";
		cin >> inches;
	}

	void showdist()		// Функция вывода значений экземпляра 
	{
		cout << "Футы = " << feet << " |||||| " << "Дюймы = " << inches << "\n";
	}
	//Функции

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);							//Русифицирование консоли
	Distance dist1 = 2.35F, dist2;
	dist1.showdist();
	float metr = 1;
	dist2 = metr;
	dist2.showdist();
	
	
	return 0;
}




