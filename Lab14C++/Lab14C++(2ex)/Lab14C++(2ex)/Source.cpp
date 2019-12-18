#include <iostream>
#include <Windows.h>
using namespace std;
template <typename C>
long average(C mas[], int size) {
	long av = 0;
	for (int i = 0; i < size; i++)
		av += mas[i];
	av = av / size;
	cout << "Среднее арифметическое массива: " << av << endl;
	return av;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	long arrl[] = { 214748211, 2147483646, 2127483647, 47483647 };
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char arrc[] = "Hello, word";
	int s1 = sizeof(arr) / sizeof(arr[0]);
	int s2 = sizeof(arrl) / sizeof(arr[0]);
	int s3 = sizeof(arrd) / sizeof(arrd[0]);
	int s4 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	average(arr, s1);
	average(arrl, s2);
	average(arrd, s3);
	average(arrc, s4);
}