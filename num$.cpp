#include<iostream>
using namespace std;

void num(int a)
{

	if (a == 0)
	{
		cout << "$$$$$" << endl << "$   $" << endl << "$   $" << endl << "$   $" << endl << "$   $" << endl << "$   $" << endl << "$$$$$" << endl;
	}
	if (a == 1)
	{
		cout << "    $" << endl << "    $" << endl << "    $" << endl << "    $" << endl << "    $" << endl << "    $" << endl << "    $" << endl;
	}
	if (a == 2)
	{
		cout << "$$$$$" << endl << "    $" << endl << "    $" << endl << "$$$$$" << endl << "$" << endl << "$" << endl << "$" << "$$$$" << endl;
	}
	if (a == 3)
	{
		cout << "$$$$$" << endl << "    $" << endl << "    $" << endl << "$$$$$" << endl << "    $" << endl << "    $" << endl << "$$$$$" << endl;
	}
	if (a == 4)
	{
		cout << "$   $" << endl << "$   $" << endl << "$   $" << endl << "$$$$$" << endl << "    $" << endl << "    $" << endl << "    $" << endl;

	}
	if (a == 5)
	{
		cout << "$$$$$" << endl << "$" << endl << "$" << endl << "$$$$$" << endl << "    $" << endl << "    $" <<endl<< "$$$$$" << endl;
	}
	if (a == 6)
	{
		cout << "$$$$$" << endl << "$" << endl << "$" << endl << "$$$$$" << endl << "$   $" << endl << "$   $" << endl << "$$$$$" << endl;
	}
	if (a == 7)
	{
		cout << "$$$$$" << endl << "    $" << endl << "    $" << endl << "    $" << endl << "    $" << endl << "    $" << endl << "    $" << endl;
	}
	if (a == 8)
	{
		cout << "$$$$$" << endl << "$   $" << endl << "$   $" << endl << "$$$$$" << endl << "$   $" << endl << "$   $" << endl << "$$$$$" << endl;
	}
	if (a == 9)
	{
		cout << "$$$$$" << endl << "$   $" << endl << "$   $" << endl << "$$$$$" << endl << "    $" << endl << "    $" <<endl<< "$$$$$" << endl;
	}
	if ((a >= 10) || (a < 0))
	{
		cout << "Число не соответствует функции" << endl;
	}
}







int main()
{
	

	setlocale(LC_ALL, "rus");
	for (int i = 0; i < 10; i++)
	{
		num(i);
		cout << endl;
	}
	



	system("pause");
}