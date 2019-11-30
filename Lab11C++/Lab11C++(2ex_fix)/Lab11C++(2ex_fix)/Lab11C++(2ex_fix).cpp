#include <iostream>
#include <Windows.h>
using namespace std;


class Distance
{
private:
	int feet;
	float inches;
	
public:
	Distance();
	Distance(int f, float i)
	{
		feet = f;
		inches = i;
		if (i > 12)
		{
			i -= 12;
			f++;
		};
	}
	Distance(float metr)
	{
		float i = metr;
		feet = int(i / 12);
		inches = i - feet * 12;
	}
	

	void showdist()
	{
		cout << "Футы: " << feet << endl;
		cout << "Дюймы: " << inches << endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Distance dist1(1,2), dist2(1), dist3;
	dist1.showdist();
	dist2.showdist();
	dist3.showdist();
	float mtrs = 1;
	cout << mtrs;
	return 0;
} 