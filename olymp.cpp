#include<iostream> 
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	float n = 0;
	float a;
	int col = 0;
	for (int i = 0; i < 5; i++)
	{
		cout<< "������� ����� ����� (� ������)" <<endl;
		cin>> a;
		n = n + a;
		if (a > 50)
		{
			cout<< "���� ������� �������"<< endl;
			return 0;
			
		}
		if (n > 50)
		{
			n = a;
			col = col + 1;

		}



	}


	cout << "���������� ���������: " << col + 1 <<endl;















	system("pause");

}

