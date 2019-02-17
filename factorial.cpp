#include<iostream>
using namespace std;

int factorial(int a)
{
	int b=1;

	for (int i = 1; i <= a; i++)
	{
		b = b * i;
	}

	return b;

}
	




int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "¬ведите число" << endl;
	cin >> a;
	cout << factorial(a) << endl;





	system("pause");
}


