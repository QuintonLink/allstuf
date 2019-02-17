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

	cout << "¬ведите высоту отверсти€" << endl;
	cin >> as;
	cout << "¬ведите ширину отверсти€" << endl;
	cin >> bs;
	cout << "¬ведите высоту крипича " << endl;
	cin >> a;
	cout << "¬ведите ширину кирпича" << endl;
	cin >> b;
	cout << "¬ведите длинну кирпича" << endl;
	cin >> c;

	if ((a <= as) && (b <= bs) || (a <= bs) && (b <= as)) {
		cout << " ирпич пройдет в отверстие" << endl;
	}
	else {
		if ((b <= as) && (c <= bs) || (b <= bs) && (c <= as)) {
			cout << " ирпич пройдет в отверстие" << endl;
		}
		else {
			if ((a <= as) && (c <= bs) || (a <= bs) && (c <= as)) {
				cout << " ирпич пройдет в отверстие" << endl;
			}
			else {
				if ((a <= 0) || (b <= 0) || (c <= 0) || (as <= 0) || (bs <= 0)) {
					cout << "ќшибка при вводе" << endl;
				}
				else {
					cout << " ирпич не проходит в отверстие" << endl;
				}
			}
		}
	}

	system("pause");
}