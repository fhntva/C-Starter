 // ������� 3 ����� � �������� �� ����� �������� 
 // �����, ���������, � ������� �������������� ���� �����.


#include <iostream>

using namespace std;


	int main()
{
		int a, b, c, Quantity = 3;
		int sum, mult;
		double average;

		setlocale(LC_ALL, "russian");
		cout << "��������������� ������� 3 �������� " << endl;
		
		cin >> a >> b >> c;
		sum = a + b + c;
		cout << "������� �������������� 3 ����� �����: " <<sum << endl;
		mult = a * b * c;
		cout << "������������ 3 ����� �����: " << mult << endl;
		average = (a + b + c) / Quantity;
		cout << "������� �������������� 3 ����� �����: " << average << endl;
		
		


}

