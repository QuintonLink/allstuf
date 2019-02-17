#include<iostream>
using namespace std;

float VConus(float r, float h)
{
	



	return (1.0 / 3)*3.14*(r*r)*h;
}




int main()
{

	setlocale(LC_ALL, "rus");
	float a;
	float b;

	cout << "¬веди радиус и высоту" << endl;
	cin >> a >> b;



	
	cout << VConus(a, b) << endl;








	system("pause");


}