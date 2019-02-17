#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "¬ведите число" << endl;
	float a;
	cin >> a;
	for (int i = 0; i <= 10; i++)
	{
		cout << a << "*" << i << "=" << a * i << endl;
	}





	system("pause");
}