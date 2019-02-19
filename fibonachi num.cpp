#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int i = 0;
	int n;
    int l = 1;
    int d = 1;
	cout << "Введите количество чисел Фибоначчи" << endl;
	cin >> n;
	if(n==1)
	{
	cout << l << endl;
    } 
    if(n==2)
    {
    cout << l << endl;
	cout << d << endl;
    }
    if(n==3)
    {
    cout << l << endl;
	cout << d << endl;
	cout<<2<<endl;
    }
    else
	{
	cout << l << endl;
	cout << d << endl;
	while (i <(n-2)/2) {
		i = i+1;
		d = l + d;
		cout << d << endl;
		l = d + l;
		cout << l << endl;
	}
    }










	return 0;
}
