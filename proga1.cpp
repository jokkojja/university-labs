#include<math.h>
#include<iostream>
#include<fstream>
using namespace std;
int range;

void rangeMass() {

	range = 0 + rand() % 10000;
}


void bubbleSort(int* num)
{
	
	
	for (int i = 0; i < range - 1; i++)
	{
		for (int j = (range - 1); j > i; j--) 
		{
			if (num[j - 1] > num[j]) 
			{
				int temp = num[j - 1]; 
				num[j - 1] = num[j];
				num[j] = temp;
			}
			

		}
		
	}
}



void zapis() {
	int k;
	int* m = new int[range];
	fstream file;
	file.open("E:\\Уник Программ\\2 сем 1 лаб (1)\\random.txt", ios::in);

	if (!file.is_open()) { cout << "Error: no file\n" << endl; }
	else
	{
		for (int i = 0; i < range; i++)
		{
			file >> m[i]; //считываем из файла и записываем в массив 
		}
		file.close();//закрываем файл
		bubbleSort(m);
		cout << "Сам массив -\n";
		for (int i = 0; i < range; i++)
		{
			cout<<m[i]<<" ";
		}
		cout << "\nЧисло k=";
		cin >> k;
		for (int i = 0; i < range; i++) {
			if (m[i] < k) {
				cout << m[i] << " ";
			}
		}
		cout << endl;
	}
	delete[] m;
}

		   int main() {
			   setlocale(LC_ALL, "");
			   rangeMass();
			   zapis();
		   }
