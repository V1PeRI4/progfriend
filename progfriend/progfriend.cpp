

/*
https://wpcalc.com/vozvedenie-eksponenta-v-stepen/ калькулятор для е^х 
Внимательно смотри задание, там  е^МИНУСх. Из-за этого вводим в калькулятор противоположное число
А лучше всего решать самим) удачи
*/
#include <iostream>
using namespace std;

double fact(int N) //функция для факториала
{
	if (N < 0) //вводится отрицательное
		return 0;
	if (N == 0) //вводится 0
		return 1;
	else // положительно
		return N * fact(N - 1); //вычисление факториала
}

int main()
{
	setlocale(LC_ALL, "rus"); 
	long double *arr; 
	int n = 30; //можно и самому ввести, но если больше 500, то значения плохие выводятся. 30 самое оптимальное
	long double result = 0, x;


	cout << "Введите X: ";
	cin >> x; //икс, который в бесконечной сумме
	arr = new long double[n]; //обьявление массива 

	cout << "Последовательность: ";
	for (int i = 0; i < n; i++) 
	{
		arr[i] = pow(-1, i) * pow(x, i) / fact(i); //сам бесконечный ряд
		cout << arr[i] << " ";  
		result += arr[i]; 
	}

	cout << endl << result; 

	delete[]arr; 

	return 0;
}