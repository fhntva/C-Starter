//Проверка числа на четность

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Проверка числа на четность" << endl;
	int digit;
	cin >> digit;
	int number = 2;

	int check = digit % number;




	if (check == 1)
	{
		cout << "Число " << digit << " не четное " << endl;
	}
	else
	{
		cout << "Число " << digit << " четное " << endl;
	}

}