/* Даны две переменные целого типа: A и B. Если их значения не равны, 
 * то присвоить каждой переменной сумму этих значений, а если равны, 
 * то присвоить переменным нулевые значения. 
 * Вывести новые значения переменных A и B.
 */

#include <iostream>

int main()
{
	int a, b;

	std::cout << "введите два числа\n";
	std::cin >> a >> b;

	if (a == b)
	{
		a = b = 0;
	}
	else
	{
		a = b += a;
	}

	std::cout << a << "\n" << b << "\n";

	return 0;
}