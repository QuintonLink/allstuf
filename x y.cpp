#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int sum=0;
	int pointmas[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Введите количество баллов: " << endl;
		cin >> pointmas[i];
		if (pointmas[i] < 0 || pointmas[i]>10)
		{
			while (pointmas[i] < 0 || pointmas[i]>10)
			{
				cout << "Неприемлимое значение. Повторите ввод: " << endl;
				cin >> pointmas[i];
			}
		}



		sum = sum + pointmas[i];
	}

	cout << "Количество баллов: " << sum << endl;


	system("pause");
}