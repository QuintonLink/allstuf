#include<iostream>
using namespace std;


void easynum(int a, int b)
{
	int num;
	while (a != 0 && b != 0) {
		if (a > b) {
			a = a % b;
		}
		else b = b % a;
	}
	num = a + b;

	if (num == 1)
	{
		cout << "����� ������� �������" << endl;

	}
	else
	{
		cout << "����� ��������� �������" << endl;
	}
}








int main()
{
	int a;
	int b;
	setlocale(LC_ALL, "rus");
	cout << "������� �����" << endl;
	cin >> a >> b;
	
	easynum(a, b);


	system("pause");
}


