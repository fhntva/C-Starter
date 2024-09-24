 // Введите 3 числа и выведите на экран значение 
 // суммы, умножение, и среднее арифмитическое этих чисел.


#include <iostream>

using namespace std;


	int main()
{
		int a, b, c, Quantity = 3;
		int sum, mult;
		double average;

		setlocale(LC_ALL, "russian");
		cout << "Последовательно введите 3 значения " << endl;
		
		cin >> a >> b >> c;
		sum = a + b + c;
		cout << "Среднее арифмитическое 3 чисел равно: " <<sum << endl;
		mult = a * b * c;
		cout << "Произведение 3 чисел равно: " << mult << endl;
		average = (a + b + c) / Quantity;
		cout << "Среднее арифмитическое 3 чисел равно: " << average << endl;
		
		


}

