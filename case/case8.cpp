/* Даны два целых числа: D (день) и M (месяц),
 * определяющие правильную дату невисокосного года.
 * Вывести значения D и M для даты, предшествующей указанной.
 */

#include <iostream>

int main()
{
	int d, m;

	std::cout << "введите дату и месяц\n";
	std::cin >> d >> m;

	switch (d, m)
	{
		case 1:

		std::cout << 12;
		break;
	}
	
	return 0;
} 