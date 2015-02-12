/* Даны числа x, y, x1, y1, x2, y2. 
 * Проверить истинность высказывания: 
 * «Точка с координатами (x, y) лежит 
 * внутри прямоугольника, левая верхняя 
 * вершина которого имеет координаты (x1, y1), 
 * правая нижняя — (x2, y2), 
 * а стороны параллельны координатным осям».
 */

#include <iostream>

int main()
{
	int x, y;
	int x1, y1;
	int x2, y2;

	std::cout << "введите координаты левой верхней вершины\n";
	std::cin >> x1 >> y1;

	std::cout << "введите координаты правой нижней вершины\n";
	std::cin >> x2 >> y2;

	std::cout << "введите координаты базовой точки\n";
	std::cin >> x >> y;

	bool b = (y > y2 && y < y1 && x < x2 && x > x1);

	std::cout << b << "\n";

	return 0;
}
