#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int x;
	int y;
	cout << "������� ��������" << endl;
	cin >> x;
	cout << "������� ��������" << endl;
	cin >> y;
	if ((x > 0) && (y > 0)) {
		cout << "���������� ��������� � 1 ������������ ���������" << endl;
	}
	else {
		if ((x < 0) && (y > 0)) {
			cout << "���������� ��������� � 2 ������������ ���������" << endl;
		}
		else {
			if ((x < 0) && (y < 0)) {
				cout << "���������� ��������� � 3 ������������ ���������" << endl;
			}
			else {
				if ((x > 0) && (y < 0)) {
					cout << "���������� ��������� � 4 ������������ ���������" << endl;
				}
				else {
					cout << "���������� ��������� �� ��� x ��� y" << endl;
				}
			}
		}
	}


















	system("pause");
}