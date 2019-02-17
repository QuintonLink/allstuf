#include<iostream> 
#include<ctime> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int a;
	int c = 0;
	for (int b = 0; b < 20; b = b + 1)
	{
		a = rand() % (1066) - 116;
		cout << a << endl;
		if (a % 2 == 1)
		{
			c = c + 1;
		}

	}

	if (c > 0)
	{
		cout << "В ряду есть нечетные числа" << endl;
	}


	system("pause");
}