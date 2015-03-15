/* Дано целое число N (> 0). Найти произведениe N! = 1·2·…·N
 * (N–факториал). Чтобы избежать целочисленного переполнения,
 * вычислять это произведение с помощью вещественной переменной
 * и вывести его как вещественное число. 
 */

#include <iostream>

int main()
{
	float n, nf = 1;

	std::cout << "введите n\n", std::cin >> n;

	for (float i = 1; i <= n; ++i)
	{
		nf *= i;
	}

	std::cout << nf << "\n";

	return 0;
}