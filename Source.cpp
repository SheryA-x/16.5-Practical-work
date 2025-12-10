#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rissuan");

	const int size = 5;
	int array[size][size];
	
	for (int i = 0; i < size; i++)
	{
		//cout << i << " ";

		for (int j = 0; j < size; j++)
		{
			cout << i+j << " ";
		}
		
		cout << endl;
		
	}













}