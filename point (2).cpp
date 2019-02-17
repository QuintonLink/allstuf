#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int x;
	int y;
	cout << "Введите ординату" << endl;
	cin >> x;
	cout << "Введите абсцисса" << endl;
	cin >> y;
	if ((x > 0) && (y > 0)) {
		cout << "Координата находится в 1 координатной плоскости" << endl;
	}
	else {
		if ((x < 0) && (y > 0)) {
			cout << "Координата находится в 2 координатной плоскости" << endl;
		}
		else {
			if ((x < 0) && (y < 0)) {
				cout << "Координата находится в 3 координатной плоскости" << endl;
			}
			else {
				if ((x > 0) && (y < 0)) {
					cout << "Координата находится в 4 координатной плоскости" << endl;
				}
				else {
					cout << "Координата находится на оси x или y" << endl;
				}
			}
		}
	}


















	system("pause");
}