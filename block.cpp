#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	int b;
	int c;

	int as;
	int bs;

	cout << "������� ������ ���������" << endl;
	cin >> as;
	cout << "������� ������ ���������" << endl;
	cin >> bs;
	cout << "������� ������ ������� " << endl;
	cin >> a;
	cout << "������� ������ �������" << endl;
	cin >> b;
	cout << "������� ������ �������" << endl;
	cin >> c;

	if ((a <= as) && (b <= bs) || (a <= bs) && (b <= as)) {
		cout << "������ ������� � ���������" << endl;
	}
	else {
		if ((b <= as) && (c <= bs) || (b <= bs) && (c <= as)) {
			cout << "������ ������� � ���������" << endl;
		}
		else {
			if ((a <= as) && (c <= bs) || (a <= bs) && (c <= as)) {
				cout << "������ ������� � ���������" << endl;
			}
			else {
				if ((a <= 0) || (b <= 0) || (c <= 0) || (as <= 0) || (bs <= 0)) {
					cout << "������ ��� �����" << endl;
				}
				else {
					cout << "������ �� �������� � ���������" << endl;
				}
			}
		}
	}

	system("pause");
}