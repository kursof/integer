/* Даны три переменные вещественного типа: A, B, C. 
 * Если их значения упорядочены по возрастанию, то удвоить их; 
 * в противном случае заменить значение каждой переменной на противоположное. 
 * Вывести новые значения переменных A, B, C. 
 */

#include <iostream>

int main()
{
	float a, b, c;

	std::cout << "введите три числа\n";
	std::cin >> a >> b >> c;

	if (a < b && b < c)
	{
		std::cout << a * 2 << "\n" << b * 2 << "\n" << c * 2 << "\n";
	}
	else
	{
		std::cout << a * (-1) << "\n" << b * (-1) << "\n" << c * (-1) << "\n";
	}

	return 0;
}