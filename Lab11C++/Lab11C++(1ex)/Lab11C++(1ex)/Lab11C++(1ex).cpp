#include <iostream>
#include <Windows.h>
using namespace std;



class Distance
{
private:
	int feet;
	float inches;
public:
	
	Distance() : feet(0), inches(0.0) { }		// конструктор по умолчанию
	Distance(int ft, float in) : feet(ft), inches(in) { }	// конструктор с двумя параметрами
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
	Distance operator+ (Distance d2) const		// Переопределение оператора сложения
	{
		int f = feet + d2.feet;
		float i = inches + d2.inches;
		if (i >= 12.0)							
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);					// Возвращаемое значение - экземпляр класса
	};
	Distance operator- (Distance d2) const		// Переопределение оператора вычитания
	{
		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i < 0.0)
		{
			f--;
			i += 12;
		}
		
		if ((f < 0) or (i < 0))
		{
			cout << "Значения не могут быть отрицательными!" << endl;
			return Distance(0, 0);
		}
		else return Distance(f, i);
	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);				//Русифицирование консоли
	Distance dist1, dist2, dist3, dist4;
	dist1.getdist();
	dist2.getdist();
	dist3 = dist1 + dist2;
	dist3.showdist();
	dist4 = dist1 + dist2 + dist3;
	dist4.showdist();
	dist3 = dist1 - dist2;
	dist3.showdist();
	return 0;
}


