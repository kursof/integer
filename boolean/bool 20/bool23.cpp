/* Дано четырехзначное число. Проверить истинность высказывания: 
 * «Данное число читается одинаково слева направо и справа налево».
 */

#include <iostream>

int main()
{
	int a;
	int a1, a2, a3, a4;

	std::cout << "введите четырехзначное число\n";
	std::cin >> a;

	a1 = a / 1000;
	a4 = a % 10;
	a3 = (a % 100 - a4) / 10;
	a2 = (a % 1000 - a % 100) / 100;

	bool b = (a == (a4 * 1000 + a3 * 100 + a2 * 10 + a1));

	std::cout << "\n" << b << "\n";

	return 0;
}