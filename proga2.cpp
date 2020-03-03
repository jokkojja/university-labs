//Задание 2. Вариант 11
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int a, b, n, k;
	k = 15;
	cout << "Левая граница\n" << "a=";
	cin >> a;
	cout << "Правая граница\n" << "b=";
	cin >> b;
	while (a >= b) {
		cout << "Некорректные данные\n";
		cout << "Левая граница\n" << "a=";
		cin >> a;
		cout << "Правая граница\n" << "b=";
		cin >> b;
	}
	int* f2 = new int[b-a];
	int* f = new int[b - a];
	for (int i = 0; i < b-a; i++) {
		f[i] = rand() % (b - a + 1)+a;
		if (f[i] >= 0) {
			f2[i] = f[i];
			cout << f2[i]<<" "<<k;
		}
		cout << "\nValue of " << i << " element is " << f[i] << endl;
	}
	delete[] f;
	delete[] f2;
	return 0;
}
