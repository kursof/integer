/* Единицы массы пронумерованы следующим образом: 1 — килограмм, 2 — миллиграмм,
 * 3 — грамм, 4 — тонна, 5 — центнер.
 * Дан номер единицы массы (целое число в диапазоне 1–5)
 * и масса тела в этих единицах (вещественное число).
 * Найти массу тела в килограммах.
 */

#include <iostream>

int main()
{
	int k;
	float m, m1;

	std::cout << "введите номер единицы массы\n";
	std::cin >> k;

	std::cout << "введите массу тела\n";
	std::cin >> m;

	switch (k)
	{
		case 1:
				m1 = m;
				break;
		case 2:
				m1 = m / 1000000;
				break;
		case 3:
				m1 = m / 1000;
				break;
		case 4:
				m1 = m * 1000;
				break;
		case 5:
				m1 = m * 100;
				break;
		default:
				std::cout << "ошибка\n";
				break;
	}

	std::cout << m1 << "\n";

	return 0;
} 