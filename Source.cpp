#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);


	const int size = 5;
	int array[size][size];
	
	int index = buf.tm_mday % size;
	
	int sum=0;

	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		sum = array[index][i] + sum;
	}



	cout << "ƒеление сегодн€шнего дн€ на N = " << index << endl;
	cout << "—умма строки составл€ет = " << sum << endl;


	//¬ыведите сумму элементов в строке массива, индекс которой равен остатку делени€ текущего числа календар€ на N(в двумерном массиве a[i][j], i Ч индекс строки).

	







}