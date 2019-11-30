#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int i, k, s, m;
	cin >> k;
	cin >> m;
	s = 0;
	for (int i = 1; i <= 100; i++) 
	{ 
		if ((i > k) && (i < m))    
		continue;   
	s += i; 
	}
	cout << s;
}
