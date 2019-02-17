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
		cout << "       $" << endl << "       $" << endl << "       $" << endl << "       $" << endl << "       $" << endl << "       $" << endl << "       $" << endl;
	}
	if (a == 2)
	{
		cout << "$$$$$" << endl << "    $" << endl << "    $" << endl << "$$$$$" << endl << "$" << endl << "$" << endl << "$" << "$$$$" << endl;
	}

	if (a == 3)
	{
		cout << "$$$$$" << endl << "        $" << endl << "        $" << endl << "$$$$$" << endl << "        $" << endl << "        $" << endl << "$$$$$" << endl;
	}



}









int main()
{
	setlocale(LC_ALL, "rus");
	int a = 3;

	num(a);



	system("pause");
}