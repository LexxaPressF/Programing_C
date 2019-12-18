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
	
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }		// конструктор по умолчанию
	
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }	// конструктор с тремя параметрами
	Distance(float meters) : MTF(3.280833F)		// Конструктор с переводои из типа float в объект класса
	{
		float fltfeet = MTF * meters; // перевод в футы
		feet = int(fltfeet); // число полных футов
		inches = 12 * (fltfeet - feet); // остаток - это дюймы
	}
	void getdist()
	{
		cout << "\nВведите число футов : ";
		cin >> feet;
		cout << "\nВведите число дюймов : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << "Футы = " << feet << " |||||| " << "Дюймы = " << inches << "\n";
	}
	Distance operator+ (Distance d2) const
	{
		int f = feet + d2.feet;
		float i = inches + d2.inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}
	Distance operator- (Distance d2) const
	{
		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}

	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Distance dist1 = 2.35F;
	Distance dist2(2, 5);
	float mtrs;
	dist1.showdist();
	dist2.showdist();
	mtrs = static_cast<float>(dist1);
	mtrs = dist2;
	cout << mtrs;
	return 0;
}



