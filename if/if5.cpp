/* Даны три целых числа. Найти количество положительных
 * и количество отрицательных чисел в исходном наборе.
 */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "введите три целых числа\n";
	std::cin >> a >> b >> c;

	if (a == 0)
	{
		a = 0;//а собственно, что тут еще нужно писать?
	}
	else
	{
		a = 1;
	}

	if (b == 0)
	{
		b = 0;
	}
	else
	{
		b = 1;
	}

	if (c == 0)
	{
		c = 0;	
	}
	else
	{
		c = 1;
	}

	std::cout << a + b + c << "\n";

	return 0;
} 