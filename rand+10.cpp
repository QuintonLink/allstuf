#include<iostream>
#include<ctime> 
using namespace std;

void Ran10()
{
	srand(time(NULL));
	int a = rand() % (100) ;
	for (int i = 0; i < 10; i++)
	{
		cout << a << endl;
		a = a + 10;


	}



}












int main()
{
	setlocale(LC_ALL, "rus");
	

	Ran10();



	system("pause");
}