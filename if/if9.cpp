/* Даны две переменные вещественного типа: A, B. 
 * Перераспределить значения данных переменных так, чтобы в A оказалось 
 * меньшее из значений, а в B — большее. 
 * Вывести новые значения переменных A и B.
 */

#include <iostream>

int main()
{
	float a, b;

	std::cout << "введите два числа\n";
	std::cin >> a >> b;

	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;

		std::cout << a << "\n" << b << "\n";
	}
	else
	{
		b = a + b;
		a = b - a;
		b = b - a;

		std::cout << a << "\n" << b << "\n";
	}

	return 0;
} 