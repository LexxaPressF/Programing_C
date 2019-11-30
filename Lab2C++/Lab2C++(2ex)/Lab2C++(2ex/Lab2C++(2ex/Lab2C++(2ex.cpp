#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int a;
	cout << ("\n Какой сейчас год? ");
	cin >> a;
	cout << ("Этот год высокосный? ");
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) 
	{
		cout << ("YES\n");
	}
	else
	{
		cout << ("NO\n");
	}
}
