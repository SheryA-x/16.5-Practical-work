#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	int sum = 0;
	const int size = 5;
	int array[size][size];
	int index = buf.tm_mday % size;
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j] << " ";
			
			if (i == index)
			{
				sum = array[index][j] + sum;
			}
		}
		if (i == index)
		{
			cout << "—умма строки составл€ет = " << sum;
		}

		cout << endl;
		
	}
	cout << endl;
	cout << "N = " << size << endl;
	cout << "ƒеление сегодн€шнего дн€ на N = " << index << endl;


	







}