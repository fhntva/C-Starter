//��������� ����� �� ��������

#include<iostream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� ��� �������� �� �������� " << endl;
	int digit;
	cin >> digit;
	int number = 2;

	int check = digit % number;



	
	if (check ==1)
	{
		cout << "����� " << digit << " �� ������ "<< endl;
	}
	else
	{
		cout << "����� " << digit << " ������ " << endl;
	}

}